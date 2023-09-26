// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "roar_gokart_msgs/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `actuation`
#include "roar_gokart_msgs/msg/detail/actuation__functions.h"

bool
roar_gokart_msgs__msg__VehicleStatus__init(roar_gokart_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    roar_gokart_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  // angle
  // is_left_limiter_on
  // is_right_limiter_on
  // speed
  // is_auto
  // target_speed
  // target_steering_angle
  // actuation
  if (!roar_gokart_msgs__msg__Actuation__init(&msg->actuation)) {
    roar_gokart_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  return true;
}

void
roar_gokart_msgs__msg__VehicleStatus__fini(roar_gokart_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle
  // is_left_limiter_on
  // is_right_limiter_on
  // speed
  // is_auto
  // target_speed
  // target_steering_angle
  // actuation
  roar_gokart_msgs__msg__Actuation__fini(&msg->actuation);
}

bool
roar_gokart_msgs__msg__VehicleStatus__are_equal(const roar_gokart_msgs__msg__VehicleStatus * lhs, const roar_gokart_msgs__msg__VehicleStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // is_left_limiter_on
  if (lhs->is_left_limiter_on != rhs->is_left_limiter_on) {
    return false;
  }
  // is_right_limiter_on
  if (lhs->is_right_limiter_on != rhs->is_right_limiter_on) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // is_auto
  if (lhs->is_auto != rhs->is_auto) {
    return false;
  }
  // target_speed
  if (lhs->target_speed != rhs->target_speed) {
    return false;
  }
  // target_steering_angle
  if (lhs->target_steering_angle != rhs->target_steering_angle) {
    return false;
  }
  // actuation
  if (!roar_gokart_msgs__msg__Actuation__are_equal(
      &(lhs->actuation), &(rhs->actuation)))
  {
    return false;
  }
  return true;
}

bool
roar_gokart_msgs__msg__VehicleStatus__copy(
  const roar_gokart_msgs__msg__VehicleStatus * input,
  roar_gokart_msgs__msg__VehicleStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  // is_left_limiter_on
  output->is_left_limiter_on = input->is_left_limiter_on;
  // is_right_limiter_on
  output->is_right_limiter_on = input->is_right_limiter_on;
  // speed
  output->speed = input->speed;
  // is_auto
  output->is_auto = input->is_auto;
  // target_speed
  output->target_speed = input->target_speed;
  // target_steering_angle
  output->target_steering_angle = input->target_steering_angle;
  // actuation
  if (!roar_gokart_msgs__msg__Actuation__copy(
      &(input->actuation), &(output->actuation)))
  {
    return false;
  }
  return true;
}

roar_gokart_msgs__msg__VehicleStatus *
roar_gokart_msgs__msg__VehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__VehicleStatus * msg = (roar_gokart_msgs__msg__VehicleStatus *)allocator.allocate(sizeof(roar_gokart_msgs__msg__VehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_gokart_msgs__msg__VehicleStatus));
  bool success = roar_gokart_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roar_gokart_msgs__msg__VehicleStatus__destroy(roar_gokart_msgs__msg__VehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roar_gokart_msgs__msg__VehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roar_gokart_msgs__msg__VehicleStatus__Sequence__init(roar_gokart_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__VehicleStatus * data = NULL;

  if (size) {
    data = (roar_gokart_msgs__msg__VehicleStatus *)allocator.zero_allocate(size, sizeof(roar_gokart_msgs__msg__VehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_gokart_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_gokart_msgs__msg__VehicleStatus__fini(&data[i - 1]);
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
roar_gokart_msgs__msg__VehicleStatus__Sequence__fini(roar_gokart_msgs__msg__VehicleStatus__Sequence * array)
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
      roar_gokart_msgs__msg__VehicleStatus__fini(&array->data[i]);
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

roar_gokart_msgs__msg__VehicleStatus__Sequence *
roar_gokart_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roar_gokart_msgs__msg__VehicleStatus__Sequence * array = (roar_gokart_msgs__msg__VehicleStatus__Sequence *)allocator.allocate(sizeof(roar_gokart_msgs__msg__VehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roar_gokart_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roar_gokart_msgs__msg__VehicleStatus__Sequence__destroy(roar_gokart_msgs__msg__VehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roar_gokart_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roar_gokart_msgs__msg__VehicleStatus__Sequence__are_equal(const roar_gokart_msgs__msg__VehicleStatus__Sequence * lhs, const roar_gokart_msgs__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roar_gokart_msgs__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roar_gokart_msgs__msg__VehicleStatus__Sequence__copy(
  const roar_gokart_msgs__msg__VehicleStatus__Sequence * input,
  roar_gokart_msgs__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roar_gokart_msgs__msg__VehicleStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roar_gokart_msgs__msg__VehicleStatus * data =
      (roar_gokart_msgs__msg__VehicleStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roar_gokart_msgs__msg__VehicleStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roar_gokart_msgs__msg__VehicleStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roar_gokart_msgs__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
