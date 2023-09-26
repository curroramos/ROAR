// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_gokart_msgs:msg/EgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_H_
#define ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_H_

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

/// Struct defined in msg/EgoVehicleControl in the package roar_gokart_msgs.
/**
  * This represents a vehicle control message sent to ROAR Arduino
 */
typedef struct roar_gokart_msgs__msg__EgoVehicleControl
{
  std_msgs__msg__Header header;
  /// m/s
  float target_speed;
  /// degrees
  float steering_angle;
  /// 0. <= brake <= 1.
  float brake;
  /// reverse 0 or 1
  bool reverse;
} roar_gokart_msgs__msg__EgoVehicleControl;

// Struct for a sequence of roar_gokart_msgs__msg__EgoVehicleControl.
typedef struct roar_gokart_msgs__msg__EgoVehicleControl__Sequence
{
  roar_gokart_msgs__msg__EgoVehicleControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_gokart_msgs__msg__EgoVehicleControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_H_
