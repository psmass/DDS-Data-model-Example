
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from Alarms.idl
# using RTI Code Generator (rtiddsgen) version 4.0.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

import sys
import types
from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum, auto


Common = idl.get_module("Common")

Common_MIN_LEN = 100

Common.MIN_LEN = Common_MIN_LEN

Common_MED_LEN = 200

Common.MED_LEN = Common_MED_LEN

Common_MAX_LEN = 500

Common.MAX_LEN = Common_MAX_LEN

Common_LargeString_t = str

Common.LargeString_t = Common_LargeString_t

Common_MediumString_t = str

Common.MediumString_t = Common_MediumString_t

Common_ShortString_t = str

Common.ShortString_t = Common_ShortString_t

Common_Descriptor_t = str

Common.Descriptor_t = Common_Descriptor_t

Common_Percentage_t = idl.float32

Common.Percentage_t = Common_Percentage_t

Common_PressureInPascal_t = idl.float32

Common.PressureInPascal_t = Common_PressureInPascal_t

Common_TemperatureInDegreesKelvin_t = idl.float32

Common.TemperatureInDegreesKelvin_t = Common_TemperatureInDegreesKelvin_t

Common_ConcentrationInMolesPerCubicMetre_t = idl.float32

Common.ConcentrationInMolesPerCubicMetre_t = Common_ConcentrationInMolesPerCubicMetre_t

@idl.struct
class Common_IdentifierType_t:
    resourceId: idl.uint32 = 0
    id: idl.int32 = 0

Common.IdentifierType_t = Common_IdentifierType_t

@idl.alias(
    annotations = [idl.bound(Common.MAX_LEN)]
)
class Common_IdentifierList_t:
    value: Sequence[Common.IdentifierType_t] = field(default_factory = list)

Common.IdentifierList_t = Common_IdentifierList_t

@idl.enum
class Common_ResponseCode_t(IntEnum):
    Invalid = 0
    Success = 1
    Pending = 2
    Error = 3

Common.ResponseCode_t = Common_ResponseCode_t

@idl.struct
class Common_DateTime_t:
    secs: int = 0
    nsecs: int = 0

Common.DateTime_t = Common_DateTime_t

@idl.struct(
    type_annotations = [idl.mutable, ],
)
class Common_MetaData_t:
    timeOfGeneration: Common.DateTime_t = field(default_factory = Common.DateTime_t)

Common.MetaData_t = Common_MetaData_t

@idl.alias(
    annotations = [idl.array([Common.MAX_LEN])]
)
class Common_BinaryData_t:
    value: Sequence[idl.int16] = field(default_factory = idl.array_factory(idl.int16, [Common.MAX_LEN]))

Common.BinaryData_t = Common_BinaryData_t

@idl.enum
class Common_UnitType(IntEnum):
    Farenheit = 0
    Celcius = 1
    Percent = 2

Common.UnitType = Common_UnitType

@idl.struct
class Common_MeasurementCoordinate_t:
    latitude: float = 0.0
    longitude: float = 0.0

Common.MeasurementCoordinate_t = Common_MeasurementCoordinate_t

Alarms = idl.get_module("Alarms")

@idl.enum
class Alarms_Severities(IntEnum):
    Critical = 0
    Major = 1
    Minor = 2
    Informational = 3

Alarms.Severities = Alarms_Severities

@idl.enum
class Alarms_State(IntEnum):
    Open = 0
    Closed = 1

Alarms.State = Alarms_State

@idl.struct
class Alarms_ValueDefinition:
    number: idl.float32 = 0.0
    Units: Common.UnitType = Common.UnitType.Farenheit

Alarms.ValueDefinition = Alarms_ValueDefinition

@idl.struct(
    member_annotations = {
        'sourceId': [idl.key,],
        'alarmTypeName': [idl.bound(Common.MIN_LEN),],
    }
)
class Alarms_Alarm:
    sourceId: Common.IdentifierType_t = field(default_factory = Common.IdentifierType_t)
    alarmTypeName: str = ""
    severity: Alarms.Severities = Alarms.Severities.Critical
    null: Alarms.State = Alarms.State.Open
    numericValue: Alarms.ValueDefinition = field(default_factory = Alarms.ValueDefinition)

Alarms.Alarm = Alarms_Alarm

@idl.struct
class Alarms_HumidityAlarm(Alarms.Alarm):
    relativeHumidity: idl.float32 = 0.0

Alarms.HumidityAlarm = Alarms_HumidityAlarm

@idl.struct
class Alarms_MotionAlarm(Alarms.Alarm):
    coordinate: Common.MeasurementCoordinate_t = field(default_factory = Common.MeasurementCoordinate_t)

Alarms.MotionAlarm = Alarms_MotionAlarm

@idl.struct
class Alarms_FireAlarm(Alarms.Alarm):
    temperature: idl.float32 = 0.0
    units: Common.UnitType = Common.UnitType.Farenheit

Alarms.FireAlarm = Alarms_FireAlarm

@idl.struct
class Alarms_IntrusionAlarm(Alarms.Alarm):
    coordinate: Common.MeasurementCoordinate_t = field(default_factory = Common.MeasurementCoordinate_t)

Alarms.IntrusionAlarm = Alarms_IntrusionAlarm
