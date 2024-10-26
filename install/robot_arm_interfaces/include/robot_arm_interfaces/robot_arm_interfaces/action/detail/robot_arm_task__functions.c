// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_arm_interfaces:action/RobotArmTask.idl
// generated code does not contain a copyright notice
#include "robot_arm_interfaces/action/detail/robot_arm_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_arm_interfaces__action__RobotArmTask_Goal__init(robot_arm_interfaces__action__RobotArmTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_number
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Goal__fini(robot_arm_interfaces__action__RobotArmTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_number
}

bool
robot_arm_interfaces__action__RobotArmTask_Goal__are_equal(const robot_arm_interfaces__action__RobotArmTask_Goal * lhs, const robot_arm_interfaces__action__RobotArmTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_number
  if (lhs->task_number != rhs->task_number) {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Goal__copy(
  const robot_arm_interfaces__action__RobotArmTask_Goal * input,
  robot_arm_interfaces__action__RobotArmTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_number
  output->task_number = input->task_number;
  return true;
}

robot_arm_interfaces__action__RobotArmTask_Goal *
robot_arm_interfaces__action__RobotArmTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Goal * msg = (robot_arm_interfaces__action__RobotArmTask_Goal *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_Goal));
  bool success = robot_arm_interfaces__action__RobotArmTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_Goal__destroy(robot_arm_interfaces__action__RobotArmTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Goal * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_Goal *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_Goal__Sequence *
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_Goal__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_Goal * data =
      (robot_arm_interfaces__action__RobotArmTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robot_arm_interfaces__action__RobotArmTask_Result__init(robot_arm_interfaces__action__RobotArmTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Result__fini(robot_arm_interfaces__action__RobotArmTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
robot_arm_interfaces__action__RobotArmTask_Result__are_equal(const robot_arm_interfaces__action__RobotArmTask_Result * lhs, const robot_arm_interfaces__action__RobotArmTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Result__copy(
  const robot_arm_interfaces__action__RobotArmTask_Result * input,
  robot_arm_interfaces__action__RobotArmTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

robot_arm_interfaces__action__RobotArmTask_Result *
robot_arm_interfaces__action__RobotArmTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Result * msg = (robot_arm_interfaces__action__RobotArmTask_Result *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_Result));
  bool success = robot_arm_interfaces__action__RobotArmTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_Result__destroy(robot_arm_interfaces__action__RobotArmTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Result * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_Result *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_Result__Sequence *
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_Result__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_Result * data =
      (robot_arm_interfaces__action__RobotArmTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robot_arm_interfaces__action__RobotArmTask_Feedback__init(robot_arm_interfaces__action__RobotArmTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Feedback__fini(robot_arm_interfaces__action__RobotArmTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
robot_arm_interfaces__action__RobotArmTask_Feedback__are_equal(const robot_arm_interfaces__action__RobotArmTask_Feedback * lhs, const robot_arm_interfaces__action__RobotArmTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Feedback__copy(
  const robot_arm_interfaces__action__RobotArmTask_Feedback * input,
  robot_arm_interfaces__action__RobotArmTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

robot_arm_interfaces__action__RobotArmTask_Feedback *
robot_arm_interfaces__action__RobotArmTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Feedback * msg = (robot_arm_interfaces__action__RobotArmTask_Feedback *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_Feedback));
  bool success = robot_arm_interfaces__action__RobotArmTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_Feedback__destroy(robot_arm_interfaces__action__RobotArmTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Feedback * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_Feedback *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence *
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_Feedback * data =
      (robot_arm_interfaces__action__RobotArmTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robot_arm_interfaces/action/detail/robot_arm_task__functions.h"

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robot_arm_interfaces__action__RobotArmTask_Goal__init(&msg->goal)) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robot_arm_interfaces__action__RobotArmTask_Goal__fini(&msg->goal);
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!robot_arm_interfaces__action__RobotArmTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!robot_arm_interfaces__action__RobotArmTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__action__RobotArmTask_SendGoal_Request *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Request *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request));
  bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * data =
      (robot_arm_interfaces__action__RobotArmTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__action__RobotArmTask_SendGoal_Response *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Response *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response));
  bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * data =
      (robot_arm_interfaces__action__RobotArmTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__action__RobotArmTask_GetResult_Request *
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg = (robot_arm_interfaces__action__RobotArmTask_GetResult_Request *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Request));
  bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence *
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_GetResult_Request * data =
      (robot_arm_interfaces__action__RobotArmTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "robot_arm_interfaces/action/detail/robot_arm_task__functions.h"

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robot_arm_interfaces__action__RobotArmTask_Result__init(&msg->result)) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robot_arm_interfaces__action__RobotArmTask_Result__fini(&msg->result);
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!robot_arm_interfaces__action__RobotArmTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!robot_arm_interfaces__action__RobotArmTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__action__RobotArmTask_GetResult_Response *
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg = (robot_arm_interfaces__action__RobotArmTask_GetResult_Response *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Response));
  bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence *
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_GetResult_Response * data =
      (robot_arm_interfaces__action__RobotArmTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robot_arm_interfaces/action/detail/robot_arm_task__functions.h"

bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robot_arm_interfaces__action__RobotArmTask_Feedback__init(&msg->feedback)) {
    robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robot_arm_interfaces__action__RobotArmTask_Feedback__fini(&msg->feedback);
}

bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__are_equal(const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * lhs, const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robot_arm_interfaces__action__RobotArmTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__copy(
  const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * input,
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robot_arm_interfaces__action__RobotArmTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__action__RobotArmTask_FeedbackMessage *
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg = (robot_arm_interfaces__action__RobotArmTask_FeedbackMessage *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage));
  bool success = robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__destroy(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__init(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (robot_arm_interfaces__action__RobotArmTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence *
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array = (robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * data =
      (robot_arm_interfaces__action__RobotArmTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
