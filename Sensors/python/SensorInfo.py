
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SensorInfo.idl
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

@idl.alias(
    annotations = [idl.array([Common.MAX_LEN])]
)
class Common_BinaryData_t:
    value: Sequence[idl.int16] = field(default_factory = idl.array_factory(idl.int16, [Common.MAX_LEN]))

Common.BinaryData_t = Common_BinaryData_t

@idl.struct
class Common_IdentifierType_t:
    resourceId: idl.int32 = 0
    id: idl.int32 = 0

Common.IdentifierType_t = Common_IdentifierType_t

@idl.alias(
    annotations = [idl.bound(Common.MAX_LEN)]
)
class Common_IdentifierList_t:
    value: Sequence[Common.IdentifierType_t] = field(default_factory = list)

Common.IdentifierList_t = Common_IdentifierList_t

@idl.struct
class Common_DateTime_t:
    secs: int = 0
    nsecs: int = 0

Common.DateTime_t = Common_DateTime_t

@idl.struct
class Common_MetaData_t:
    timeOfGeneration: Common.DateTime_t = field(default_factory = Common.DateTime_t)

Common.MetaData_t = Common_MetaData_t

Sensor = idl.get_module("Sensor")

Sensor_Constants = idl.get_module("Sensor_Constants")

Sensor.Constants = Sensor_Constants

Sensor_Constants_HUMIDITY_TOPIC = "Humidity"

Sensor.Constants.HUMIDITY_TOPIC = Sensor_Constants_HUMIDITY_TOPIC

Sensor_Constants_PRESSURE_TOPIC = "Pressure"

Sensor.Constants.PRESSURE_TOPIC = Sensor_Constants_PRESSURE_TOPIC

Sensor_Constants_TEMPERATURE_TOPIC = "Temperature"

Sensor.Constants.TEMPERATURE_TOPIC = Sensor_Constants_TEMPERATURE_TOPIC

Sensor_Constants_GAS_TOPIC = "Gas"

Sensor.Constants.GAS_TOPIC = Sensor_Constants_GAS_TOPIC

Sensor_Constants_SENSOR_QOS_LIBRARY = "SensorQosLibrary"

Sensor.Constants.SENSOR_QOS_LIBRARY = Sensor_Constants_SENSOR_QOS_LIBRARY

Sensor_Constants_RELIABLE_QOS_PROFILE = "ReliableQosProfile"

Sensor.Constants.RELIABLE_QOS_PROFILE = Sensor_Constants_RELIABLE_QOS_PROFILE

Sensor_Constants_BEST_EFFORT_QOS_PROFILE = "BestEffortQosProfile"

Sensor.Constants.BEST_EFFORT_QOS_PROFILE = Sensor_Constants_BEST_EFFORT_QOS_PROFILE

@idl.struct(
    member_annotations = {
        'sourceId': [idl.key,],
        'sensorTypeName': [idl.bound(Common.MIN_LEN),],
    }
)
class Sensor_BaseSensor:
    sourceId: Common.IdentifierType_t = field(default_factory = Common.IdentifierType_t)
    sensorTypeName: str = ""
    metaData: Common.MetaData_t = field(default_factory = Common.MetaData_t)

Sensor.BaseSensor = Sensor_BaseSensor

@idl.struct
class Sensor_HumiditySensor(Sensor.BaseSensor):
    relativeHumidity: idl.float32 = 0.0

Sensor.HumiditySensor = Sensor_HumiditySensor

@idl.struct
class Sensor_PressureSensor(Sensor.BaseSensor):
    pressure: idl.float32 = 0.0

Sensor.PressureSensor = Sensor_PressureSensor

@idl.struct
class Sensor_TemperatureSensor(Sensor.BaseSensor):
    temperature: idl.float32 = 0.0

Sensor.TemperatureSensor = Sensor_TemperatureSensor

@idl.struct
class Sensor_GasSensor(Sensor.BaseSensor):
    concentration: idl.float32 = 0.0

Sensor.GasSensor = Sensor_GasSensor
