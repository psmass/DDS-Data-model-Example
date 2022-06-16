

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommandResp_2073433103_h
#define CommandResp_2073433103_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace ExCmdRsp {
    static const DDS_Char * const MODULE_EX_CMD_RSP= "ExCmdRsp";
    static const DDS_Char * const TOPIC_CONFIGURE_DEVICE= "ExCmdRsp::ConfigureDevice";
    static const DDS_Char * const TOPIC_CONFIGURE_DEV_CFT= "ConfigureDevice::MyFilter";
    static const DDS_Char * const TOPIC_DEVICE_STATE= "ExCmdRsp::DeviceState";
    static const DDS_Char * const CONTROLLER1_PARTICIPANT= "CmdRspParticipantLibrary::ControllerParticipant1";
    static const DDS_Char * const DEVICE1_PARTICIPANT= "CmdRspParticipantLibrary::DeviceParticipant1";
    static const DDS_Char * const DEVICE_STATE_WRITER= "DevicePublisher::DeviceStateWriter";
    static const DDS_Char * const DEVICE_STATE_READER= "ControllerSubscriber::DeviceStateReader";
    static const DDS_Char * const CONFIGURE_DEVICE_WRITER= "ControllerPublisher::ConfigureDeviceWriter";
    static const DDS_Char * const CONFIGURE_DEVICE_READER= "DeviceSubscriber::ConfigureDeviceReader";
    static const DDS_Char * const CMD_RSP_QOS_LIBRARY= "CmdRspQoSLibrary";
    static const DDS_Char * const DEVICE_STATE_TOPIC_QOS_PROFILE= "DeviceStateProfile";
    static const DDS_Char * const CONFIG_DEV_TOPIC_QOS_PROFILE= "ConfigDevProfile";
    static const DDS_UnsignedLong LEN_DEVICE_ID= 32UL;
    static const DDS_UnsignedLong LEN_STR_FOO= 10UL;
    static const DDS_UnsignedLong LEN_STR_BAR= 16UL;
    typedef enum DeviceStateEnum
    {
        UNINITIALIZED , 
        OFF , 
        ON , 
        ERROR 
    } DeviceStateEnum;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceStateEnum_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceStateEnum_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceStateEnum_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceStateEnum_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceStateEnumSeq, DeviceStateEnum);

    NDDSUSERDllExport
    RTIBool DeviceStateEnum_initialize(
        DeviceStateEnum* self);

    NDDSUSERDllExport
    RTIBool DeviceStateEnum_initialize_ex(
        DeviceStateEnum* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceStateEnum_initialize_w_params(
        DeviceStateEnum* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceStateEnum_finalize_w_return(
        DeviceStateEnum* self);

    NDDSUSERDllExport
    void DeviceStateEnum_finalize(
        DeviceStateEnum* self);

    NDDSUSERDllExport
    void DeviceStateEnum_finalize_ex(
        DeviceStateEnum* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceStateEnum_finalize_w_params(
        DeviceStateEnum* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceStateEnum_finalize_optional_members(
        DeviceStateEnum* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceStateEnum_copy(
        DeviceStateEnum* dst,
        const DeviceStateEnum* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceIdTYPENAME;

    struct DeviceIdSeq;
    class DeviceId 
    {
      public:
        typedef struct DeviceIdSeq Seq;

        DDS_Long   resourceId ;
        DDS_Long   id ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceId_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceId_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceIdSeq, DeviceId);

    NDDSUSERDllExport
    RTIBool DeviceId_initialize(
        DeviceId* self);

    NDDSUSERDllExport
    RTIBool DeviceId_initialize_ex(
        DeviceId* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceId_initialize_w_params(
        DeviceId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceId_finalize_w_return(
        DeviceId* self);

    NDDSUSERDllExport
    void DeviceId_finalize(
        DeviceId* self);

    NDDSUSERDllExport
    void DeviceId_finalize_ex(
        DeviceId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceId_finalize_w_params(
        DeviceId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceId_finalize_optional_members(
        DeviceId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceId_copy(
        DeviceId* dst,
        const DeviceId* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceConfigurationStuctTYPENAME;

    struct DeviceConfigurationStuctSeq;
    class DeviceConfigurationStuct 
    {
      public:
        typedef struct DeviceConfigurationStuctSeq Seq;

        ExCmdRsp::DeviceStateEnum   stateReq ;
        DDS_Char *   fooName ;
        DDS_Long   fooValue ;
        DDS_Char *   barName ;
        DDS_UnsignedLong   barValue ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceConfigurationStuct_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceConfigurationStuct_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfigurationStuct_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfigurationStuct_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceConfigurationStuctSeq, DeviceConfigurationStuct);

    NDDSUSERDllExport
    RTIBool DeviceConfigurationStuct_initialize(
        DeviceConfigurationStuct* self);

    NDDSUSERDllExport
    RTIBool DeviceConfigurationStuct_initialize_ex(
        DeviceConfigurationStuct* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceConfigurationStuct_initialize_w_params(
        DeviceConfigurationStuct* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceConfigurationStuct_finalize_w_return(
        DeviceConfigurationStuct* self);

    NDDSUSERDllExport
    void DeviceConfigurationStuct_finalize(
        DeviceConfigurationStuct* self);

    NDDSUSERDllExport
    void DeviceConfigurationStuct_finalize_ex(
        DeviceConfigurationStuct* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceConfigurationStuct_finalize_w_params(
        DeviceConfigurationStuct* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceConfigurationStuct_finalize_optional_members(
        DeviceConfigurationStuct* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceConfigurationStuct_copy(
        DeviceConfigurationStuct* dst,
        const DeviceConfigurationStuct* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    ExCmdRsp::DeviceConfigurationStuct   DeviceConfiguration ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceConfiguration_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceConfiguration_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfiguration_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfiguration_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceConfigurationSeq, DeviceConfiguration);

    NDDSUSERDllExport
    RTIBool DeviceConfiguration_initialize(
        DeviceConfiguration* self);

    NDDSUSERDllExport
    RTIBool DeviceConfiguration_initialize_ex(
        DeviceConfiguration* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceConfiguration_initialize_w_params(
        DeviceConfiguration* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceConfiguration_finalize_w_return(
        DeviceConfiguration* self);

    NDDSUSERDllExport
    void DeviceConfiguration_finalize(
        DeviceConfiguration* self);

    NDDSUSERDllExport
    void DeviceConfiguration_finalize_ex(
        DeviceConfiguration* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceConfiguration_finalize_w_params(
        DeviceConfiguration* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceConfiguration_finalize_optional_members(
        DeviceConfiguration* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceConfiguration_copy(
        DeviceConfiguration* dst,
        const DeviceConfiguration* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ConfigureDeviceTYPENAME;

    struct ConfigureDeviceSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ConfigureDeviceTypeSupport;
    class ConfigureDeviceDataWriter;
    class ConfigureDeviceDataReader;
    #endif
    class ConfigureDevice 
    {
      public:
        typedef struct ConfigureDeviceSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ConfigureDeviceTypeSupport TypeSupport;
        typedef ConfigureDeviceDataWriter DataWriter;
        typedef ConfigureDeviceDataReader DataReader;
        #endif

        ExCmdRsp::DeviceId   targetDeviceId ;
        ExCmdRsp::DeviceConfigurationStuct   deviceConfig ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConfigureDevice_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConfigureDevice_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConfigureDevice_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConfigureDevice_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConfigureDeviceSeq, ConfigureDevice);

    NDDSUSERDllExport
    RTIBool ConfigureDevice_initialize(
        ConfigureDevice* self);

    NDDSUSERDllExport
    RTIBool ConfigureDevice_initialize_ex(
        ConfigureDevice* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConfigureDevice_initialize_w_params(
        ConfigureDevice* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConfigureDevice_finalize_w_return(
        ConfigureDevice* self);

    NDDSUSERDllExport
    void ConfigureDevice_finalize(
        ConfigureDevice* self);

    NDDSUSERDllExport
    void ConfigureDevice_finalize_ex(
        ConfigureDevice* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConfigureDevice_finalize_w_params(
        ConfigureDevice* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConfigureDevice_finalize_optional_members(
        ConfigureDevice* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConfigureDevice_copy(
        ConfigureDevice* dst,
        const ConfigureDevice* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceStateTYPENAME;

    struct DeviceStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DeviceStateTypeSupport;
    class DeviceStateDataWriter;
    class DeviceStateDataReader;
    #endif
    class DeviceState 
    {
      public:
        typedef struct DeviceStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DeviceStateTypeSupport TypeSupport;
        typedef DeviceStateDataWriter DataWriter;
        typedef DeviceStateDataReader DataReader;
        #endif

        ExCmdRsp::DeviceId   myDeviceId ;
        ExCmdRsp::DeviceStateEnum   state ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceStateSeq, DeviceState);

    NDDSUSERDllExport
    RTIBool DeviceState_initialize(
        DeviceState* self);

    NDDSUSERDllExport
    RTIBool DeviceState_initialize_ex(
        DeviceState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceState_initialize_w_params(
        DeviceState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceState_finalize_w_return(
        DeviceState* self);

    NDDSUSERDllExport
    void DeviceState_finalize(
        DeviceState* self);

    NDDSUSERDllExport
    void DeviceState_finalize_ex(
        DeviceState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceState_finalize_w_params(
        DeviceState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceState_finalize_optional_members(
        DeviceState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceState_copy(
        DeviceState* dst,
        const DeviceState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace ExCmdRsp  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<ExCmdRsp::DeviceId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<ExCmdRsp::DeviceConfigurationStuct> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<ExCmdRsp::ConfigureDevice> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<ExCmdRsp::DeviceState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommandResp */

