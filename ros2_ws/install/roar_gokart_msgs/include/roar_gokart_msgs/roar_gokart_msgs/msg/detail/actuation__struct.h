// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_H_
#define ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Actuation in the package roar_gokart_msgs.
typedef struct roar_gokart_msgs__msg__Actuation
{
  float throttle;
  float steering;
  float brake;
  bool reverse;
} roar_gokart_msgs__msg__Actuation;

// Struct for a sequence of roar_gokart_msgs__msg__Actuation.
typedef struct roar_gokart_msgs__msg__Actuation__Sequence
{
  roar_gokart_msgs__msg__Actuation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_gokart_msgs__msg__Actuation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_H_
