#!/usr/bin/env python3
from flask import Flask
from ask_sdk_core.skill_builder import SkillBuilder
from flask_ask_sdk.skill_adapter import SkillAdapter
from ask_sdk_core.utils import is_request_type, is_intent_name
from ask_sdk_core.handler_input import HandlerInput
from ask_sdk_model import Response
from ask_sdk_model.ui import SimpleCard
from ask_sdk_core.dispatch_components import AbstractRequestHandler, AbstractExceptionHandler
from robot_arm_interfaces.action import RobotArmTask
import rclpy
from rclpy.node import Node
import threading
from rclpy.action import ActionClient
from ask_sdk_core.attributes_manager import AttributesManager

# Initialize rclpy in a separate thread
threading.Thread(target=lambda: rclpy.init()).start()
action_client = ActionClient(Node('alexa_interface'), RobotArmTask, "task_server")

app = Flask(__name__)

# Global task queue
task_queue = []

# Background worker to process task queue
def process_tasks():
    while True:
        if task_queue:
            task_number = task_queue.pop(0)
            goal = RobotArmTask.Goal()
            goal.task_number = task_number
            action_client.send_goal_async(goal)

# Start background task processing thread
threading.Thread(target=process_tasks, daemon=True).start()

# Launch Request Handler to activate the robot and initiate the session
class LaunchRequestHandler(AbstractRequestHandler):
    def can_handle(self, handler_input):
        return is_request_type("LaunchRequest")(handler_input)

    def handle(self, handler_input):
        session_attr = handler_input.attributes_manager.session_attributes
        session_attr["robot_active"] = True  # Set robot as active in session

        speech_text = "Hi, how can we help? The robot is now activated."

        handler_input.response_builder.speak(speech_text).set_card(
            SimpleCard("Online", speech_text)).set_should_end_session(
            False)

        # Start the robot with task 0
        task_queue.append(0)

        return handler_input.response_builder.response


# Pick Intent Handler to execute the picking task
class PickIntentHandler(AbstractRequestHandler):
    def can_handle(self, handler_input):
        return is_intent_name("PickIntent")(handler_input)

    def handle(self, handler_input):
        session_attr = handler_input.attributes_manager.session_attributes
        if session_attr.get("robot_active", False):  # Check if robot is active
            speech_text = "Ok, I'm moving. What's next?"

            # Add the picking task to the queue
            task_queue.append(1)
        else:
            speech_text = "Please activate the robot first."

        handler_input.response_builder.speak(speech_text).set_card(
            SimpleCard("Pick", speech_text)).set_should_end_session(
            False)

        return handler_input.response_builder.response


# Sleep Intent Handler to deactivate the robot
class SleepIntentHandler(AbstractRequestHandler):
    def can_handle(self, handler_input):
        return is_intent_name("SleepIntent")(handler_input)

    def handle(self, handler_input):
        session_attr = handler_input.attributes_manager.session_attributes
        session_attr["robot_active"] = False  # Deactivate the robot

        speech_text = "Ok, see you later. The robot is now deactivated."

        handler_input.response_builder.speak(speech_text).set_card(
            SimpleCard("Sleep", speech_text)).set_should_end_session(
            True)

        # Add the sleep task to the queue
        task_queue.append(2)

        return handler_input.response_builder.response


# Wake Intent Handler to reactivate the robot
class WakeIntentHandler(AbstractRequestHandler):
    def can_handle(self, handler_input):
        return is_intent_name("WakeIntent")(handler_input)

    def handle(self, handler_input):
        session_attr = handler_input.attributes_manager.session_attributes
        session_attr["robot_active"] = True  # Reactivate the robot

        speech_text = "I dropped the Object !!!"

        handler_input.response_builder.speak(speech_text).set_card(
            SimpleCard("Drop", speech_text)).set_should_end_session(
            False)

        # Start the robot with task 0 (reinitializing)
        task_queue.append(0)

        return handler_input.response_builder.response


# Exception Handler for any unhandled errors
class AllExceptionHandler(AbstractExceptionHandler):
    def can_handle(self, handler_input, exception):
        return True

    def handle(self, handler_input, exception):
        speech = "Hmm, I don't know that. Can you please say it again?"
        handler_input.response_builder.speak(speech).ask(speech)
        return handler_input.response_builder.response


# Create SkillBuilder and register handlers
skill_builder = SkillBuilder()
skill_builder.add_request_handler(LaunchRequestHandler())
skill_builder.add_request_handler(PickIntentHandler())
skill_builder.add_request_handler(SleepIntentHandler())
skill_builder.add_request_handler(WakeIntentHandler())
skill_builder.add_exception_handler(AllExceptionHandler())

# Create SkillAdapter for Flask
skill_adapter = SkillAdapter(
    skill=skill_builder.create(),
    skill_id="amzn1.ask.skill.2aa52402-28e7-4b9b-8f2b-7e121303d3a9",
    app=app
)

# Register skill adapter with Flask
skill_adapter.register(app=app, route="/")


if __name__ == '__main__':
    app.run(host="0.0.0.0", port=4000)
