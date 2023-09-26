// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex09:msg/Fullname.idl
// generated code does not contain a copyright notice
#include "ex09/msg/detail/fullname__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ex09__msg__Fullname__init(ex09__msg__Fullname * msg)
{
  if (!msg) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    ex09__msg__Fullname__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ex09__msg__Fullname__fini(msg);
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    ex09__msg__Fullname__fini(msg);
    return false;
  }
  return true;
}

void
ex09__msg__Fullname__fini(ex09__msg__Fullname * msg)
{
  if (!msg) {
    return;
  }
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
}

bool
ex09__msg__Fullname__are_equal(const ex09__msg__Fullname * lhs, const ex09__msg__Fullname * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  return true;
}

bool
ex09__msg__Fullname__copy(
  const ex09__msg__Fullname * input,
  ex09__msg__Fullname * output)
{
  if (!input || !output) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  return true;
}

ex09__msg__Fullname *
ex09__msg__Fullname__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__Fullname * msg = (ex09__msg__Fullname *)allocator.allocate(sizeof(ex09__msg__Fullname), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex09__msg__Fullname));
  bool success = ex09__msg__Fullname__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex09__msg__Fullname__destroy(ex09__msg__Fullname * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex09__msg__Fullname__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex09__msg__Fullname__Sequence__init(ex09__msg__Fullname__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__Fullname * data = NULL;

  if (size) {
    data = (ex09__msg__Fullname *)allocator.zero_allocate(size, sizeof(ex09__msg__Fullname), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex09__msg__Fullname__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex09__msg__Fullname__fini(&data[i - 1]);
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
ex09__msg__Fullname__Sequence__fini(ex09__msg__Fullname__Sequence * array)
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
      ex09__msg__Fullname__fini(&array->data[i]);
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

ex09__msg__Fullname__Sequence *
ex09__msg__Fullname__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__Fullname__Sequence * array = (ex09__msg__Fullname__Sequence *)allocator.allocate(sizeof(ex09__msg__Fullname__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex09__msg__Fullname__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex09__msg__Fullname__Sequence__destroy(ex09__msg__Fullname__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex09__msg__Fullname__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex09__msg__Fullname__Sequence__are_equal(const ex09__msg__Fullname__Sequence * lhs, const ex09__msg__Fullname__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex09__msg__Fullname__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex09__msg__Fullname__Sequence__copy(
  const ex09__msg__Fullname__Sequence * input,
  ex09__msg__Fullname__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex09__msg__Fullname);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex09__msg__Fullname * data =
      (ex09__msg__Fullname *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex09__msg__Fullname__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex09__msg__Fullname__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex09__msg__Fullname__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
