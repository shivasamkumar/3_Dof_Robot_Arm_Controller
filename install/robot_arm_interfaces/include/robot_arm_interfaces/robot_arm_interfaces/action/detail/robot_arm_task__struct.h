// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_arm_interfaces:action/RobotArmTask.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__STRUCT_H_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_Goal
{
  int32_t task_number;
} robot_arm_interfaces__action__RobotArmTask_Goal;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_Goal.
typedef struct robot_arm_interfaces__action__RobotArmTask_Goal__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_Result
{
  bool success;
} robot_arm_interfaces__action__RobotArmTask_Result;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_Result.
typedef struct robot_arm_interfaces__action__RobotArmTask_Result__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_Feedback
{
  int32_t percentage;
} robot_arm_interfaces__action__RobotArmTask_Feedback;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_Feedback.
typedef struct robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_arm_interfaces/action/detail/robot_arm_task__struct.h"

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_arm_interfaces__action__RobotArmTask_Goal goal;
} robot_arm_interfaces__action__RobotArmTask_SendGoal_Request;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_SendGoal_Request.
typedef struct robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_arm_interfaces__action__RobotArmTask_SendGoal_Response;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_SendGoal_Response.
typedef struct robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_arm_interfaces__action__RobotArmTask_GetResult_Request;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_GetResult_Request.
typedef struct robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_arm_interfaces/action/detail/robot_arm_task__struct.h"

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_GetResult_Response
{
  int8_t status;
  robot_arm_interfaces__action__RobotArmTask_Result result;
} robot_arm_interfaces__action__RobotArmTask_GetResult_Response;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_GetResult_Response.
typedef struct robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_arm_interfaces/action/detail/robot_arm_task__struct.h"

/// Struct defined in action/RobotArmTask in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__RobotArmTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_arm_interfaces__action__RobotArmTask_Feedback feedback;
} robot_arm_interfaces__action__RobotArmTask_FeedbackMessage;

// Struct for a sequence of robot_arm_interfaces__action__RobotArmTask_FeedbackMessage.
typedef struct robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence
{
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__STRUCT_H_
