// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice

#include "roar_gokart_msgs/msg/detail/actuation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roar_gokart_msgs
const rosidl_type_hash_t *
roar_gokart_msgs__msg__Actuation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x8d, 0x77, 0x69, 0xd2, 0x0e, 0xef, 0xc8,
      0xb5, 0x3d, 0x11, 0xac, 0x8a, 0xb7, 0xe9, 0xf2,
      0x95, 0x33, 0xdd, 0xc2, 0x55, 0x07, 0xf7, 0xd2,
      0x57, 0xd9, 0x24, 0x0c, 0xc5, 0x85, 0x10, 0x9e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roar_gokart_msgs__msg__Actuation__TYPE_NAME[] = "roar_gokart_msgs/msg/Actuation";

// Define type names, field names, and default values
static char roar_gokart_msgs__msg__Actuation__FIELD_NAME__throttle[] = "throttle";
static char roar_gokart_msgs__msg__Actuation__FIELD_NAME__steering[] = "steering";
static char roar_gokart_msgs__msg__Actuation__FIELD_NAME__brake[] = "brake";
static char roar_gokart_msgs__msg__Actuation__FIELD_NAME__reverse[] = "reverse";

static rosidl_runtime_c__type_description__Field roar_gokart_msgs__msg__Actuation__FIELDS[] = {
  {
    {roar_gokart_msgs__msg__Actuation__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roar_gokart_msgs__msg__Actuation__FIELD_NAME__steering, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roar_gokart_msgs__msg__Actuation__FIELD_NAME__brake, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roar_gokart_msgs__msg__Actuation__FIELD_NAME__reverse, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roar_gokart_msgs__msg__Actuation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roar_gokart_msgs__msg__Actuation__TYPE_NAME, 30, 30},
      {roar_gokart_msgs__msg__Actuation__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 throttle\n"
  "float32 steering\n"
  "float32 brake \n"
  "bool reverse";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roar_gokart_msgs__msg__Actuation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roar_gokart_msgs__msg__Actuation__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 61, 61},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roar_gokart_msgs__msg__Actuation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roar_gokart_msgs__msg__Actuation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
