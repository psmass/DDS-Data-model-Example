

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommandRespPlugin_2073433936_h
#define CommandRespPlugin_2073433936_h

#include "CommandResp.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace ExCmdRsp {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceStateEnumPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceStateEnumPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceStateEnumPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    DeviceStateEnumPluginSupport_print_data(
        const DeviceStateEnum *sample, const char *desc, int indent_level);

    #define DeviceIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceId*
    DeviceIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceId*
    DeviceIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceId*
    DeviceIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceIdPluginSupport_copy_data(
        DeviceId *out,
        const DeviceId *in);

    NDDSUSERDllExport extern void 
    DeviceIdPluginSupport_destroy_data_w_params(
        DeviceId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceIdPluginSupport_destroy_data_ex(
        DeviceId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceIdPluginSupport_destroy_data(
        DeviceId *sample);

    NDDSUSERDllExport extern void 
    DeviceIdPluginSupport_print_data(
        const DeviceId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceId *out,
        const DeviceId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceId *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceIdPlugin_deserialize_from_cdr_buffer(
        DeviceId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceIdPlugin_data_to_string(
        const DeviceId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceIdPlugin_get_programs(void);

    #define DeviceConfigurationStuctPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceConfigurationStuctPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceConfigurationStuctPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceConfigurationStuctPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceConfigurationStuctPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceConfigurationStuct*
    DeviceConfigurationStuctPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceConfigurationStuct*
    DeviceConfigurationStuctPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceConfigurationStuct*
    DeviceConfigurationStuctPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigurationStuctPluginSupport_copy_data(
        DeviceConfigurationStuct *out,
        const DeviceConfigurationStuct *in);

    NDDSUSERDllExport extern void 
    DeviceConfigurationStuctPluginSupport_destroy_data_w_params(
        DeviceConfigurationStuct *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceConfigurationStuctPluginSupport_destroy_data_ex(
        DeviceConfigurationStuct *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceConfigurationStuctPluginSupport_destroy_data(
        DeviceConfigurationStuct *sample);

    NDDSUSERDllExport extern void 
    DeviceConfigurationStuctPluginSupport_print_data(
        const DeviceConfigurationStuct *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigurationStuctPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigurationStuct *out,
        const DeviceConfigurationStuct *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceConfigurationStuct *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceConfigurationStuct *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceConfigurationStuctPlugin_deserialize_from_cdr_buffer(
        DeviceConfigurationStuct *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceConfigurationStuctPlugin_data_to_string(
        const DeviceConfigurationStuct *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationStuctPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceConfigurationStuctPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationStuctPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationStuctPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigurationStuctPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigurationStuct ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceConfigurationStuctPlugin_get_programs(void);

    #define DeviceConfigurationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceConfigurationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceConfigurationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceConfigurationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceConfigurationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceConfiguration*
    DeviceConfigurationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceConfiguration*
    DeviceConfigurationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceConfiguration*
    DeviceConfigurationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigurationPluginSupport_copy_data(
        DeviceConfiguration *out,
        const DeviceConfiguration *in);

    NDDSUSERDllExport extern void 
    DeviceConfigurationPluginSupport_destroy_data_w_params(
        DeviceConfiguration *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceConfigurationPluginSupport_destroy_data_ex(
        DeviceConfiguration *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceConfigurationPluginSupport_destroy_data(
        DeviceConfiguration *sample);

    NDDSUSERDllExport extern void 
    DeviceConfigurationPluginSupport_print_data(
        const DeviceConfiguration *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigurationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfiguration *out,
        const DeviceConfiguration *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceConfigurationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigurationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ConfigureDevicePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConfigureDevicePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConfigureDevicePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConfigureDevicePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConfigureDevicePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConfigureDevice*
    ConfigureDevicePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConfigureDevice*
    ConfigureDevicePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConfigureDevice*
    ConfigureDevicePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConfigureDevicePluginSupport_copy_data(
        ConfigureDevice *out,
        const ConfigureDevice *in);

    NDDSUSERDllExport extern void 
    ConfigureDevicePluginSupport_destroy_data_w_params(
        ConfigureDevice *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConfigureDevicePluginSupport_destroy_data_ex(
        ConfigureDevice *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConfigureDevicePluginSupport_destroy_data(
        ConfigureDevice *sample);

    NDDSUSERDllExport extern void 
    ConfigureDevicePluginSupport_print_data(
        const ConfigureDevice *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ConfigureDevicePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ConfigureDevicePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ConfigureDevicePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ConfigureDevicePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ConfigureDevicePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ConfigureDevicePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice *out,
        const ConfigureDevice *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ConfigureDevicePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ConfigureDevice *sample); 

    NDDSUSERDllExport extern RTIBool
    ConfigureDevicePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ConfigureDevice *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ConfigureDevicePlugin_deserialize_from_cdr_buffer(
        ConfigureDevice *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ConfigureDevicePlugin_data_to_string(
        const ConfigureDevice *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ConfigureDevicePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConfigureDevicePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConfigureDevicePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConfigureDevicePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ConfigureDevicePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ConfigureDevicePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ConfigureDevicePlugin_new(void);

    NDDSUSERDllExport extern void
    ConfigureDevicePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceState.
    */
    typedef  class DeviceState DeviceStateKeyHolder;

    #define DeviceStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define DeviceStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define DeviceStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceState*
    DeviceStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceState*
    DeviceStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceState*
    DeviceStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePluginSupport_copy_data(
        DeviceState *out,
        const DeviceState *in);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_destroy_data_w_params(
        DeviceState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_destroy_data_ex(
        DeviceState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_destroy_data(
        DeviceState *sample);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_print_data(
        const DeviceState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern DeviceState*
    DeviceStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceState*
    DeviceStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_destroy_key_ex(
        DeviceStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceStatePluginSupport_destroy_key(
        DeviceStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    DeviceStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    DeviceStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    DeviceStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    DeviceStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    DeviceStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *out,
        const DeviceState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceState *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceStatePlugin_deserialize_from_cdr_buffer(
        DeviceState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceStatePlugin_data_to_string(
        const DeviceState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceStateKeyHolder *key, 
        const DeviceState *instance);

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *instance, 
        const DeviceStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    DeviceStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    DeviceStatePlugin_new(void);

    NDDSUSERDllExport extern void
    DeviceStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace ExCmdRsp  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommandRespPlugin_2073433936_h */

