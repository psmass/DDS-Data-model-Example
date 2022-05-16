

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AlarmsPlugin_1053311872_h
#define AlarmsPlugin_1053311872_h

#include "Alarms.hpp"

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

// Common Data Types
namespace Common {

    #define LargeString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define LargeString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LargeString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LargeString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LargeString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LargeString_t*
    LargeString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LargeString_t*
    LargeString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LargeString_t*
    LargeString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LargeString_tPluginSupport_copy_data(
        LargeString_t *out,
        const LargeString_t *in);

    NDDSUSERDllExport extern void 
    LargeString_tPluginSupport_destroy_data_w_params(
        LargeString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LargeString_tPluginSupport_destroy_data_ex(
        LargeString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LargeString_tPluginSupport_destroy_data(
        LargeString_t *sample);

    NDDSUSERDllExport extern void 
    LargeString_tPluginSupport_print_data(
        const LargeString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LargeString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LargeString_t *out,
        const LargeString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LargeString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LargeString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LargeString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LargeString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define MediumString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define MediumString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MediumString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MediumString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MediumString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MediumString_t*
    MediumString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MediumString_t*
    MediumString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MediumString_t*
    MediumString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MediumString_tPluginSupport_copy_data(
        MediumString_t *out,
        const MediumString_t *in);

    NDDSUSERDllExport extern void 
    MediumString_tPluginSupport_destroy_data_w_params(
        MediumString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MediumString_tPluginSupport_destroy_data_ex(
        MediumString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MediumString_tPluginSupport_destroy_data(
        MediumString_t *sample);

    NDDSUSERDllExport extern void 
    MediumString_tPluginSupport_print_data(
        const MediumString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MediumString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MediumString_t *out,
        const MediumString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MediumString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MediumString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MediumString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MediumString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ShortString_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define ShortString_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ShortString_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ShortString_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ShortString_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ShortString_t*
    ShortString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ShortString_t*
    ShortString_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShortString_t*
    ShortString_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ShortString_tPluginSupport_copy_data(
        ShortString_t *out,
        const ShortString_t *in);

    NDDSUSERDllExport extern void 
    ShortString_tPluginSupport_destroy_data_w_params(
        ShortString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ShortString_tPluginSupport_destroy_data_ex(
        ShortString_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShortString_tPluginSupport_destroy_data(
        ShortString_t *sample);

    NDDSUSERDllExport extern void 
    ShortString_tPluginSupport_print_data(
        const ShortString_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ShortString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShortString_t *out,
        const ShortString_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ShortString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ShortString_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ShortString_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ShortString_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Descriptor_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define Descriptor_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Descriptor_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Descriptor_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Descriptor_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Descriptor_t*
    Descriptor_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Descriptor_t*
    Descriptor_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Descriptor_t*
    Descriptor_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Descriptor_tPluginSupport_copy_data(
        Descriptor_t *out,
        const Descriptor_t *in);

    NDDSUSERDllExport extern void 
    Descriptor_tPluginSupport_destroy_data_w_params(
        Descriptor_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Descriptor_tPluginSupport_destroy_data_ex(
        Descriptor_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Descriptor_tPluginSupport_destroy_data(
        Descriptor_t *sample);

    NDDSUSERDllExport extern void 
    Descriptor_tPluginSupport_print_data(
        const Descriptor_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Descriptor_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Descriptor_t *out,
        const Descriptor_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Descriptor_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Descriptor_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Descriptor_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Descriptor_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Percentage_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define Percentage_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Percentage_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Percentage_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Percentage_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Percentage_t*
    Percentage_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Percentage_t*
    Percentage_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Percentage_t*
    Percentage_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Percentage_tPluginSupport_copy_data(
        Percentage_t *out,
        const Percentage_t *in);

    NDDSUSERDllExport extern void 
    Percentage_tPluginSupport_destroy_data_w_params(
        Percentage_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Percentage_tPluginSupport_destroy_data_ex(
        Percentage_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Percentage_tPluginSupport_destroy_data(
        Percentage_t *sample);

    NDDSUSERDllExport extern void 
    Percentage_tPluginSupport_print_data(
        const Percentage_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Percentage_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Percentage_t *out,
        const Percentage_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Percentage_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Percentage_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Percentage_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Percentage_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PressureInPascal_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define PressureInPascal_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PressureInPascal_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PressureInPascal_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PressureInPascal_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PressureInPascal_t*
    PressureInPascal_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PressureInPascal_t*
    PressureInPascal_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PressureInPascal_t*
    PressureInPascal_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PressureInPascal_tPluginSupport_copy_data(
        PressureInPascal_t *out,
        const PressureInPascal_t *in);

    NDDSUSERDllExport extern void 
    PressureInPascal_tPluginSupport_destroy_data_w_params(
        PressureInPascal_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PressureInPascal_tPluginSupport_destroy_data_ex(
        PressureInPascal_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PressureInPascal_tPluginSupport_destroy_data(
        PressureInPascal_t *sample);

    NDDSUSERDllExport extern void 
    PressureInPascal_tPluginSupport_print_data(
        const PressureInPascal_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PressureInPascal_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureInPascal_t *out,
        const PressureInPascal_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PressureInPascal_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PressureInPascal_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PressureInPascal_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PressureInPascal_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define TemperatureInDegreesKelvin_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define TemperatureInDegreesKelvin_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TemperatureInDegreesKelvin_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TemperatureInDegreesKelvin_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TemperatureInDegreesKelvin_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TemperatureInDegreesKelvin_t*
    TemperatureInDegreesKelvin_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TemperatureInDegreesKelvin_t*
    TemperatureInDegreesKelvin_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TemperatureInDegreesKelvin_t*
    TemperatureInDegreesKelvin_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TemperatureInDegreesKelvin_tPluginSupport_copy_data(
        TemperatureInDegreesKelvin_t *out,
        const TemperatureInDegreesKelvin_t *in);

    NDDSUSERDllExport extern void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data_w_params(
        TemperatureInDegreesKelvin_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data_ex(
        TemperatureInDegreesKelvin_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data(
        TemperatureInDegreesKelvin_t *sample);

    NDDSUSERDllExport extern void 
    TemperatureInDegreesKelvin_tPluginSupport_print_data(
        const TemperatureInDegreesKelvin_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TemperatureInDegreesKelvin_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureInDegreesKelvin_t *out,
        const TemperatureInDegreesKelvin_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    TemperatureInDegreesKelvin_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TemperatureInDegreesKelvin_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ConcentrationInMolesPerCubicMetre_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define ConcentrationInMolesPerCubicMetre_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConcentrationInMolesPerCubicMetre_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConcentrationInMolesPerCubicMetre_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConcentrationInMolesPerCubicMetre_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConcentrationInMolesPerCubicMetre_t*
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConcentrationInMolesPerCubicMetre_t*
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConcentrationInMolesPerCubicMetre_t*
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_copy_data(
        ConcentrationInMolesPerCubicMetre_t *out,
        const ConcentrationInMolesPerCubicMetre_t *in);

    NDDSUSERDllExport extern void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_w_params(
        ConcentrationInMolesPerCubicMetre_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_ex(
        ConcentrationInMolesPerCubicMetre_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data(
        ConcentrationInMolesPerCubicMetre_t *sample);

    NDDSUSERDllExport extern void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_print_data(
        const ConcentrationInMolesPerCubicMetre_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ConcentrationInMolesPerCubicMetre_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConcentrationInMolesPerCubicMetre_t *out,
        const ConcentrationInMolesPerCubicMetre_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    // Identifies a resource

    #define IdentifierType_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define IdentifierType_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentifierType_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentifierType_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentifierType_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IdentifierType_t*
    IdentifierType_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IdentifierType_t*
    IdentifierType_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentifierType_t*
    IdentifierType_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentifierType_tPluginSupport_copy_data(
        IdentifierType_t *out,
        const IdentifierType_t *in);

    NDDSUSERDllExport extern void 
    IdentifierType_tPluginSupport_destroy_data_w_params(
        IdentifierType_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentifierType_tPluginSupport_destroy_data_ex(
        IdentifierType_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentifierType_tPluginSupport_destroy_data(
        IdentifierType_t *sample);

    NDDSUSERDllExport extern void 
    IdentifierType_tPluginSupport_print_data(
        const IdentifierType_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    IdentifierType_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t *out,
        const IdentifierType_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    IdentifierType_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const IdentifierType_t *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    IdentifierType_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    IdentifierType_tPlugin_deserialize_from_cdr_buffer(
        IdentifierType_t *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    IdentifierType_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentifierType_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentifierType_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentifierType_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    IdentifierType_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    #define IdentifierList_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define IdentifierList_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentifierList_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentifierList_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentifierList_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IdentifierList_t*
    IdentifierList_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IdentifierList_t*
    IdentifierList_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentifierList_t*
    IdentifierList_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentifierList_tPluginSupport_copy_data(
        IdentifierList_t *out,
        const IdentifierList_t *in);

    NDDSUSERDllExport extern void 
    IdentifierList_tPluginSupport_destroy_data_w_params(
        IdentifierList_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentifierList_tPluginSupport_destroy_data_ex(
        IdentifierList_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentifierList_tPluginSupport_destroy_data(
        IdentifierList_t *sample);

    NDDSUSERDllExport extern void 
    IdentifierList_tPluginSupport_print_data(
        const IdentifierList_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    IdentifierList_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierList_t *out,
        const IdentifierList_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    IdentifierList_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentifierList_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentifierList_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentifierList_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ResponseCode_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ResponseCode_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResponseCode_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ResponseCode_tPluginSupport_print_data(
        const ResponseCode_t *sample, const char *desc, int indent_level);

    // Time

    #define DateTime_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define DateTime_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DateTime_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DateTime_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DateTime_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DateTime_t*
    DateTime_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DateTime_t*
    DateTime_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DateTime_t*
    DateTime_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DateTime_tPluginSupport_copy_data(
        DateTime_t *out,
        const DateTime_t *in);

    NDDSUSERDllExport extern void 
    DateTime_tPluginSupport_destroy_data_w_params(
        DateTime_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DateTime_tPluginSupport_destroy_data_ex(
        DateTime_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DateTime_tPluginSupport_destroy_data(
        DateTime_t *sample);

    NDDSUSERDllExport extern void 
    DateTime_tPluginSupport_print_data(
        const DateTime_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DateTime_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DateTime_t *out,
        const DateTime_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DateTime_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DateTime_t *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    DateTime_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        DateTime_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    DateTime_tPlugin_deserialize_from_cdr_buffer(
        DateTime_t *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    DateTime_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DateTime_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DateTime_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DateTime_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DateTime_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DateTime_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    #define MetaData_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define MetaData_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MetaData_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MetaData_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MetaData_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MetaData_t*
    MetaData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MetaData_t*
    MetaData_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MetaData_t*
    MetaData_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MetaData_tPluginSupport_copy_data(
        MetaData_t *out,
        const MetaData_t *in);

    NDDSUSERDllExport extern void 
    MetaData_tPluginSupport_destroy_data_w_params(
        MetaData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MetaData_tPluginSupport_destroy_data_ex(
        MetaData_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MetaData_tPluginSupport_destroy_data(
        MetaData_t *sample);

    NDDSUSERDllExport extern void 
    MetaData_tPluginSupport_print_data(
        const MetaData_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MetaData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MetaData_t *out,
        const MetaData_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MetaData_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MetaData_t *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    MetaData_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        MetaData_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    MetaData_tPlugin_deserialize_from_cdr_buffer(
        MetaData_t *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    MetaData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MetaData_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MetaData_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MetaData_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MetaData_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MetaData_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    #define BinaryData_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define BinaryData_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BinaryData_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BinaryData_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BinaryData_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern BinaryData_t*
    BinaryData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern BinaryData_t*
    BinaryData_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern BinaryData_t*
    BinaryData_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BinaryData_tPluginSupport_copy_data(
        BinaryData_t *out,
        const BinaryData_t *in);

    NDDSUSERDllExport extern void 
    BinaryData_tPluginSupport_destroy_data_w_params(
        BinaryData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BinaryData_tPluginSupport_destroy_data_ex(
        BinaryData_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BinaryData_tPluginSupport_destroy_data(
        BinaryData_t *sample);

    NDDSUSERDllExport extern void 
    BinaryData_tPluginSupport_print_data(
        const BinaryData_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    BinaryData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BinaryData_t *out,
        const BinaryData_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    BinaryData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BinaryData_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BinaryData_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BinaryData_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UnitTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UnitTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UnitTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UnitTypePluginSupport_print_data(
        const UnitType *sample, const char *desc, int indent_level);

    #define MeasurementCoordinate_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define MeasurementCoordinate_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MeasurementCoordinate_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MeasurementCoordinate_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MeasurementCoordinate_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MeasurementCoordinate_t*
    MeasurementCoordinate_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MeasurementCoordinate_t*
    MeasurementCoordinate_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MeasurementCoordinate_t*
    MeasurementCoordinate_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MeasurementCoordinate_tPluginSupport_copy_data(
        MeasurementCoordinate_t *out,
        const MeasurementCoordinate_t *in);

    NDDSUSERDllExport extern void 
    MeasurementCoordinate_tPluginSupport_destroy_data_w_params(
        MeasurementCoordinate_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MeasurementCoordinate_tPluginSupport_destroy_data_ex(
        MeasurementCoordinate_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MeasurementCoordinate_tPluginSupport_destroy_data(
        MeasurementCoordinate_t *sample);

    NDDSUSERDllExport extern void 
    MeasurementCoordinate_tPluginSupport_print_data(
        const MeasurementCoordinate_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MeasurementCoordinate_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MeasurementCoordinate_t *out,
        const MeasurementCoordinate_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MeasurementCoordinate_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MeasurementCoordinate_t *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    MeasurementCoordinate_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        MeasurementCoordinate_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    MeasurementCoordinate_tPlugin_deserialize_from_cdr_buffer(
        MeasurementCoordinate_t *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    MeasurementCoordinate_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MeasurementCoordinate_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MeasurementCoordinate_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MeasurementCoordinate_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MeasurementCoordinate_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MeasurementCoordinate_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

} /* namespace Common  */
namespace Alarms {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SeveritiesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SeveritiesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SeveritiesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    SeveritiesPluginSupport_print_data(
        const Severities *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    StatePluginSupport_print_data(
        const State *sample, const char *desc, int indent_level);

    #define ValueDefinitionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define ValueDefinitionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ValueDefinitionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ValueDefinitionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ValueDefinitionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ValueDefinition*
    ValueDefinitionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ValueDefinition*
    ValueDefinitionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ValueDefinition*
    ValueDefinitionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ValueDefinitionPluginSupport_copy_data(
        ValueDefinition *out,
        const ValueDefinition *in);

    NDDSUSERDllExport extern void 
    ValueDefinitionPluginSupport_destroy_data_w_params(
        ValueDefinition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ValueDefinitionPluginSupport_destroy_data_ex(
        ValueDefinition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ValueDefinitionPluginSupport_destroy_data(
        ValueDefinition *sample);

    NDDSUSERDllExport extern void 
    ValueDefinitionPluginSupport_print_data(
        const ValueDefinition *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ValueDefinitionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ValueDefinition *out,
        const ValueDefinition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ValueDefinitionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ValueDefinition *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    ValueDefinitionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ValueDefinition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ValueDefinitionPlugin_deserialize_from_cdr_buffer(
        ValueDefinition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    ValueDefinitionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ValueDefinitionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ValueDefinitionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ValueDefinitionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ValueDefinitionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ValueDefinition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

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
    typedef  class Alarm AlarmKeyHolder;

    #define AlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define AlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define AlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Alarm*
    AlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Alarm*
    AlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarm*
    AlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AlarmPluginSupport_copy_data(
        Alarm *out,
        const Alarm *in);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_destroy_data_w_params(
        Alarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_destroy_data_ex(
        Alarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_destroy_data(
        Alarm *sample);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_print_data(
        const Alarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Alarm*
    AlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Alarm*
    AlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_destroy_key_ex(
        AlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AlarmPluginSupport_destroy_key(
        AlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Alarm *out,
        const Alarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    AlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Alarm *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Alarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AlarmPlugin_deserialize_from_cdr_buffer(
        Alarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    AlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Alarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AlarmKeyHolder *key, 
        const Alarm *instance);

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Alarm *instance, 
        const AlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    AlarmPlugin_delete(struct PRESTypePlugin *);

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
    typedef  class HumidityAlarm HumidityAlarmKeyHolder;

    #define HumidityAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define HumidityAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define HumidityAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define HumidityAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define HumidityAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define HumidityAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define HumidityAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern HumidityAlarm*
    HumidityAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern HumidityAlarm*
    HumidityAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HumidityAlarm*
    HumidityAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPluginSupport_copy_data(
        HumidityAlarm *out,
        const HumidityAlarm *in);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_destroy_data_w_params(
        HumidityAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_destroy_data_ex(
        HumidityAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_destroy_data(
        HumidityAlarm *sample);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_print_data(
        const HumidityAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern HumidityAlarm*
    HumidityAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HumidityAlarm*
    HumidityAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_destroy_key_ex(
        HumidityAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HumidityAlarmPluginSupport_destroy_key(
        HumidityAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    HumidityAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    HumidityAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    HumidityAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    HumidityAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    HumidityAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarm *out,
        const HumidityAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    HumidityAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HumidityAlarm *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HumidityAlarmPlugin_deserialize_from_cdr_buffer(
        HumidityAlarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    HumidityAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    HumidityAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    HumidityAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HumidityAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarmKeyHolder *key, 
        const HumidityAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HumidityAlarm *instance, 
        const HumidityAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    HumidityAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    HumidityAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    HumidityAlarmPlugin_delete(struct PRESTypePlugin *);

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
    typedef  class MotionAlarm MotionAlarmKeyHolder;

    #define MotionAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define MotionAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MotionAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MotionAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define MotionAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define MotionAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MotionAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MotionAlarm*
    MotionAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MotionAlarm*
    MotionAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MotionAlarm*
    MotionAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPluginSupport_copy_data(
        MotionAlarm *out,
        const MotionAlarm *in);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_destroy_data_w_params(
        MotionAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_destroy_data_ex(
        MotionAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_destroy_data(
        MotionAlarm *sample);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_print_data(
        const MotionAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern MotionAlarm*
    MotionAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MotionAlarm*
    MotionAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_destroy_key_ex(
        MotionAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MotionAlarmPluginSupport_destroy_key(
        MotionAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    MotionAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    MotionAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    MotionAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    MotionAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    MotionAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarm *out,
        const MotionAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MotionAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MotionAlarm *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    MotionAlarmPlugin_deserialize_from_cdr_buffer(
        MotionAlarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    MotionAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MotionAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MotionAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MotionAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarmKeyHolder *key, 
        const MotionAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        MotionAlarm *instance, 
        const MotionAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    MotionAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    MotionAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    MotionAlarmPlugin_delete(struct PRESTypePlugin *);

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
    typedef  class FireAlarm FireAlarmKeyHolder;

    #define FireAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define FireAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define FireAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define FireAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define FireAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define FireAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define FireAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern FireAlarm*
    FireAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern FireAlarm*
    FireAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FireAlarm*
    FireAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPluginSupport_copy_data(
        FireAlarm *out,
        const FireAlarm *in);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_destroy_data_w_params(
        FireAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_destroy_data_ex(
        FireAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_destroy_data(
        FireAlarm *sample);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_print_data(
        const FireAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern FireAlarm*
    FireAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FireAlarm*
    FireAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_destroy_key_ex(
        FireAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FireAlarmPluginSupport_destroy_key(
        FireAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    FireAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    FireAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    FireAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    FireAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    FireAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarm *out,
        const FireAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    FireAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const FireAlarm *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    FireAlarmPlugin_deserialize_from_cdr_buffer(
        FireAlarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    FireAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    FireAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    FireAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FireAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarmKeyHolder *key, 
        const FireAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        FireAlarm *instance, 
        const FireAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    FireAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    FireAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    FireAlarmPlugin_delete(struct PRESTypePlugin *);

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
    typedef  class IntrusionAlarm IntrusionAlarmKeyHolder;

    #define IntrusionAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define IntrusionAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IntrusionAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IntrusionAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define IntrusionAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define IntrusionAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IntrusionAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IntrusionAlarm*
    IntrusionAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IntrusionAlarm*
    IntrusionAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IntrusionAlarm*
    IntrusionAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPluginSupport_copy_data(
        IntrusionAlarm *out,
        const IntrusionAlarm *in);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_destroy_data_w_params(
        IntrusionAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_destroy_data_ex(
        IntrusionAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_destroy_data(
        IntrusionAlarm *sample);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_print_data(
        const IntrusionAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern IntrusionAlarm*
    IntrusionAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IntrusionAlarm*
    IntrusionAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_destroy_key_ex(
        IntrusionAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPluginSupport_destroy_key(
        IntrusionAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    IntrusionAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    IntrusionAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    IntrusionAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    IntrusionAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarm *out,
        const IntrusionAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    IntrusionAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const IntrusionAlarm *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    IntrusionAlarmPlugin_deserialize_from_cdr_buffer(
        IntrusionAlarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    IntrusionAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IntrusionAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IntrusionAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IntrusionAlarmPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarmKeyHolder *key, 
        const IntrusionAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        IntrusionAlarm *instance, 
        const IntrusionAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    IntrusionAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    IntrusionAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    IntrusionAlarmPlugin_delete(struct PRESTypePlugin *);

} /* namespace Alarms  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AlarmsPlugin_1053311872_h */

