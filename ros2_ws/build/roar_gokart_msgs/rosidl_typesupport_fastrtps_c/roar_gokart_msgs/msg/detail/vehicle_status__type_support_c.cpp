// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "roar_gokart_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roar_gokart_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "roar_gokart_msgs/msg/detail/actuation__functions.h"  // actuation
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_roar_gokart_msgs__msg__Actuation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_roar_gokart_msgs__msg__Actuation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roar_gokart_msgs, msg, Actuation)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roar_gokart_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roar_gokart_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roar_gokart_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _VehicleStatus__ros_msg_type = roar_gokart_msgs__msg__VehicleStatus;

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: is_left_limiter_on
  {
    cdr << (ros_message->is_left_limiter_on ? true : false);
  }

  // Field name: is_right_limiter_on
  {
    cdr << (ros_message->is_right_limiter_on ? true : false);
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: is_auto
  {
    cdr << (ros_message->is_auto ? true : false);
  }

  // Field name: target_speed
  {
    cdr << ros_message->target_speed;
  }

  // Field name: target_steering_angle
  {
    cdr << ros_message->target_steering_angle;
  }

  // Field name: actuation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roar_gokart_msgs, msg, Actuation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actuation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatus__ros_msg_type * ros_message = static_cast<_VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: is_left_limiter_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_left_limiter_on = tmp ? true : false;
  }

  // Field name: is_right_limiter_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_right_limiter_on = tmp ? true : false;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: is_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto = tmp ? true : false;
  }

  // Field name: target_speed
  {
    cdr >> ros_message->target_speed;
  }

  // Field name: target_steering_angle
  {
    cdr >> ros_message->target_steering_angle;
  }

  // Field name: actuation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roar_gokart_msgs, msg, Actuation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actuation))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roar_gokart_msgs
size_t get_serialized_size_roar_gokart_msgs__msg__VehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_left_limiter_on
  {
    size_t item_size = sizeof(ros_message->is_left_limiter_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_right_limiter_on
  {
    size_t item_size = sizeof(ros_message->is_right_limiter_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_auto
  {
    size_t item_size = sizeof(ros_message->is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_speed
  {
    size_t item_size = sizeof(ros_message->target_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_steering_angle
  {
    size_t item_size = sizeof(ros_message->target_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuation

  current_alignment += get_serialized_size_roar_gokart_msgs__msg__Actuation(
    &(ros_message->actuation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roar_gokart_msgs__msg__VehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roar_gokart_msgs
size_t max_serialized_size_roar_gokart_msgs__msg__VehicleStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_left_limiter_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_right_limiter_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_auto
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_roar_gokart_msgs__msg__Actuation(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roar_gokart_msgs__msg__VehicleStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleStatus = {
  "roar_gokart_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatus,
  get_message_typesupport_handle_function,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_hash,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roar_gokart_msgs, msg, VehicleStatus)() {
  return &_VehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
