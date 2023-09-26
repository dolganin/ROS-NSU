// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ex09:srv/Fullnamesum.idl
// generated code does not contain a copyright notice

#ifndef EX09__SRV__DETAIL__FULLNAMESUM__FUNCTIONS_H_
#define EX09__SRV__DETAIL__FULLNAMESUM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ex09/msg/rosidl_generator_c__visibility_control.h"

#include "ex09/srv/detail/fullnamesum__struct.h"

/// Initialize srv/Fullnamesum message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex09__srv__Fullnamesum_Request
 * )) before or use
 * ex09__srv__Fullnamesum_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__init(ex09__srv__Fullnamesum_Request * msg);

/// Finalize srv/Fullnamesum message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Request__fini(ex09__srv__Fullnamesum_Request * msg);

/// Create srv/Fullnamesum message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex09__srv__Fullnamesum_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
ex09__srv__Fullnamesum_Request *
ex09__srv__Fullnamesum_Request__create();

/// Destroy srv/Fullnamesum message.
/**
 * It calls
 * ex09__srv__Fullnamesum_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Request__destroy(ex09__srv__Fullnamesum_Request * msg);

/// Check for srv/Fullnamesum message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__are_equal(const ex09__srv__Fullnamesum_Request * lhs, const ex09__srv__Fullnamesum_Request * rhs);

/// Copy a srv/Fullnamesum message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__copy(
  const ex09__srv__Fullnamesum_Request * input,
  ex09__srv__Fullnamesum_Request * output);

/// Initialize array of srv/Fullnamesum messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex09__srv__Fullnamesum_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__Sequence__init(ex09__srv__Fullnamesum_Request__Sequence * array, size_t size);

/// Finalize array of srv/Fullnamesum messages.
/**
 * It calls
 * ex09__srv__Fullnamesum_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Request__Sequence__fini(ex09__srv__Fullnamesum_Request__Sequence * array);

/// Create array of srv/Fullnamesum messages.
/**
 * It allocates the memory for the array and calls
 * ex09__srv__Fullnamesum_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
ex09__srv__Fullnamesum_Request__Sequence *
ex09__srv__Fullnamesum_Request__Sequence__create(size_t size);

/// Destroy array of srv/Fullnamesum messages.
/**
 * It calls
 * ex09__srv__Fullnamesum_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Request__Sequence__destroy(ex09__srv__Fullnamesum_Request__Sequence * array);

/// Check for srv/Fullnamesum message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__Sequence__are_equal(const ex09__srv__Fullnamesum_Request__Sequence * lhs, const ex09__srv__Fullnamesum_Request__Sequence * rhs);

/// Copy an array of srv/Fullnamesum messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Request__Sequence__copy(
  const ex09__srv__Fullnamesum_Request__Sequence * input,
  ex09__srv__Fullnamesum_Request__Sequence * output);

/// Initialize srv/Fullnamesum message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex09__srv__Fullnamesum_Response
 * )) before or use
 * ex09__srv__Fullnamesum_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__init(ex09__srv__Fullnamesum_Response * msg);

/// Finalize srv/Fullnamesum message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Response__fini(ex09__srv__Fullnamesum_Response * msg);

/// Create srv/Fullnamesum message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex09__srv__Fullnamesum_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
ex09__srv__Fullnamesum_Response *
ex09__srv__Fullnamesum_Response__create();

/// Destroy srv/Fullnamesum message.
/**
 * It calls
 * ex09__srv__Fullnamesum_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Response__destroy(ex09__srv__Fullnamesum_Response * msg);

/// Check for srv/Fullnamesum message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__are_equal(const ex09__srv__Fullnamesum_Response * lhs, const ex09__srv__Fullnamesum_Response * rhs);

/// Copy a srv/Fullnamesum message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__copy(
  const ex09__srv__Fullnamesum_Response * input,
  ex09__srv__Fullnamesum_Response * output);

/// Initialize array of srv/Fullnamesum messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex09__srv__Fullnamesum_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__Sequence__init(ex09__srv__Fullnamesum_Response__Sequence * array, size_t size);

/// Finalize array of srv/Fullnamesum messages.
/**
 * It calls
 * ex09__srv__Fullnamesum_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Response__Sequence__fini(ex09__srv__Fullnamesum_Response__Sequence * array);

/// Create array of srv/Fullnamesum messages.
/**
 * It allocates the memory for the array and calls
 * ex09__srv__Fullnamesum_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
ex09__srv__Fullnamesum_Response__Sequence *
ex09__srv__Fullnamesum_Response__Sequence__create(size_t size);

/// Destroy array of srv/Fullnamesum messages.
/**
 * It calls
 * ex09__srv__Fullnamesum_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
void
ex09__srv__Fullnamesum_Response__Sequence__destroy(ex09__srv__Fullnamesum_Response__Sequence * array);

/// Check for srv/Fullnamesum message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__Sequence__are_equal(const ex09__srv__Fullnamesum_Response__Sequence * lhs, const ex09__srv__Fullnamesum_Response__Sequence * rhs);

/// Copy an array of srv/Fullnamesum messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex09
bool
ex09__srv__Fullnamesum_Response__Sequence__copy(
  const ex09__srv__Fullnamesum_Response__Sequence * input,
  ex09__srv__Fullnamesum_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EX09__SRV__DETAIL__FULLNAMESUM__FUNCTIONS_H_
