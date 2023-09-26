// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'actuation'
#include "roar_gokart_msgs/msg/detail/actuation__struct.h"

/// Struct defined in msg/VehicleStatus in the package roar_gokart_msgs.
typedef struct roar_gokart_msgs__msg__VehicleStatus
{
  std_msgs__msg__Header header;
  float angle;
  bool is_left_limiter_on;
  bool is_right_limiter_on;
  float speed;
  bool is_auto;
  float target_speed;
  float target_steering_angle;
  roar_gokart_msgs__msg__Actuation actuation;
} roar_gokart_msgs__msg__VehicleStatus;

// Struct for a sequence of roar_gokart_msgs__msg__VehicleStatus.
typedef struct roar_gokart_msgs__msg__VehicleStatus__Sequence
{
  roar_gokart_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_gokart_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
