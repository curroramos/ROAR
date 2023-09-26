# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roar_gokart_msgs:msg/VehicleStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roar_gokart_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roar_gokart_msgs.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

            from roar_gokart_msgs.msg import Actuation
            if Actuation.__class__._TYPE_SUPPORT is None:
                Actuation.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """Message class 'VehicleStatus'."""

    __slots__ = [
        '_header',
        '_angle',
        '_is_left_limiter_on',
        '_is_right_limiter_on',
        '_speed',
        '_is_auto',
        '_target_speed',
        '_target_steering_angle',
        '_actuation',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angle': 'float',
        'is_left_limiter_on': 'boolean',
        'is_right_limiter_on': 'boolean',
        'speed': 'float',
        'is_auto': 'boolean',
        'target_speed': 'float',
        'target_steering_angle': 'float',
        'actuation': 'roar_gokart_msgs/Actuation',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roar_gokart_msgs', 'msg'], 'Actuation'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle = kwargs.get('angle', float())
        self.is_left_limiter_on = kwargs.get('is_left_limiter_on', bool())
        self.is_right_limiter_on = kwargs.get('is_right_limiter_on', bool())
        self.speed = kwargs.get('speed', float())
        self.is_auto = kwargs.get('is_auto', bool())
        self.target_speed = kwargs.get('target_speed', float())
        self.target_steering_angle = kwargs.get('target_steering_angle', float())
        from roar_gokart_msgs.msg import Actuation
        self.actuation = kwargs.get('actuation', Actuation())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.angle != other.angle:
            return False
        if self.is_left_limiter_on != other.is_left_limiter_on:
            return False
        if self.is_right_limiter_on != other.is_right_limiter_on:
            return False
        if self.speed != other.speed:
            return False
        if self.is_auto != other.is_auto:
            return False
        if self.target_speed != other.target_speed:
            return False
        if self.target_steering_angle != other.target_steering_angle:
            return False
        if self.actuation != other.actuation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value

    @builtins.property
    def is_left_limiter_on(self):
        """Message field 'is_left_limiter_on'."""
        return self._is_left_limiter_on

    @is_left_limiter_on.setter
    def is_left_limiter_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_left_limiter_on' field must be of type 'bool'"
        self._is_left_limiter_on = value

    @builtins.property
    def is_right_limiter_on(self):
        """Message field 'is_right_limiter_on'."""
        return self._is_right_limiter_on

    @is_right_limiter_on.setter
    def is_right_limiter_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_right_limiter_on' field must be of type 'bool'"
        self._is_right_limiter_on = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def is_auto(self):
        """Message field 'is_auto'."""
        return self._is_auto

    @is_auto.setter
    def is_auto(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_auto' field must be of type 'bool'"
        self._is_auto = value

    @builtins.property
    def target_speed(self):
        """Message field 'target_speed'."""
        return self._target_speed

    @target_speed.setter
    def target_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_speed = value

    @builtins.property
    def target_steering_angle(self):
        """Message field 'target_steering_angle'."""
        return self._target_steering_angle

    @target_steering_angle.setter
    def target_steering_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_steering_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_steering_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_steering_angle = value

    @builtins.property
    def actuation(self):
        """Message field 'actuation'."""
        return self._actuation

    @actuation.setter
    def actuation(self, value):
        if self._check_fields:
            from roar_gokart_msgs.msg import Actuation
            assert \
                isinstance(value, Actuation), \
                "The 'actuation' field must be a sub message of type 'Actuation'"
        self._actuation = value
