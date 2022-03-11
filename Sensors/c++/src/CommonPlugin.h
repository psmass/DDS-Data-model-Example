

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Common.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommonPlugin_1118137226_h
#define CommonPlugin_1118137226_h

#include "Common.h"

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

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    IdentifierType_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    IdentifierType_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    IdentifierType_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    IdentifierType_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    IdentifierType_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t *sample,
        void *handle);    

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
        const IdentifierType_t *sample); 

    NDDSUSERDllExport extern RTIBool
    IdentifierType_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const IdentifierType_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    IdentifierType_tPlugin_deserialize_from_cdr_buffer(
        IdentifierType_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    IdentifierType_tPlugin_data_to_string(
        const IdentifierType_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

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

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * IdentifierType_tPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    IdentifierType_tPlugin_new(void);

    NDDSUSERDllExport extern void
    IdentifierType_tPlugin_delete(struct PRESTypePlugin *);

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
        const DateTime_t *sample); 

    NDDSUSERDllExport extern RTIBool
    DateTime_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DateTime_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DateTime_tPlugin_deserialize_from_cdr_buffer(
        DateTime_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DateTime_tPlugin_data_to_string(
        const DateTime_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

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

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DateTime_tPlugin_get_programs(void);

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
        const MetaData_t *sample); 

    NDDSUSERDllExport extern RTIBool
    MetaData_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MetaData_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    MetaData_tPlugin_deserialize_from_cdr_buffer(
        MetaData_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MetaData_tPlugin_data_to_string(
        const MetaData_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

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

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * MetaData_tPlugin_get_programs(void);

} /* namespace Common  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommonPlugin_1118137226_h */

