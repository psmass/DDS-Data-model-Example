

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AlarmsPlugin_1053329249_h
#define AlarmsPlugin_1053329249_h

#include "Alarms.h"

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

extern "C"{

    // Common Data Types

    #define Common_LargeString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_LargeString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_LargeString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_LargeString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_LargeString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_LargeString_t*
    Common_LargeString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_LargeString_t*
    Common_LargeString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_LargeString_t*
    Common_LargeString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_LargeString_tPluginSupport_copy_data(
        Common_LargeString_t *out,
        const Common_LargeString_t *in);

    NDDSUSERDllExport extern void 
    Common_LargeString_tPluginSupport_destroy_data_w_params(
        Common_LargeString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_LargeString_tPluginSupport_destroy_data_ex(
        Common_LargeString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_LargeString_tPluginSupport_destroy_data(
        Common_LargeString_t *sample);

    NDDSUSERDllExport extern void 
    Common_LargeString_tPluginSupport_print_data(
        const Common_LargeString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_LargeString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_LargeString_t *out,
        const Common_LargeString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_LargeString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_LargeString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_LargeString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_LargeString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_MediumString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_MediumString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_MediumString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_MediumString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_MediumString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_MediumString_t*
    Common_MediumString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_MediumString_t*
    Common_MediumString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_MediumString_t*
    Common_MediumString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_MediumString_tPluginSupport_copy_data(
        Common_MediumString_t *out,
        const Common_MediumString_t *in);

    NDDSUSERDllExport extern void 
    Common_MediumString_tPluginSupport_destroy_data_w_params(
        Common_MediumString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_MediumString_tPluginSupport_destroy_data_ex(
        Common_MediumString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_MediumString_tPluginSupport_destroy_data(
        Common_MediumString_t *sample);

    NDDSUSERDllExport extern void 
    Common_MediumString_tPluginSupport_print_data(
        const Common_MediumString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_MediumString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_MediumString_t *out,
        const Common_MediumString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_MediumString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_MediumString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_MediumString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_MediumString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_ShortString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_ShortString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_ShortString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_ShortString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_ShortString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_ShortString_t*
    Common_ShortString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_ShortString_t*
    Common_ShortString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_ShortString_t*
    Common_ShortString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_ShortString_tPluginSupport_copy_data(
        Common_ShortString_t *out,
        const Common_ShortString_t *in);

    NDDSUSERDllExport extern void 
    Common_ShortString_tPluginSupport_destroy_data_w_params(
        Common_ShortString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_ShortString_tPluginSupport_destroy_data_ex(
        Common_ShortString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_ShortString_tPluginSupport_destroy_data(
        Common_ShortString_t *sample);

    NDDSUSERDllExport extern void 
    Common_ShortString_tPluginSupport_print_data(
        const Common_ShortString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_ShortString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_ShortString_t *out,
        const Common_ShortString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_ShortString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_ShortString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_ShortString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_ShortString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_Descriptor_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_Descriptor_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_Descriptor_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_Descriptor_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_Descriptor_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_Descriptor_t*
    Common_Descriptor_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_Descriptor_t*
    Common_Descriptor_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_Descriptor_t*
    Common_Descriptor_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_Descriptor_tPluginSupport_copy_data(
        Common_Descriptor_t *out,
        const Common_Descriptor_t *in);

    NDDSUSERDllExport extern void 
    Common_Descriptor_tPluginSupport_destroy_data_w_params(
        Common_Descriptor_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_Descriptor_tPluginSupport_destroy_data_ex(
        Common_Descriptor_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_Descriptor_tPluginSupport_destroy_data(
        Common_Descriptor_t *sample);

    NDDSUSERDllExport extern void 
    Common_Descriptor_tPluginSupport_print_data(
        const Common_Descriptor_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_Descriptor_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_Descriptor_t *out,
        const Common_Descriptor_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_Descriptor_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_Descriptor_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_Descriptor_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_Descriptor_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_Percentage_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_Percentage_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_Percentage_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_Percentage_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_Percentage_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_Percentage_t*
    Common_Percentage_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_Percentage_t*
    Common_Percentage_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_Percentage_t*
    Common_Percentage_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_Percentage_tPluginSupport_copy_data(
        Common_Percentage_t *out,
        const Common_Percentage_t *in);

    NDDSUSERDllExport extern void 
    Common_Percentage_tPluginSupport_destroy_data_w_params(
        Common_Percentage_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_Percentage_tPluginSupport_destroy_data_ex(
        Common_Percentage_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_Percentage_tPluginSupport_destroy_data(
        Common_Percentage_t *sample);

    NDDSUSERDllExport extern void 
    Common_Percentage_tPluginSupport_print_data(
        const Common_Percentage_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_Percentage_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_Percentage_t *out,
        const Common_Percentage_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_Percentage_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_Percentage_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_Percentage_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_Percentage_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_PressureInPascal_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_PressureInPascal_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_PressureInPascal_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_PressureInPascal_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_PressureInPascal_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_PressureInPascal_t*
    Common_PressureInPascal_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_PressureInPascal_t*
    Common_PressureInPascal_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_PressureInPascal_t*
    Common_PressureInPascal_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_PressureInPascal_tPluginSupport_copy_data(
        Common_PressureInPascal_t *out,
        const Common_PressureInPascal_t *in);

    NDDSUSERDllExport extern void 
    Common_PressureInPascal_tPluginSupport_destroy_data_w_params(
        Common_PressureInPascal_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_PressureInPascal_tPluginSupport_destroy_data_ex(
        Common_PressureInPascal_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_PressureInPascal_tPluginSupport_destroy_data(
        Common_PressureInPascal_t *sample);

    NDDSUSERDllExport extern void 
    Common_PressureInPascal_tPluginSupport_print_data(
        const Common_PressureInPascal_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_PressureInPascal_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_PressureInPascal_t *out,
        const Common_PressureInPascal_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_PressureInPascal_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_PressureInPascal_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_PressureInPascal_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_PressureInPascal_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_TemperatureInDegreesKelvin_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_TemperatureInDegreesKelvin_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_TemperatureInDegreesKelvin_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_TemperatureInDegreesKelvin_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_TemperatureInDegreesKelvin_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_TemperatureInDegreesKelvin_t*
    Common_TemperatureInDegreesKelvin_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_TemperatureInDegreesKelvin_t*
    Common_TemperatureInDegreesKelvin_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_TemperatureInDegreesKelvin_t*
    Common_TemperatureInDegreesKelvin_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_TemperatureInDegreesKelvin_tPluginSupport_copy_data(
        Common_TemperatureInDegreesKelvin_t *out,
        const Common_TemperatureInDegreesKelvin_t *in);

    NDDSUSERDllExport extern void 
    Common_TemperatureInDegreesKelvin_tPluginSupport_destroy_data_w_params(
        Common_TemperatureInDegreesKelvin_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_TemperatureInDegreesKelvin_tPluginSupport_destroy_data_ex(
        Common_TemperatureInDegreesKelvin_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_TemperatureInDegreesKelvin_tPluginSupport_destroy_data(
        Common_TemperatureInDegreesKelvin_t *sample);

    NDDSUSERDllExport extern void 
    Common_TemperatureInDegreesKelvin_tPluginSupport_print_data(
        const Common_TemperatureInDegreesKelvin_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_TemperatureInDegreesKelvin_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_TemperatureInDegreesKelvin_t *out,
        const Common_TemperatureInDegreesKelvin_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_TemperatureInDegreesKelvin_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_TemperatureInDegreesKelvin_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_ConcentrationInMolesPerCubicMetre_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_ConcentrationInMolesPerCubicMetre_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_ConcentrationInMolesPerCubicMetre_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_ConcentrationInMolesPerCubicMetre_t*
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_ConcentrationInMolesPerCubicMetre_t*
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_ConcentrationInMolesPerCubicMetre_t*
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_copy_data(
        Common_ConcentrationInMolesPerCubicMetre_t *out,
        const Common_ConcentrationInMolesPerCubicMetre_t *in);

    NDDSUSERDllExport extern void 
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_w_params(
        Common_ConcentrationInMolesPerCubicMetre_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_ex(
        Common_ConcentrationInMolesPerCubicMetre_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data(
        Common_ConcentrationInMolesPerCubicMetre_t *sample);

    NDDSUSERDllExport extern void 
    Common_ConcentrationInMolesPerCubicMetre_tPluginSupport_print_data(
        const Common_ConcentrationInMolesPerCubicMetre_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_ConcentrationInMolesPerCubicMetre_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_ConcentrationInMolesPerCubicMetre_t *out,
        const Common_ConcentrationInMolesPerCubicMetre_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    // Identifies a resource

    #define Common_IdentifierType_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_IdentifierType_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_IdentifierType_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_IdentifierType_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_IdentifierType_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_IdentifierType_t*
    Common_IdentifierType_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_IdentifierType_t*
    Common_IdentifierType_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_IdentifierType_t*
    Common_IdentifierType_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_IdentifierType_tPluginSupport_copy_data(
        Common_IdentifierType_t *out,
        const Common_IdentifierType_t *in);

    NDDSUSERDllExport extern void 
    Common_IdentifierType_tPluginSupport_destroy_data_w_params(
        Common_IdentifierType_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_IdentifierType_tPluginSupport_destroy_data_ex(
        Common_IdentifierType_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_IdentifierType_tPluginSupport_destroy_data(
        Common_IdentifierType_t *sample);

    NDDSUSERDllExport extern void 
    Common_IdentifierType_tPluginSupport_print_data(
        const Common_IdentifierType_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_IdentifierType_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_IdentifierType_t *out,
        const Common_IdentifierType_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Common_IdentifierType_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Common_IdentifierType_t *sample); 

    NDDSUSERDllExport extern RTIBool
    Common_IdentifierType_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Common_IdentifierType_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Common_IdentifierType_tPlugin_deserialize_from_cdr_buffer(
        Common_IdentifierType_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Common_IdentifierType_tPlugin_data_to_string(
        const Common_IdentifierType_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierType_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_IdentifierType_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierType_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierType_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Common_IdentifierType_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Common_IdentifierType_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Common_IdentifierType_tPlugin_get_programs(void);

    #define Common_IdentifierList_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_IdentifierList_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_IdentifierList_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_IdentifierList_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_IdentifierList_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_IdentifierList_t*
    Common_IdentifierList_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_IdentifierList_t*
    Common_IdentifierList_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_IdentifierList_t*
    Common_IdentifierList_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_IdentifierList_tPluginSupport_copy_data(
        Common_IdentifierList_t *out,
        const Common_IdentifierList_t *in);

    NDDSUSERDllExport extern void 
    Common_IdentifierList_tPluginSupport_destroy_data_w_params(
        Common_IdentifierList_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_IdentifierList_tPluginSupport_destroy_data_ex(
        Common_IdentifierList_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_IdentifierList_tPluginSupport_destroy_data(
        Common_IdentifierList_t *sample);

    NDDSUSERDllExport extern void 
    Common_IdentifierList_tPluginSupport_print_data(
        const Common_IdentifierList_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_IdentifierList_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_IdentifierList_t *out,
        const Common_IdentifierList_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierList_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_IdentifierList_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierList_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_IdentifierList_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_ResponseCode_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_ResponseCode_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_ResponseCode_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    Common_ResponseCode_tPluginSupport_print_data(
        const Common_ResponseCode_t *sample, const char *desc, int indent_level);

    // Time

    #define Common_DateTime_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_DateTime_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_DateTime_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_DateTime_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_DateTime_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_DateTime_t*
    Common_DateTime_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_DateTime_t*
    Common_DateTime_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_DateTime_t*
    Common_DateTime_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_DateTime_tPluginSupport_copy_data(
        Common_DateTime_t *out,
        const Common_DateTime_t *in);

    NDDSUSERDllExport extern void 
    Common_DateTime_tPluginSupport_destroy_data_w_params(
        Common_DateTime_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_DateTime_tPluginSupport_destroy_data_ex(
        Common_DateTime_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_DateTime_tPluginSupport_destroy_data(
        Common_DateTime_t *sample);

    NDDSUSERDllExport extern void 
    Common_DateTime_tPluginSupport_print_data(
        const Common_DateTime_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_DateTime_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_DateTime_t *out,
        const Common_DateTime_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Common_DateTime_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Common_DateTime_t *sample); 

    NDDSUSERDllExport extern RTIBool
    Common_DateTime_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Common_DateTime_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Common_DateTime_tPlugin_deserialize_from_cdr_buffer(
        Common_DateTime_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Common_DateTime_tPlugin_data_to_string(
        const Common_DateTime_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Common_DateTime_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_DateTime_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_DateTime_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_DateTime_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Common_DateTime_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Common_DateTime_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Common_DateTime_tPlugin_get_programs(void);

    #define Common_MetaData_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_MetaData_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_MetaData_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_MetaData_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_MetaData_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_MetaData_t*
    Common_MetaData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_MetaData_t*
    Common_MetaData_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_MetaData_t*
    Common_MetaData_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_MetaData_tPluginSupport_copy_data(
        Common_MetaData_t *out,
        const Common_MetaData_t *in);

    NDDSUSERDllExport extern void 
    Common_MetaData_tPluginSupport_destroy_data_w_params(
        Common_MetaData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_MetaData_tPluginSupport_destroy_data_ex(
        Common_MetaData_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_MetaData_tPluginSupport_destroy_data(
        Common_MetaData_t *sample);

    NDDSUSERDllExport extern void 
    Common_MetaData_tPluginSupport_print_data(
        const Common_MetaData_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_MetaData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_MetaData_t *out,
        const Common_MetaData_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Common_MetaData_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Common_MetaData_t *sample); 

    NDDSUSERDllExport extern RTIBool
    Common_MetaData_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Common_MetaData_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Common_MetaData_tPlugin_deserialize_from_cdr_buffer(
        Common_MetaData_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Common_MetaData_tPlugin_data_to_string(
        const Common_MetaData_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Common_MetaData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_MetaData_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_MetaData_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_MetaData_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Common_MetaData_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Common_MetaData_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Common_MetaData_tPlugin_get_programs(void);

    #define Common_BinaryData_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_BinaryData_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_BinaryData_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_BinaryData_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_BinaryData_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_BinaryData_t*
    Common_BinaryData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_BinaryData_t*
    Common_BinaryData_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_BinaryData_t*
    Common_BinaryData_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_BinaryData_tPluginSupport_copy_data(
        Common_BinaryData_t *out,
        const Common_BinaryData_t *in);

    NDDSUSERDllExport extern void 
    Common_BinaryData_tPluginSupport_destroy_data_w_params(
        Common_BinaryData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_BinaryData_tPluginSupport_destroy_data_ex(
        Common_BinaryData_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_BinaryData_tPluginSupport_destroy_data(
        Common_BinaryData_t *sample);

    NDDSUSERDllExport extern void 
    Common_BinaryData_tPluginSupport_print_data(
        const Common_BinaryData_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_BinaryData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_BinaryData_t *out,
        const Common_BinaryData_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_BinaryData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_BinaryData_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_BinaryData_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_BinaryData_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_UnitTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Common_UnitTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_UnitTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    Common_UnitTypePluginSupport_print_data(
        const Common_UnitType *sample, const char *desc, int indent_level);

    #define Common_MeasurementCoordinate_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Common_MeasurementCoordinate_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Common_MeasurementCoordinate_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Common_MeasurementCoordinate_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Common_MeasurementCoordinate_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Common_MeasurementCoordinate_t*
    Common_MeasurementCoordinate_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Common_MeasurementCoordinate_t*
    Common_MeasurementCoordinate_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Common_MeasurementCoordinate_t*
    Common_MeasurementCoordinate_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Common_MeasurementCoordinate_tPluginSupport_copy_data(
        Common_MeasurementCoordinate_t *out,
        const Common_MeasurementCoordinate_t *in);

    NDDSUSERDllExport extern void 
    Common_MeasurementCoordinate_tPluginSupport_destroy_data_w_params(
        Common_MeasurementCoordinate_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Common_MeasurementCoordinate_tPluginSupport_destroy_data_ex(
        Common_MeasurementCoordinate_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Common_MeasurementCoordinate_tPluginSupport_destroy_data(
        Common_MeasurementCoordinate_t *sample);

    NDDSUSERDllExport extern void 
    Common_MeasurementCoordinate_tPluginSupport_print_data(
        const Common_MeasurementCoordinate_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Common_MeasurementCoordinate_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Common_MeasurementCoordinate_t *out,
        const Common_MeasurementCoordinate_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Common_MeasurementCoordinate_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Common_MeasurementCoordinate_t *sample); 

    NDDSUSERDllExport extern RTIBool
    Common_MeasurementCoordinate_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Common_MeasurementCoordinate_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Common_MeasurementCoordinate_tPlugin_deserialize_from_cdr_buffer(
        Common_MeasurementCoordinate_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Common_MeasurementCoordinate_tPlugin_data_to_string(
        const Common_MeasurementCoordinate_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Common_MeasurementCoordinate_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Common_MeasurementCoordinate_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Common_MeasurementCoordinate_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Common_MeasurementCoordinate_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Common_MeasurementCoordinate_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Common_MeasurementCoordinate_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Common_MeasurementCoordinate_tPlugin_get_programs(void);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Alarms_SeveritiesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Alarms_SeveritiesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_SeveritiesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    Alarms_SeveritiesPluginSupport_print_data(
        const Alarms_Severities *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Alarms_StatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Alarms_StatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_StatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    Alarms_StatePluginSupport_print_data(
        const Alarms_State *sample, const char *desc, int indent_level);

    #define Alarms_ValueDefinitionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_ValueDefinitionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_ValueDefinitionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_ValueDefinitionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_ValueDefinitionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_ValueDefinition*
    Alarms_ValueDefinitionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_ValueDefinition*
    Alarms_ValueDefinitionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_ValueDefinition*
    Alarms_ValueDefinitionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_ValueDefinitionPluginSupport_copy_data(
        Alarms_ValueDefinition *out,
        const Alarms_ValueDefinition *in);

    NDDSUSERDllExport extern void 
    Alarms_ValueDefinitionPluginSupport_destroy_data_w_params(
        Alarms_ValueDefinition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_ValueDefinitionPluginSupport_destroy_data_ex(
        Alarms_ValueDefinition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_ValueDefinitionPluginSupport_destroy_data(
        Alarms_ValueDefinition *sample);

    NDDSUSERDllExport extern void 
    Alarms_ValueDefinitionPluginSupport_print_data(
        const Alarms_ValueDefinition *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Alarms_ValueDefinitionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_ValueDefinition *out,
        const Alarms_ValueDefinition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_ValueDefinitionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_ValueDefinition *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_ValueDefinitionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_ValueDefinition *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_ValueDefinitionPlugin_deserialize_from_cdr_buffer(
        Alarms_ValueDefinition *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_ValueDefinitionPlugin_data_to_string(
        const Alarms_ValueDefinition *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_ValueDefinitionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_ValueDefinitionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_ValueDefinitionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_ValueDefinitionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_ValueDefinitionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_ValueDefinition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_ValueDefinitionPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Alarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Alarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Alarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Alarm.
    */
    typedef  class Alarms_Alarm Alarms_AlarmKeyHolder;

    #define Alarms_AlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_AlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_AlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_AlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define Alarms_AlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define Alarms_AlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_AlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_Alarm*
    Alarms_AlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_Alarm*
    Alarms_AlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_Alarm*
    Alarms_AlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPluginSupport_copy_data(
        Alarms_Alarm *out,
        const Alarms_Alarm *in);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_destroy_data_w_params(
        Alarms_Alarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_destroy_data_ex(
        Alarms_Alarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_destroy_data(
        Alarms_Alarm *sample);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_print_data(
        const Alarms_Alarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarms_Alarm*
    Alarms_AlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_Alarm*
    Alarms_AlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_destroy_key_ex(
        Alarms_AlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPluginSupport_destroy_key(
        Alarms_AlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Alarms_AlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Alarms_AlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Alarms_AlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Alarms_AlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_Alarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_Alarm *out,
        const Alarms_Alarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_AlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_Alarm *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_AlarmPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_Alarm *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_AlarmPlugin_deserialize_from_cdr_buffer(
        Alarms_Alarm *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_AlarmPlugin_data_to_string(
        const Alarms_Alarm *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_AlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_AlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_AlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_AlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_Alarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_AlarmKeyHolder *key, 
        const Alarms_Alarm *instance);

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_Alarm *instance, 
        const Alarms_AlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    Alarms_AlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_AlarmPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Alarms_AlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    Alarms_AlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct HumidityAlarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct HumidityAlarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * HumidityAlarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct HumidityAlarm.
    */
    typedef  class Alarms_HumidityAlarm Alarms_HumidityAlarmKeyHolder;

    #define Alarms_HumidityAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_HumidityAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_HumidityAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_HumidityAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define Alarms_HumidityAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define Alarms_HumidityAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_HumidityAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_HumidityAlarm*
    Alarms_HumidityAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_HumidityAlarm*
    Alarms_HumidityAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_HumidityAlarm*
    Alarms_HumidityAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPluginSupport_copy_data(
        Alarms_HumidityAlarm *out,
        const Alarms_HumidityAlarm *in);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_destroy_data_w_params(
        Alarms_HumidityAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_destroy_data_ex(
        Alarms_HumidityAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_destroy_data(
        Alarms_HumidityAlarm *sample);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_print_data(
        const Alarms_HumidityAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarms_HumidityAlarm*
    Alarms_HumidityAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_HumidityAlarm*
    Alarms_HumidityAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_destroy_key_ex(
        Alarms_HumidityAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPluginSupport_destroy_key(
        Alarms_HumidityAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Alarms_HumidityAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Alarms_HumidityAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Alarms_HumidityAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Alarms_HumidityAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_HumidityAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_HumidityAlarm *out,
        const Alarms_HumidityAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_HumidityAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_HumidityAlarm *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_HumidityAlarmPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_HumidityAlarm *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_HumidityAlarmPlugin_deserialize_from_cdr_buffer(
        Alarms_HumidityAlarm *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_HumidityAlarmPlugin_data_to_string(
        const Alarms_HumidityAlarm *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_HumidityAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_HumidityAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_HumidityAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_HumidityAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_HumidityAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_HumidityAlarmKeyHolder *key, 
        const Alarms_HumidityAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_HumidityAlarm *instance, 
        const Alarms_HumidityAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    Alarms_HumidityAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_HumidityAlarmPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Alarms_HumidityAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    Alarms_HumidityAlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct MotionAlarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct MotionAlarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * MotionAlarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct MotionAlarm.
    */
    typedef  class Alarms_MotionAlarm Alarms_MotionAlarmKeyHolder;

    #define Alarms_MotionAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_MotionAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_MotionAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_MotionAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define Alarms_MotionAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define Alarms_MotionAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_MotionAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_MotionAlarm*
    Alarms_MotionAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_MotionAlarm*
    Alarms_MotionAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_MotionAlarm*
    Alarms_MotionAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPluginSupport_copy_data(
        Alarms_MotionAlarm *out,
        const Alarms_MotionAlarm *in);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_destroy_data_w_params(
        Alarms_MotionAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_destroy_data_ex(
        Alarms_MotionAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_destroy_data(
        Alarms_MotionAlarm *sample);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_print_data(
        const Alarms_MotionAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarms_MotionAlarm*
    Alarms_MotionAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_MotionAlarm*
    Alarms_MotionAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_destroy_key_ex(
        Alarms_MotionAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPluginSupport_destroy_key(
        Alarms_MotionAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Alarms_MotionAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Alarms_MotionAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Alarms_MotionAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Alarms_MotionAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_MotionAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_MotionAlarm *out,
        const Alarms_MotionAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_MotionAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_MotionAlarm *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_MotionAlarmPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_MotionAlarm *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_MotionAlarmPlugin_deserialize_from_cdr_buffer(
        Alarms_MotionAlarm *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_MotionAlarmPlugin_data_to_string(
        const Alarms_MotionAlarm *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_MotionAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_MotionAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_MotionAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_MotionAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_MotionAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_MotionAlarmKeyHolder *key, 
        const Alarms_MotionAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_MotionAlarm *instance, 
        const Alarms_MotionAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    Alarms_MotionAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_MotionAlarmPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Alarms_MotionAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    Alarms_MotionAlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct FireAlarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct FireAlarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * FireAlarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct FireAlarm.
    */
    typedef  class Alarms_FireAlarm Alarms_FireAlarmKeyHolder;

    #define Alarms_FireAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_FireAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_FireAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_FireAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define Alarms_FireAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define Alarms_FireAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_FireAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_FireAlarm*
    Alarms_FireAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_FireAlarm*
    Alarms_FireAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_FireAlarm*
    Alarms_FireAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPluginSupport_copy_data(
        Alarms_FireAlarm *out,
        const Alarms_FireAlarm *in);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_destroy_data_w_params(
        Alarms_FireAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_destroy_data_ex(
        Alarms_FireAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_destroy_data(
        Alarms_FireAlarm *sample);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_print_data(
        const Alarms_FireAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarms_FireAlarm*
    Alarms_FireAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_FireAlarm*
    Alarms_FireAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_destroy_key_ex(
        Alarms_FireAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPluginSupport_destroy_key(
        Alarms_FireAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Alarms_FireAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Alarms_FireAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Alarms_FireAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Alarms_FireAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_FireAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_FireAlarm *out,
        const Alarms_FireAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_FireAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_FireAlarm *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_FireAlarmPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_FireAlarm *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_FireAlarmPlugin_deserialize_from_cdr_buffer(
        Alarms_FireAlarm *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_FireAlarmPlugin_data_to_string(
        const Alarms_FireAlarm *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_FireAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_FireAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_FireAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_FireAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_FireAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_FireAlarmKeyHolder *key, 
        const Alarms_FireAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_FireAlarm *instance, 
        const Alarms_FireAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    Alarms_FireAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_FireAlarmPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Alarms_FireAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    Alarms_FireAlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct IntrusionAlarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct IntrusionAlarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * IntrusionAlarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct IntrusionAlarm.
    */
    typedef  class Alarms_IntrusionAlarm Alarms_IntrusionAlarmKeyHolder;

    #define Alarms_IntrusionAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Alarms_IntrusionAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Alarms_IntrusionAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Alarms_IntrusionAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define Alarms_IntrusionAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define Alarms_IntrusionAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Alarms_IntrusionAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarms_IntrusionAlarm*
    Alarms_IntrusionAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarms_IntrusionAlarm*
    Alarms_IntrusionAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_IntrusionAlarm*
    Alarms_IntrusionAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPluginSupport_copy_data(
        Alarms_IntrusionAlarm *out,
        const Alarms_IntrusionAlarm *in);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_destroy_data_w_params(
        Alarms_IntrusionAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_destroy_data_ex(
        Alarms_IntrusionAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_destroy_data(
        Alarms_IntrusionAlarm *sample);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_print_data(
        const Alarms_IntrusionAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarms_IntrusionAlarm*
    Alarms_IntrusionAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarms_IntrusionAlarm*
    Alarms_IntrusionAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_destroy_key_ex(
        Alarms_IntrusionAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPluginSupport_destroy_key(
        Alarms_IntrusionAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Alarms_IntrusionAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Alarms_IntrusionAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Alarms_IntrusionAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Alarms_IntrusionAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_IntrusionAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_IntrusionAlarm *out,
        const Alarms_IntrusionAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Alarms_IntrusionAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarms_IntrusionAlarm *sample); 

    NDDSUSERDllExport extern RTIBool
    Alarms_IntrusionAlarmPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Alarms_IntrusionAlarm *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Alarms_IntrusionAlarmPlugin_deserialize_from_cdr_buffer(
        Alarms_IntrusionAlarm *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Alarms_IntrusionAlarmPlugin_data_to_string(
        const Alarms_IntrusionAlarm *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Alarms_IntrusionAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Alarms_IntrusionAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Alarms_IntrusionAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Alarms_IntrusionAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_IntrusionAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_IntrusionAlarmKeyHolder *key, 
        const Alarms_IntrusionAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarms_IntrusionAlarm *instance, 
        const Alarms_IntrusionAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    Alarms_IntrusionAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Alarms_IntrusionAlarmPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Alarms_IntrusionAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    Alarms_IntrusionAlarmPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AlarmsPlugin_1053329249_h */

