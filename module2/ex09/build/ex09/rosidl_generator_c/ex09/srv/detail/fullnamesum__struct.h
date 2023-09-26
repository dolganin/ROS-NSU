// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex09:srv/Fullnamesum.idl
// generated code does not contain a copyright notice

#ifndef EX09__SRV__DETAIL__FULLNAMESUM__STRUCT_H_
#define EX09__SRV__DETAIL__FULLNAMESUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'last_name'
// Member 'name'
// Member 'first_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Fullnamesum in the package ex09.
typedef struct ex09__srv__Fullnamesum_Request
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} ex09__srv__Fullnamesum_Request;

// Struct for a sequence of ex09__srv__Fullnamesum_Request.
typedef struct ex09__srv__Fullnamesum_Request__Sequence
{
  ex09__srv__Fullnamesum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex09__srv__Fullnamesum_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Fullnamesum in the package ex09.
typedef struct ex09__srv__Fullnamesum_Response
{
  rosidl_runtime_c__String full_name;
} ex09__srv__Fullnamesum_Response;

// Struct for a sequence of ex09__srv__Fullnamesum_Response.
typedef struct ex09__srv__Fullnamesum_Response__Sequence
{
  ex09__srv__Fullnamesum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex09__srv__Fullnamesum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EX09__SRV__DETAIL__FULLNAMESUM__STRUCT_H_
