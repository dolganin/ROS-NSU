// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ex09:msg/Fullname.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ex09/msg/detail/fullname__rosidl_typesupport_introspection_c.h"
#include "ex09/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ex09/msg/detail/fullname__functions.h"
#include "ex09/msg/detail/fullname__struct.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ex09__msg__Fullname__init(message_memory);
}

void ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_fini_function(void * message_memory)
{
  ex09__msg__Fullname__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_member_array[3] = {
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ex09__msg__Fullname, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ex09__msg__Fullname, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ex09__msg__Fullname, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_members = {
  "ex09__msg",  // message namespace
  "Fullname",  // message name
  3,  // number of fields
  sizeof(ex09__msg__Fullname),
  ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_member_array,  // message members
  ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_init_function,  // function to initialize message memory (memory has to be allocated)
  ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_type_support_handle = {
  0,
  &ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ex09
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ex09, msg, Fullname)() {
  if (!ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_type_support_handle.typesupport_identifier) {
    ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ex09__msg__Fullname__rosidl_typesupport_introspection_c__Fullname_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
