

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensor.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SensorPlugin_591118812_h
#define SensorPlugin_591118812_h

#include "Sensor.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "CommonPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace Sensor {
    namespace Constants {
    } /* namespace Constants  */

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct BaseSensor
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct BaseSensor)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * BaseSensor must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct BaseSensor.
    */
    typedef  class BaseSensor BaseSensorKeyHolder;

    #define BaseSensorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define BaseSensorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BaseSensorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BaseSensorPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define BaseSensorPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define BaseSensorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BaseSensorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern BaseSensor*
    BaseSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern BaseSensor*
    BaseSensorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern BaseSensor*
    BaseSensorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPluginSupport_copy_data(
        BaseSensor *out,
        const BaseSensor *in);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_destroy_data_w_params(
        BaseSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_destroy_data_ex(
        BaseSensor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_destroy_data(
        BaseSensor *sample);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_print_data(
        const BaseSensor *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern BaseSensor*
    BaseSensorPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern BaseSensor*
    BaseSensorPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_destroy_key_ex(
        BaseSensorKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BaseSensorPluginSupport_destroy_key(
        BaseSensorKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor *out,
        const BaseSensor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    BaseSensorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const BaseSensor *sample); 

    NDDSUSERDllExport extern RTIBool
    BaseSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const BaseSensor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    BaseSensorPlugin_deserialize_from_cdr_buffer(
        BaseSensor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    BaseSensorPlugin_data_to_string(
        const BaseSensor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    BaseSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BaseSensorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BaseSensorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BaseSensorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensorKeyHolder *key, 
        const BaseSensor *instance);

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor *instance, 
        const BaseSensorKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    BaseSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * BaseSensorPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct HumiditySensor
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct HumiditySensor)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * HumiditySensor must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct HumiditySensor.
    */
    typedef  class HumiditySensor HumiditySensorKeyHolder;

    #define HumiditySensorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define HumiditySensorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define HumiditySensorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define HumiditySensorPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define HumiditySensorPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define HumiditySensorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define HumiditySensorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern HumiditySensor*
    HumiditySensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern HumiditySensor*
    HumiditySensorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HumiditySensor*
    HumiditySensorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPluginSupport_copy_data(
        HumiditySensor *out,
        const HumiditySensor *in);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_destroy_data_w_params(
        HumiditySensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_destroy_data_ex(
        HumiditySensor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_destroy_data(
        HumiditySensor *sample);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_print_data(
        const HumiditySensor *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern HumiditySensor*
    HumiditySensorPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HumiditySensor*
    HumiditySensorPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_destroy_key_ex(
        HumiditySensorKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HumiditySensorPluginSupport_destroy_key(
        HumiditySensorKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    HumiditySensorPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    HumiditySensorPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    HumiditySensorPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    HumiditySensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    HumiditySensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *out,
        const HumiditySensor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    HumiditySensorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HumiditySensor *sample); 

    NDDSUSERDllExport extern RTIBool
    HumiditySensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const HumiditySensor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    HumiditySensorPlugin_deserialize_from_cdr_buffer(
        HumiditySensor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    HumiditySensorPlugin_data_to_string(
        const HumiditySensor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    HumiditySensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    HumiditySensorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    HumiditySensorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HumiditySensorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensorKeyHolder *key, 
        const HumiditySensor *instance);

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *instance, 
        const HumiditySensorKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    HumiditySensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * HumiditySensorPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    HumiditySensorPlugin_new(void);

    NDDSUSERDllExport extern void
    HumiditySensorPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PressureSensor
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PressureSensor)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PressureSensor must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PressureSensor.
    */
    typedef  class PressureSensor PressureSensorKeyHolder;

    #define PressureSensorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PressureSensorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PressureSensorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PressureSensorPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PressureSensorPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PressureSensorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PressureSensorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PressureSensor*
    PressureSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PressureSensor*
    PressureSensorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PressureSensor*
    PressureSensorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPluginSupport_copy_data(
        PressureSensor *out,
        const PressureSensor *in);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_destroy_data_w_params(
        PressureSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_destroy_data_ex(
        PressureSensor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_destroy_data(
        PressureSensor *sample);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_print_data(
        const PressureSensor *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PressureSensor*
    PressureSensorPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PressureSensor*
    PressureSensorPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_destroy_key_ex(
        PressureSensorKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PressureSensorPluginSupport_destroy_key(
        PressureSensorKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PressureSensorPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PressureSensorPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PressureSensorPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PressureSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PressureSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *out,
        const PressureSensor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PressureSensorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PressureSensor *sample); 

    NDDSUSERDllExport extern RTIBool
    PressureSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PressureSensor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PressureSensorPlugin_deserialize_from_cdr_buffer(
        PressureSensor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PressureSensorPlugin_data_to_string(
        const PressureSensor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PressureSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PressureSensorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PressureSensorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PressureSensorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensorKeyHolder *key, 
        const PressureSensor *instance);

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *instance, 
        const PressureSensorKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PressureSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PressureSensorPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PressureSensorPlugin_new(void);

    NDDSUSERDllExport extern void
    PressureSensorPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct TemperatureSensor
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TemperatureSensor)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TemperatureSensor must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TemperatureSensor.
    */
    typedef  class TemperatureSensor TemperatureSensorKeyHolder;

    #define TemperatureSensorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TemperatureSensorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TemperatureSensorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TemperatureSensorPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define TemperatureSensorPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define TemperatureSensorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TemperatureSensorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TemperatureSensor*
    TemperatureSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TemperatureSensor*
    TemperatureSensorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TemperatureSensor*
    TemperatureSensorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPluginSupport_copy_data(
        TemperatureSensor *out,
        const TemperatureSensor *in);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_destroy_data_w_params(
        TemperatureSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_destroy_data_ex(
        TemperatureSensor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_destroy_data(
        TemperatureSensor *sample);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_print_data(
        const TemperatureSensor *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern TemperatureSensor*
    TemperatureSensorPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TemperatureSensor*
    TemperatureSensorPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_destroy_key_ex(
        TemperatureSensorKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TemperatureSensorPluginSupport_destroy_key(
        TemperatureSensorKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TemperatureSensorPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TemperatureSensorPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TemperatureSensorPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TemperatureSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TemperatureSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *out,
        const TemperatureSensor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TemperatureSensorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TemperatureSensor *sample); 

    NDDSUSERDllExport extern RTIBool
    TemperatureSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TemperatureSensor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    TemperatureSensorPlugin_deserialize_from_cdr_buffer(
        TemperatureSensor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TemperatureSensorPlugin_data_to_string(
        const TemperatureSensor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TemperatureSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TemperatureSensorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TemperatureSensorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TemperatureSensorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensorKeyHolder *key, 
        const TemperatureSensor *instance);

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *instance, 
        const TemperatureSensorKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    TemperatureSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * TemperatureSensorPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TemperatureSensorPlugin_new(void);

    NDDSUSERDllExport extern void
    TemperatureSensorPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GasSensor
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GasSensor)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GasSensor must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GasSensor.
    */
    typedef  class GasSensor GasSensorKeyHolder;

    #define GasSensorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GasSensorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GasSensorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GasSensorPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define GasSensorPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define GasSensorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GasSensorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GasSensor*
    GasSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GasSensor*
    GasSensorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GasSensor*
    GasSensorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GasSensorPluginSupport_copy_data(
        GasSensor *out,
        const GasSensor *in);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_destroy_data_w_params(
        GasSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_destroy_data_ex(
        GasSensor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_destroy_data(
        GasSensor *sample);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_print_data(
        const GasSensor *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern GasSensor*
    GasSensorPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GasSensor*
    GasSensorPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_destroy_key_ex(
        GasSensorKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GasSensorPluginSupport_destroy_key(
        GasSensorKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    GasSensorPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    GasSensorPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    GasSensorPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    GasSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    GasSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    GasSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *out,
        const GasSensor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GasSensorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GasSensor *sample); 

    NDDSUSERDllExport extern RTIBool
    GasSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GasSensor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GasSensorPlugin_deserialize_from_cdr_buffer(
        GasSensor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GasSensorPlugin_data_to_string(
        const GasSensor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GasSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GasSensorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GasSensorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GasSensorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GasSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GasSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GasSensorKeyHolder *key, 
        const GasSensor *instance);

    NDDSUSERDllExport extern RTIBool 
    GasSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *instance, 
        const GasSensorKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    GasSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GasSensorPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    GasSensorPlugin_new(void);

    NDDSUSERDllExport extern void
    GasSensorPlugin_delete(struct PRESTypePlugin *);

} /* namespace Sensor  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SensorPlugin_591118812_h */

