

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensor.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Sensor_591118812_h
#define Sensor_591118812_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Common.h"
namespace Sensor {
    namespace Constants {
        static const DDS_Char * const HUMIDITY_TOPIC= "Humidity";
        static const DDS_Char * const PRESSURE_TOPIC= "Pressure";
        static const DDS_Char * const TEMPERATURE_TOPIC= "Temperature";
        static const DDS_Char * const GAS_TOPIC= "Gas";
        static const DDS_Char * const RELIABLE_QOS_PROFILE= "SensorQosLibrary::ReliableQosProfile";
        static const DDS_Char * const BEST_EFFORT_QOS_PROFILE= "SensorQosLibrary::BestEffortQosProfile";
    } /* namespace Constants  */

    extern const char *BaseSensorTYPENAME;

    struct BaseSensorSeq;
    class BaseSensor 
    {
      public:
        typedef struct BaseSensorSeq Seq;

        Common::IdentifierType_t   sourceId ;
        DDS_Char *   sensorTypeName ;
        Common::MetaData_t   metaData ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * BaseSensor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *BaseSensor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *BaseSensor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *BaseSensor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BaseSensorSeq, BaseSensor);

    NDDSUSERDllExport
    RTIBool BaseSensor_initialize(
        BaseSensor* self);

    NDDSUSERDllExport
    RTIBool BaseSensor_initialize_ex(
        BaseSensor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool BaseSensor_initialize_w_params(
        BaseSensor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool BaseSensor_finalize_w_return(
        BaseSensor* self);

    NDDSUSERDllExport
    void BaseSensor_finalize(
        BaseSensor* self);

    NDDSUSERDllExport
    void BaseSensor_finalize_ex(
        BaseSensor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void BaseSensor_finalize_w_params(
        BaseSensor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void BaseSensor_finalize_optional_members(
        BaseSensor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool BaseSensor_copy(
        BaseSensor* dst,
        const BaseSensor* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *HumiditySensorTYPENAME;

    struct HumiditySensorSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class HumiditySensorTypeSupport;
    class HumiditySensorDataWriter;
    class HumiditySensorDataReader;
    #endif
    class HumiditySensor 
    : public Sensor::BaseSensor{
      public:
        typedef struct HumiditySensorSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef HumiditySensorTypeSupport TypeSupport;
        typedef HumiditySensorDataWriter DataWriter;
        typedef HumiditySensorDataReader DataReader;
        #endif

        DDS_Float   relativeHumidity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * HumiditySensor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *HumiditySensor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *HumiditySensor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *HumiditySensor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(HumiditySensorSeq, HumiditySensor);

    NDDSUSERDllExport
    RTIBool HumiditySensor_initialize(
        HumiditySensor* self);

    NDDSUSERDllExport
    RTIBool HumiditySensor_initialize_ex(
        HumiditySensor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool HumiditySensor_initialize_w_params(
        HumiditySensor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool HumiditySensor_finalize_w_return(
        HumiditySensor* self);

    NDDSUSERDllExport
    void HumiditySensor_finalize(
        HumiditySensor* self);

    NDDSUSERDllExport
    void HumiditySensor_finalize_ex(
        HumiditySensor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void HumiditySensor_finalize_w_params(
        HumiditySensor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void HumiditySensor_finalize_optional_members(
        HumiditySensor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool HumiditySensor_copy(
        HumiditySensor* dst,
        const HumiditySensor* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PressureSensorTYPENAME;

    struct PressureSensorSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PressureSensorTypeSupport;
    class PressureSensorDataWriter;
    class PressureSensorDataReader;
    #endif
    class PressureSensor 
    : public Sensor::BaseSensor{
      public:
        typedef struct PressureSensorSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PressureSensorTypeSupport TypeSupport;
        typedef PressureSensorDataWriter DataWriter;
        typedef PressureSensorDataReader DataReader;
        #endif

        DDS_Float   pressure ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PressureSensor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PressureSensor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PressureSensor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PressureSensor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PressureSensorSeq, PressureSensor);

    NDDSUSERDllExport
    RTIBool PressureSensor_initialize(
        PressureSensor* self);

    NDDSUSERDllExport
    RTIBool PressureSensor_initialize_ex(
        PressureSensor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PressureSensor_initialize_w_params(
        PressureSensor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PressureSensor_finalize_w_return(
        PressureSensor* self);

    NDDSUSERDllExport
    void PressureSensor_finalize(
        PressureSensor* self);

    NDDSUSERDllExport
    void PressureSensor_finalize_ex(
        PressureSensor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PressureSensor_finalize_w_params(
        PressureSensor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PressureSensor_finalize_optional_members(
        PressureSensor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PressureSensor_copy(
        PressureSensor* dst,
        const PressureSensor* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *TemperatureSensorTYPENAME;

    struct TemperatureSensorSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TemperatureSensorTypeSupport;
    class TemperatureSensorDataWriter;
    class TemperatureSensorDataReader;
    #endif
    class TemperatureSensor 
    : public Sensor::BaseSensor{
      public:
        typedef struct TemperatureSensorSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TemperatureSensorTypeSupport TypeSupport;
        typedef TemperatureSensorDataWriter DataWriter;
        typedef TemperatureSensorDataReader DataReader;
        #endif

        DDS_Float   temperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TemperatureSensor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TemperatureSensor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TemperatureSensor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TemperatureSensor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TemperatureSensorSeq, TemperatureSensor);

    NDDSUSERDllExport
    RTIBool TemperatureSensor_initialize(
        TemperatureSensor* self);

    NDDSUSERDllExport
    RTIBool TemperatureSensor_initialize_ex(
        TemperatureSensor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TemperatureSensor_initialize_w_params(
        TemperatureSensor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TemperatureSensor_finalize_w_return(
        TemperatureSensor* self);

    NDDSUSERDllExport
    void TemperatureSensor_finalize(
        TemperatureSensor* self);

    NDDSUSERDllExport
    void TemperatureSensor_finalize_ex(
        TemperatureSensor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TemperatureSensor_finalize_w_params(
        TemperatureSensor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TemperatureSensor_finalize_optional_members(
        TemperatureSensor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TemperatureSensor_copy(
        TemperatureSensor* dst,
        const TemperatureSensor* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GasSensorTYPENAME;

    struct GasSensorSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class GasSensorTypeSupport;
    class GasSensorDataWriter;
    class GasSensorDataReader;
    #endif
    class GasSensor 
    : public Sensor::BaseSensor{
      public:
        typedef struct GasSensorSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef GasSensorTypeSupport TypeSupport;
        typedef GasSensorDataWriter DataWriter;
        typedef GasSensorDataReader DataReader;
        #endif

        DDS_Float   concentration ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GasSensor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GasSensor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GasSensor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GasSensor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GasSensorSeq, GasSensor);

    NDDSUSERDllExport
    RTIBool GasSensor_initialize(
        GasSensor* self);

    NDDSUSERDllExport
    RTIBool GasSensor_initialize_ex(
        GasSensor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GasSensor_initialize_w_params(
        GasSensor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GasSensor_finalize_w_return(
        GasSensor* self);

    NDDSUSERDllExport
    void GasSensor_finalize(
        GasSensor* self);

    NDDSUSERDllExport
    void GasSensor_finalize_ex(
        GasSensor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GasSensor_finalize_w_params(
        GasSensor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GasSensor_finalize_optional_members(
        GasSensor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GasSensor_copy(
        GasSensor* dst,
        const GasSensor* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Sensor  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<Sensor::BaseSensor> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Sensor::HumiditySensor> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Sensor::PressureSensor> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Sensor::TemperatureSensor> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Sensor::GasSensor> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Sensor */

