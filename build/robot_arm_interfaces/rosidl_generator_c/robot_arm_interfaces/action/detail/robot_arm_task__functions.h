// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_arm_interfaces:action/RobotArmTask.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__FUNCTIONS_H_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_arm_interfaces/action/detail/robot_arm_task__struct.h"

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_Goal
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__init(robot_arm_interfaces__action__RobotArmTask_Goal * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Goal__fini(robot_arm_interfaces__action__RobotArmTask_Goal * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Goal *
robot_arm_interfaces__action__RobotArmTask_Goal__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Goal__destroy(robot_arm_interfaces__action__RobotArmTask_Goal * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__are_equal(const robot_arm_interfaces__action__RobotArmTask_Goal * lhs, const robot_arm_interfaces__action__RobotArmTask_Goal * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__copy(
  const robot_arm_interfaces__action__RobotArmTask_Goal * input,
  robot_arm_interfaces__action__RobotArmTask_Goal * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence *
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Goal__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Goal__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_Result
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__init(robot_arm_interfaces__action__RobotArmTask_Result * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Result__fini(robot_arm_interfaces__action__RobotArmTask_Result * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Result *
robot_arm_interfaces__action__RobotArmTask_Result__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Result__destroy(robot_arm_interfaces__action__RobotArmTask_Result * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__are_equal(const robot_arm_interfaces__action__RobotArmTask_Result * lhs, const robot_arm_interfaces__action__RobotArmTask_Result * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__copy(
  const robot_arm_interfaces__action__RobotArmTask_Result * input,
  robot_arm_interfaces__action__RobotArmTask_Result * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Result__Sequence *
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Result__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Result__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Result__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Result__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_Feedback
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__init(robot_arm_interfaces__action__RobotArmTask_Feedback * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Feedback__fini(robot_arm_interfaces__action__RobotArmTask_Feedback * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Feedback *
robot_arm_interfaces__action__RobotArmTask_Feedback__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Feedback__destroy(robot_arm_interfaces__action__RobotArmTask_Feedback * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__are_equal(const robot_arm_interfaces__action__RobotArmTask_Feedback * lhs, const robot_arm_interfaces__action__RobotArmTask_Feedback * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__copy(
  const robot_arm_interfaces__action__RobotArmTask_Feedback * input,
  robot_arm_interfaces__action__RobotArmTask_Feedback * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__init(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence *
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_Feedback__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Request__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__init(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence *
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_SendGoal_Response__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_GetResult_Request *
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Request * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Request * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence *
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Request__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_GetResult_Response *
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Response * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Response * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__init(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence *
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_GetResult_Response__Sequence * output);

/// Initialize action/RobotArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage
 * )) before or use
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg);

/// Finalize action/RobotArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg);

/// Create action/RobotArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage *
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__create();

/// Destroy action/RobotArmTask message.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__destroy(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * msg);

/// Check for action/RobotArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__are_equal(const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * lhs, const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * rhs);

/// Copy a action/RobotArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__copy(
  const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * input,
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage * output);

/// Initialize array of action/RobotArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__init(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__fini(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array);

/// Create array of action/RobotArmTask messages.
/**
 * It allocates the memory for the array and calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence *
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RobotArmTask messages.
/**
 * It calls
 * robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
void
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__destroy(robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * array);

/// Check for action/RobotArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__are_equal(const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * lhs, const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RobotArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
bool
robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence__copy(
  const robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * input,
  robot_arm_interfaces__action__RobotArmTask_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__ROBOT_ARM_TASK__FUNCTIONS_H_
