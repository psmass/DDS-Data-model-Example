

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Common.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Common_1118137226_h
#define Common_1118137226_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace Common {
    static const DDS_UnsignedShort MIN_LEN= 100U;
    static const DDS_UnsignedShort MED_LEN= 200U;
    static const DDS_UnsignedShort MAX_LEN= 500U;
    typedef    DDS_Char *   LargeString_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LargeString_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LargeString_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LargeString_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LargeString_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LargeString_tSeq, LargeString_t);

    NDDSUSERDllExport
    RTIBool LargeString_t_initialize(
        LargeString_t* self);

    NDDSUSERDllExport
    RTIBool LargeString_t_initialize_ex(
        LargeString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LargeString_t_initialize_w_params(
        LargeString_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LargeString_t_finalize_w_return(
        LargeString_t* self);

    NDDSUSERDllExport
    void LargeString_t_finalize(
        LargeString_t* self);

    NDDSUSERDllExport
    void LargeString_t_finalize_ex(
        LargeString_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LargeString_t_finalize_w_params(
        LargeString_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LargeString_t_finalize_optional_members(
        LargeString_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LargeString_t_copy(
        LargeString_t* dst,
        const LargeString_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Char *   MediumString_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MediumString_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MediumString_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MediumString_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MediumString_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MediumString_tSeq, MediumString_t);

    NDDSUSERDllExport
    RTIBool MediumString_t_initialize(
        MediumString_t* self);

    NDDSUSERDllExport
    RTIBool MediumString_t_initialize_ex(
        MediumString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MediumString_t_initialize_w_params(
        MediumString_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MediumString_t_finalize_w_return(
        MediumString_t* self);

    NDDSUSERDllExport
    void MediumString_t_finalize(
        MediumString_t* self);

    NDDSUSERDllExport
    void MediumString_t_finalize_ex(
        MediumString_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MediumString_t_finalize_w_params(
        MediumString_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MediumString_t_finalize_optional_members(
        MediumString_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MediumString_t_copy(
        MediumString_t* dst,
        const MediumString_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Char *   ShortString_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ShortString_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ShortString_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShortString_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShortString_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ShortString_tSeq, ShortString_t);

    NDDSUSERDllExport
    RTIBool ShortString_t_initialize(
        ShortString_t* self);

    NDDSUSERDllExport
    RTIBool ShortString_t_initialize_ex(
        ShortString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ShortString_t_initialize_w_params(
        ShortString_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ShortString_t_finalize_w_return(
        ShortString_t* self);

    NDDSUSERDllExport
    void ShortString_t_finalize(
        ShortString_t* self);

    NDDSUSERDllExport
    void ShortString_t_finalize_ex(
        ShortString_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ShortString_t_finalize_w_params(
        ShortString_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ShortString_t_finalize_optional_members(
        ShortString_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ShortString_t_copy(
        ShortString_t* dst,
        const ShortString_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Char *   Descriptor_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Descriptor_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Descriptor_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Descriptor_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Descriptor_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Descriptor_tSeq, Descriptor_t);

    NDDSUSERDllExport
    RTIBool Descriptor_t_initialize(
        Descriptor_t* self);

    NDDSUSERDllExport
    RTIBool Descriptor_t_initialize_ex(
        Descriptor_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Descriptor_t_initialize_w_params(
        Descriptor_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Descriptor_t_finalize_w_return(
        Descriptor_t* self);

    NDDSUSERDllExport
    void Descriptor_t_finalize(
        Descriptor_t* self);

    NDDSUSERDllExport
    void Descriptor_t_finalize_ex(
        Descriptor_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Descriptor_t_finalize_w_params(
        Descriptor_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Descriptor_t_finalize_optional_members(
        Descriptor_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Descriptor_t_copy(
        Descriptor_t* dst,
        const Descriptor_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Float   Percentage_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Percentage_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Percentage_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Percentage_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Percentage_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Percentage_tSeq, Percentage_t);

    NDDSUSERDllExport
    RTIBool Percentage_t_initialize(
        Percentage_t* self);

    NDDSUSERDllExport
    RTIBool Percentage_t_initialize_ex(
        Percentage_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Percentage_t_initialize_w_params(
        Percentage_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Percentage_t_finalize_w_return(
        Percentage_t* self);

    NDDSUSERDllExport
    void Percentage_t_finalize(
        Percentage_t* self);

    NDDSUSERDllExport
    void Percentage_t_finalize_ex(
        Percentage_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Percentage_t_finalize_w_params(
        Percentage_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Percentage_t_finalize_optional_members(
        Percentage_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Percentage_t_copy(
        Percentage_t* dst,
        const Percentage_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Float   PressureInPascal_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PressureInPascal_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PressureInPascal_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PressureInPascal_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PressureInPascal_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PressureInPascal_tSeq, PressureInPascal_t);

    NDDSUSERDllExport
    RTIBool PressureInPascal_t_initialize(
        PressureInPascal_t* self);

    NDDSUSERDllExport
    RTIBool PressureInPascal_t_initialize_ex(
        PressureInPascal_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PressureInPascal_t_initialize_w_params(
        PressureInPascal_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PressureInPascal_t_finalize_w_return(
        PressureInPascal_t* self);

    NDDSUSERDllExport
    void PressureInPascal_t_finalize(
        PressureInPascal_t* self);

    NDDSUSERDllExport
    void PressureInPascal_t_finalize_ex(
        PressureInPascal_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PressureInPascal_t_finalize_w_params(
        PressureInPascal_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PressureInPascal_t_finalize_optional_members(
        PressureInPascal_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PressureInPascal_t_copy(
        PressureInPascal_t* dst,
        const PressureInPascal_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Float   TemperatureInDegreesKelvin_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TemperatureInDegreesKelvin_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TemperatureInDegreesKelvin_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TemperatureInDegreesKelvin_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TemperatureInDegreesKelvin_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TemperatureInDegreesKelvin_tSeq, TemperatureInDegreesKelvin_t);

    NDDSUSERDllExport
    RTIBool TemperatureInDegreesKelvin_t_initialize(
        TemperatureInDegreesKelvin_t* self);

    NDDSUSERDllExport
    RTIBool TemperatureInDegreesKelvin_t_initialize_ex(
        TemperatureInDegreesKelvin_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TemperatureInDegreesKelvin_t_initialize_w_params(
        TemperatureInDegreesKelvin_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TemperatureInDegreesKelvin_t_finalize_w_return(
        TemperatureInDegreesKelvin_t* self);

    NDDSUSERDllExport
    void TemperatureInDegreesKelvin_t_finalize(
        TemperatureInDegreesKelvin_t* self);

    NDDSUSERDllExport
    void TemperatureInDegreesKelvin_t_finalize_ex(
        TemperatureInDegreesKelvin_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TemperatureInDegreesKelvin_t_finalize_w_params(
        TemperatureInDegreesKelvin_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TemperatureInDegreesKelvin_t_finalize_optional_members(
        TemperatureInDegreesKelvin_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TemperatureInDegreesKelvin_t_copy(
        TemperatureInDegreesKelvin_t* dst,
        const TemperatureInDegreesKelvin_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Float   ConcentrationInMolesPerCubicMetre_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConcentrationInMolesPerCubicMetre_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConcentrationInMolesPerCubicMetre_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConcentrationInMolesPerCubicMetre_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConcentrationInMolesPerCubicMetre_tSeq, ConcentrationInMolesPerCubicMetre_t);

    NDDSUSERDllExport
    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize(
        ConcentrationInMolesPerCubicMetre_t* self);

    NDDSUSERDllExport
    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize_ex(
        ConcentrationInMolesPerCubicMetre_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
        ConcentrationInMolesPerCubicMetre_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConcentrationInMolesPerCubicMetre_t_finalize_w_return(
        ConcentrationInMolesPerCubicMetre_t* self);

    NDDSUSERDllExport
    void ConcentrationInMolesPerCubicMetre_t_finalize(
        ConcentrationInMolesPerCubicMetre_t* self);

    NDDSUSERDllExport
    void ConcentrationInMolesPerCubicMetre_t_finalize_ex(
        ConcentrationInMolesPerCubicMetre_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
        ConcentrationInMolesPerCubicMetre_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConcentrationInMolesPerCubicMetre_t_finalize_optional_members(
        ConcentrationInMolesPerCubicMetre_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConcentrationInMolesPerCubicMetre_t_copy(
        ConcentrationInMolesPerCubicMetre_t* dst,
        const ConcentrationInMolesPerCubicMetre_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Short   BinaryData_t [(Common::MAX_LEN)];
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * BinaryData_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *BinaryData_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *BinaryData_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *BinaryData_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE_NO_GET(BinaryData_tSeq, BinaryData_t);

    NDDSUSERDllExport
    RTIBool BinaryData_t_initialize(
        BinaryData_t* self);

    NDDSUSERDllExport
    RTIBool BinaryData_t_initialize_ex(
        BinaryData_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool BinaryData_t_initialize_w_params(
        BinaryData_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool BinaryData_t_finalize_w_return(
        BinaryData_t* self);

    NDDSUSERDllExport
    void BinaryData_t_finalize(
        BinaryData_t* self);

    NDDSUSERDllExport
    void BinaryData_t_finalize_ex(
        BinaryData_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void BinaryData_t_finalize_w_params(
        BinaryData_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void BinaryData_t_finalize_optional_members(
        BinaryData_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool BinaryData_t_copy(
        BinaryData_t* dst,
        const BinaryData_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *IdentifierType_tTYPENAME;

    struct IdentifierType_tSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class IdentifierType_tTypeSupport;
    class IdentifierType_tDataWriter;
    class IdentifierType_tDataReader;
    #endif
    class IdentifierType_t 
    {
      public:
        typedef struct IdentifierType_tSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef IdentifierType_tTypeSupport TypeSupport;
        typedef IdentifierType_tDataWriter DataWriter;
        typedef IdentifierType_tDataReader DataReader;
        #endif

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
    NDDSUSERDllExport DDS_TypeCode * IdentifierType_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *IdentifierType_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentifierType_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentifierType_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentifierType_tSeq, IdentifierType_t);

    NDDSUSERDllExport
    RTIBool IdentifierType_t_initialize(
        IdentifierType_t* self);

    NDDSUSERDllExport
    RTIBool IdentifierType_t_initialize_ex(
        IdentifierType_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool IdentifierType_t_initialize_w_params(
        IdentifierType_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool IdentifierType_t_finalize_w_return(
        IdentifierType_t* self);

    NDDSUSERDllExport
    void IdentifierType_t_finalize(
        IdentifierType_t* self);

    NDDSUSERDllExport
    void IdentifierType_t_finalize_ex(
        IdentifierType_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void IdentifierType_t_finalize_w_params(
        IdentifierType_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void IdentifierType_t_finalize_optional_members(
        IdentifierType_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool IdentifierType_t_copy(
        IdentifierType_t* dst,
        const IdentifierType_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef     Common::IdentifierType_tSeq  IdentifierList_t ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * IdentifierList_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *IdentifierList_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentifierList_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentifierList_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentifierList_tSeq, IdentifierList_t);

    NDDSUSERDllExport
    RTIBool IdentifierList_t_initialize(
        IdentifierList_t* self);

    NDDSUSERDllExport
    RTIBool IdentifierList_t_initialize_ex(
        IdentifierList_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool IdentifierList_t_initialize_w_params(
        IdentifierList_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool IdentifierList_t_finalize_w_return(
        IdentifierList_t* self);

    NDDSUSERDllExport
    void IdentifierList_t_finalize(
        IdentifierList_t* self);

    NDDSUSERDllExport
    void IdentifierList_t_finalize_ex(
        IdentifierList_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void IdentifierList_t_finalize_w_params(
        IdentifierList_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void IdentifierList_t_finalize_optional_members(
        IdentifierList_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool IdentifierList_t_copy(
        IdentifierList_t* dst,
        const IdentifierList_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DateTime_tTYPENAME;

    struct DateTime_tSeq;
    class DateTime_t 
    {
      public:
        typedef struct DateTime_tSeq Seq;

        DDS_LongLong   secs ;
        DDS_LongLong   nsecs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DateTime_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DateTime_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DateTime_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DateTime_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DateTime_tSeq, DateTime_t);

    NDDSUSERDllExport
    RTIBool DateTime_t_initialize(
        DateTime_t* self);

    NDDSUSERDllExport
    RTIBool DateTime_t_initialize_ex(
        DateTime_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DateTime_t_initialize_w_params(
        DateTime_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DateTime_t_finalize_w_return(
        DateTime_t* self);

    NDDSUSERDllExport
    void DateTime_t_finalize(
        DateTime_t* self);

    NDDSUSERDllExport
    void DateTime_t_finalize_ex(
        DateTime_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DateTime_t_finalize_w_params(
        DateTime_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DateTime_t_finalize_optional_members(
        DateTime_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DateTime_t_copy(
        DateTime_t* dst,
        const DateTime_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *MetaData_tTYPENAME;

    struct MetaData_tSeq;
    class MetaData_t 
    {
      public:
        typedef struct MetaData_tSeq Seq;

        Common::DateTime_t   timeOfGeneration ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MetaData_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MetaData_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MetaData_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MetaData_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MetaData_tSeq, MetaData_t);

    NDDSUSERDllExport
    RTIBool MetaData_t_initialize(
        MetaData_t* self);

    NDDSUSERDllExport
    RTIBool MetaData_t_initialize_ex(
        MetaData_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MetaData_t_initialize_w_params(
        MetaData_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MetaData_t_finalize_w_return(
        MetaData_t* self);

    NDDSUSERDllExport
    void MetaData_t_finalize(
        MetaData_t* self);

    NDDSUSERDllExport
    void MetaData_t_finalize_ex(
        MetaData_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MetaData_t_finalize_w_params(
        MetaData_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MetaData_t_finalize_optional_members(
        MetaData_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MetaData_t_copy(
        MetaData_t* dst,
        const MetaData_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Common  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<Common::IdentifierType_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Common::DateTime_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Common::MetaData_t> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Common */

