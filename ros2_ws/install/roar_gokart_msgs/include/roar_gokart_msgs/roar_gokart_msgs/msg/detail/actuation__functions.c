// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice
#include "roar_gokart_msgs/msg/detail/actuation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roar_gokart_msgs__msg__Actuation__init(roar_gokart_msgs__msg__Actuation * msg)
{
  if (!msg) {
    return false;
  }
  // throttle
  // steering
  // brake
  // reverse
  return true;
}

void
roar_gokart_msgs__msg__Actuation__fini(roar_gokart_msgs__msg__Actuation * msg)
{
  if (!msg) {
    return;
  }
  // throttle
  // steering
  // brake
  // reverse
}

bool
roar_gokart_msgs__msg__Actuation__are_equal(const roar_gokart_msgs__msg__Actuation * lhs, const roar_gokart_msgs__msg__Actuation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  return true;
}

bool
roar_gokart_msgs__msg__Actuation__copy(
  const roar_gokart_msgs__msg__Actuation * input,
  roar_gokart_msgs__msg__Actuation * output)
{
  if (!input || !output) {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  // steering
  output->steering = input->steering;
  // brake
  output->brake = input->brake;
  // reverse
  output->reverse = input->reverse;
  return true;
}

roar_gokart_msgs__msg__Actuation *
roar_gokart_msgs__msg__Actuation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__Actuation * msg = (roar_gokart_msgs__msg__Actuation *)allocator.allocate(sizeof(roar_gokart_msgs__msg__Actuation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_gokart_msgs__msg__Actuation));
  bool success = roar_gokart_msgs__msg__Actuation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roar_gokart_msgs__msg__Actuation__destroy(roar_gokart_msgs__msg__Actuation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roar_gokart_msgs__msg__Actuation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roar_gokart_msgs__msg__Actuation__Sequence__init(roar_gokart_msgs__msg__Actuation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__Actuation * data = NULL;

  if (size) {
    data = (roar_gokart_msgs__msg__Actuation *)allocator.zero_allocate(size, sizeof(roar_gokart_msgs__msg__Actuation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_gokart_msgs__msg__Actuation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_gokart_msgs__msg__Actuation__fini(&data[i - 1]);
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
roar_gokart_msgs__msg__Actuation__Sequence__fini(roar_gokart_msgs__msg__Actuation__Sequence * array)
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
      roar_gokart_msgs__msg__Actuation__fini(&array->data[i]);
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

roar_gokart_msgs__msg__Actuation__Sequence *
roar_gokart_msgs__msg__Actuation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__Actuation__Sequence * array = (roar_gokart_msgs__msg__Actuation__Sequence *)allocator.allocate(sizeof(roar_gokart_msgs__msg__Actuation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roar_gokart_msgs__msg__Actuation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roar_gokart_msgs__msg__Actuation__Sequence__destroy(roar_gokart_msgs__msg__Actuation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roar_gokart_msgs__msg__Actuation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roar_gokart_msgs__msg__Actuation__Sequence__are_equal(const roar_gokart_msgs__msg__Actuation__Sequence * lhs, const roar_gokart_msgs__msg__Actuation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roar_gokart_msgs__msg__Actuation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roar_gokart_msgs__msg__Actuation__Sequence__copy(
  const roar_gokart_msgs__msg__Actuation__Sequence * input,
  roar_gokart_msgs__msg__Actuation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roar_gokart_msgs__msg__Actuation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roar_gokart_msgs__msg__Actuation * data =
      (roar_gokart_msgs__msg__Actuation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roar_gokart_msgs__msg__Actuation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roar_gokart_msgs__msg__Actuation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roar_gokart_msgs__msg__Actuation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
