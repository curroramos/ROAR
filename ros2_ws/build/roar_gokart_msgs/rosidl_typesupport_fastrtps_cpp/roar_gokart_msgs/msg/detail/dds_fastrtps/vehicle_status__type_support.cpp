// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "roar_gokart_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roar_gokart_msgs/msg/detail/vehicle_status__functions.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace roar_gokart_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const roar_gokart_msgs::msg::Actuation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  roar_gokart_msgs::msg::Actuation &);
size_t get_serialized_size(
  const roar_gokart_msgs::msg::Actuation &,
  size_t current_alignment);
size_t
max_serialized_size_Actuation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace roar_gokart_msgs


namespace roar_gokart_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
cdr_serialize(
  const roar_gokart_msgs::msg::VehicleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: angle
  cdr << ros_message.angle;
  // Member: is_left_limiter_on
  cdr << (ros_message.is_left_limiter_on ? true : false);
  // Member: is_right_limiter_on
  cdr << (ros_message.is_right_limiter_on ? true : false);
  // Member: speed
  cdr << ros_message.speed;
  // Member: is_auto
  cdr << (ros_message.is_auto ? true : false);
  // Member: target_speed
  cdr << ros_message.target_speed;
  // Member: target_steering_angle
  cdr << ros_message.target_steering_angle;
  // Member: actuation
  roar_gokart_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.actuation,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roar_gokart_msgs::msg::VehicleStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: angle
  cdr >> ros_message.angle;

  // Member: is_left_limiter_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_left_limiter_on = tmp ? true : false;
  }

  // Member: is_right_limiter_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_right_limiter_on = tmp ? true : false;
  }

  // Member: speed
  cdr >> ros_message.speed;

  // Member: is_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_auto = tmp ? true : false;
  }

  // Member: target_speed
  cdr >> ros_message.target_speed;

  // Member: target_steering_angle
  cdr >> ros_message.target_steering_angle;

  // Member: actuation
  roar_gokart_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.actuation);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
get_serialized_size(
  const roar_gokart_msgs::msg::VehicleStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_left_limiter_on
  {
    size_t item_size = sizeof(ros_message.is_left_limiter_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_right_limiter_on
  {
    size_t item_size = sizeof(ros_message.is_right_limiter_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_auto
  {
    size_t item_size = sizeof(ros_message.is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_speed
  {
    size_t item_size = sizeof(ros_message.target_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_steering_angle
  {
    size_t item_size = sizeof(ros_message.target_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuation

  current_alignment +=
    roar_gokart_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.actuation, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
max_serialized_size_VehicleStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_left_limiter_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_right_limiter_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_auto
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        roar_gokart_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Actuation(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roar_gokart_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roar_gokart_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roar_gokart_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleStatus__callbacks = {
  "roar_gokart_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatus__callbacks,
  get_message_typesupport_handle_function,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_hash,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roar_gokart_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roar_gokart_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roar_gokart_msgs::msg::VehicleStatus>()
{
  return &roar_gokart_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roar_gokart_msgs, msg, VehicleStatus)() {
  return &roar_gokart_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

#ifdef __cplusplus
}
#endif
