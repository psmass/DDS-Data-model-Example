

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Alarms_1053311872_h
#define Alarms_1053311872_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

// Common Data Types 

static const DDS_UnsignedShort Common_MIN_LEN= 100U;

static const DDS_UnsignedShort Common_MED_LEN= 200U;

static const DDS_UnsignedShort Common_MAX_LEN= 500U;

typedef    DDS_Char *   Common_LargeString_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_LargeString_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_LargeString_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_LargeString_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_LargeString_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_LargeString_tSeq, Common_LargeString_t);

NDDSUSERDllExport
RTIBool Common_LargeString_t_initialize(
    Common_LargeString_t* self);

NDDSUSERDllExport
RTIBool Common_LargeString_t_initialize_ex(
    Common_LargeString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_LargeString_t_initialize_w_params(
    Common_LargeString_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_LargeString_t_finalize_w_return(
    Common_LargeString_t* self);

NDDSUSERDllExport
void Common_LargeString_t_finalize(
    Common_LargeString_t* self);

NDDSUSERDllExport
void Common_LargeString_t_finalize_ex(
    Common_LargeString_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_LargeString_t_finalize_w_params(
    Common_LargeString_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_LargeString_t_finalize_optional_members(
    Common_LargeString_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_LargeString_t_copy(
    Common_LargeString_t* dst,
    const Common_LargeString_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   Common_MediumString_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_MediumString_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_MediumString_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MediumString_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MediumString_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_MediumString_tSeq, Common_MediumString_t);

NDDSUSERDllExport
RTIBool Common_MediumString_t_initialize(
    Common_MediumString_t* self);

NDDSUSERDllExport
RTIBool Common_MediumString_t_initialize_ex(
    Common_MediumString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_MediumString_t_initialize_w_params(
    Common_MediumString_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_MediumString_t_finalize_w_return(
    Common_MediumString_t* self);

NDDSUSERDllExport
void Common_MediumString_t_finalize(
    Common_MediumString_t* self);

NDDSUSERDllExport
void Common_MediumString_t_finalize_ex(
    Common_MediumString_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_MediumString_t_finalize_w_params(
    Common_MediumString_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_MediumString_t_finalize_optional_members(
    Common_MediumString_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_MediumString_t_copy(
    Common_MediumString_t* dst,
    const Common_MediumString_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   Common_ShortString_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_ShortString_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_ShortString_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ShortString_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ShortString_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_ShortString_tSeq, Common_ShortString_t);

NDDSUSERDllExport
RTIBool Common_ShortString_t_initialize(
    Common_ShortString_t* self);

NDDSUSERDllExport
RTIBool Common_ShortString_t_initialize_ex(
    Common_ShortString_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_ShortString_t_initialize_w_params(
    Common_ShortString_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_ShortString_t_finalize_w_return(
    Common_ShortString_t* self);

NDDSUSERDllExport
void Common_ShortString_t_finalize(
    Common_ShortString_t* self);

NDDSUSERDllExport
void Common_ShortString_t_finalize_ex(
    Common_ShortString_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_ShortString_t_finalize_w_params(
    Common_ShortString_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_ShortString_t_finalize_optional_members(
    Common_ShortString_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_ShortString_t_copy(
    Common_ShortString_t* dst,
    const Common_ShortString_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   Common_Descriptor_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_Descriptor_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_Descriptor_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_Descriptor_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_Descriptor_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_Descriptor_tSeq, Common_Descriptor_t);

NDDSUSERDllExport
RTIBool Common_Descriptor_t_initialize(
    Common_Descriptor_t* self);

NDDSUSERDllExport
RTIBool Common_Descriptor_t_initialize_ex(
    Common_Descriptor_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_Descriptor_t_initialize_w_params(
    Common_Descriptor_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_Descriptor_t_finalize_w_return(
    Common_Descriptor_t* self);

NDDSUSERDllExport
void Common_Descriptor_t_finalize(
    Common_Descriptor_t* self);

NDDSUSERDllExport
void Common_Descriptor_t_finalize_ex(
    Common_Descriptor_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_Descriptor_t_finalize_w_params(
    Common_Descriptor_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_Descriptor_t_finalize_optional_members(
    Common_Descriptor_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_Descriptor_t_copy(
    Common_Descriptor_t* dst,
    const Common_Descriptor_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Float   Common_Percentage_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_Percentage_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_Percentage_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_Percentage_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_Percentage_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_Percentage_tSeq, Common_Percentage_t);

NDDSUSERDllExport
RTIBool Common_Percentage_t_initialize(
    Common_Percentage_t* self);

NDDSUSERDllExport
RTIBool Common_Percentage_t_initialize_ex(
    Common_Percentage_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_Percentage_t_initialize_w_params(
    Common_Percentage_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_Percentage_t_finalize_w_return(
    Common_Percentage_t* self);

NDDSUSERDllExport
void Common_Percentage_t_finalize(
    Common_Percentage_t* self);

NDDSUSERDllExport
void Common_Percentage_t_finalize_ex(
    Common_Percentage_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_Percentage_t_finalize_w_params(
    Common_Percentage_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_Percentage_t_finalize_optional_members(
    Common_Percentage_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_Percentage_t_copy(
    Common_Percentage_t* dst,
    const Common_Percentage_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Float   Common_PressureInPascal_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_PressureInPascal_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_PressureInPascal_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_PressureInPascal_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_PressureInPascal_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_PressureInPascal_tSeq, Common_PressureInPascal_t);

NDDSUSERDllExport
RTIBool Common_PressureInPascal_t_initialize(
    Common_PressureInPascal_t* self);

NDDSUSERDllExport
RTIBool Common_PressureInPascal_t_initialize_ex(
    Common_PressureInPascal_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_PressureInPascal_t_initialize_w_params(
    Common_PressureInPascal_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_PressureInPascal_t_finalize_w_return(
    Common_PressureInPascal_t* self);

NDDSUSERDllExport
void Common_PressureInPascal_t_finalize(
    Common_PressureInPascal_t* self);

NDDSUSERDllExport
void Common_PressureInPascal_t_finalize_ex(
    Common_PressureInPascal_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_PressureInPascal_t_finalize_w_params(
    Common_PressureInPascal_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_PressureInPascal_t_finalize_optional_members(
    Common_PressureInPascal_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_PressureInPascal_t_copy(
    Common_PressureInPascal_t* dst,
    const Common_PressureInPascal_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Float   Common_TemperatureInDegreesKelvin_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_TemperatureInDegreesKelvin_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_TemperatureInDegreesKelvin_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_TemperatureInDegreesKelvin_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_TemperatureInDegreesKelvin_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_TemperatureInDegreesKelvin_tSeq, Common_TemperatureInDegreesKelvin_t);

NDDSUSERDllExport
RTIBool Common_TemperatureInDegreesKelvin_t_initialize(
    Common_TemperatureInDegreesKelvin_t* self);

NDDSUSERDllExport
RTIBool Common_TemperatureInDegreesKelvin_t_initialize_ex(
    Common_TemperatureInDegreesKelvin_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_TemperatureInDegreesKelvin_t_initialize_w_params(
    Common_TemperatureInDegreesKelvin_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_TemperatureInDegreesKelvin_t_finalize_w_return(
    Common_TemperatureInDegreesKelvin_t* self);

NDDSUSERDllExport
void Common_TemperatureInDegreesKelvin_t_finalize(
    Common_TemperatureInDegreesKelvin_t* self);

NDDSUSERDllExport
void Common_TemperatureInDegreesKelvin_t_finalize_ex(
    Common_TemperatureInDegreesKelvin_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_TemperatureInDegreesKelvin_t_finalize_w_params(
    Common_TemperatureInDegreesKelvin_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_TemperatureInDegreesKelvin_t_finalize_optional_members(
    Common_TemperatureInDegreesKelvin_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_TemperatureInDegreesKelvin_t_copy(
    Common_TemperatureInDegreesKelvin_t* dst,
    const Common_TemperatureInDegreesKelvin_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Float   Common_ConcentrationInMolesPerCubicMetre_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_ConcentrationInMolesPerCubicMetre_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ConcentrationInMolesPerCubicMetre_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ConcentrationInMolesPerCubicMetre_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_ConcentrationInMolesPerCubicMetre_tSeq, Common_ConcentrationInMolesPerCubicMetre_t);

NDDSUSERDllExport
RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize(
    Common_ConcentrationInMolesPerCubicMetre_t* self);

NDDSUSERDllExport
RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize_ex(
    Common_ConcentrationInMolesPerCubicMetre_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
    Common_ConcentrationInMolesPerCubicMetre_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_return(
    Common_ConcentrationInMolesPerCubicMetre_t* self);

NDDSUSERDllExport
void Common_ConcentrationInMolesPerCubicMetre_t_finalize(
    Common_ConcentrationInMolesPerCubicMetre_t* self);

NDDSUSERDllExport
void Common_ConcentrationInMolesPerCubicMetre_t_finalize_ex(
    Common_ConcentrationInMolesPerCubicMetre_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
    Common_ConcentrationInMolesPerCubicMetre_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_ConcentrationInMolesPerCubicMetre_t_finalize_optional_members(
    Common_ConcentrationInMolesPerCubicMetre_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_ConcentrationInMolesPerCubicMetre_t_copy(
    Common_ConcentrationInMolesPerCubicMetre_t* dst,
    const Common_ConcentrationInMolesPerCubicMetre_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
// Identifies a resource 

extern "C" {

    extern const char *Common_IdentifierType_tTYPENAME;

}

struct Common_IdentifierType_tSeq;
class Common_IdentifierType_t 
{
  public:
    typedef struct Common_IdentifierType_tSeq Seq;

    DDS_UnsignedLong   resourceId ;
    DDS_Long   id ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_IdentifierType_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_IdentifierType_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_IdentifierType_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_IdentifierType_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_IdentifierType_tSeq, Common_IdentifierType_t);

NDDSUSERDllExport
RTIBool Common_IdentifierType_t_initialize(
    Common_IdentifierType_t* self);

NDDSUSERDllExport
RTIBool Common_IdentifierType_t_initialize_ex(
    Common_IdentifierType_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_IdentifierType_t_initialize_w_params(
    Common_IdentifierType_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_IdentifierType_t_finalize_w_return(
    Common_IdentifierType_t* self);

NDDSUSERDllExport
void Common_IdentifierType_t_finalize(
    Common_IdentifierType_t* self);

NDDSUSERDllExport
void Common_IdentifierType_t_finalize_ex(
    Common_IdentifierType_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_IdentifierType_t_finalize_w_params(
    Common_IdentifierType_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_IdentifierType_t_finalize_optional_members(
    Common_IdentifierType_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_IdentifierType_t_copy(
    Common_IdentifierType_t* dst,
    const Common_IdentifierType_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef     Common_IdentifierType_tSeq  Common_IdentifierList_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_IdentifierList_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_IdentifierList_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_IdentifierList_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_IdentifierList_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_IdentifierList_tSeq, Common_IdentifierList_t);

NDDSUSERDllExport
RTIBool Common_IdentifierList_t_initialize(
    Common_IdentifierList_t* self);

NDDSUSERDllExport
RTIBool Common_IdentifierList_t_initialize_ex(
    Common_IdentifierList_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_IdentifierList_t_initialize_w_params(
    Common_IdentifierList_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_IdentifierList_t_finalize_w_return(
    Common_IdentifierList_t* self);

NDDSUSERDllExport
void Common_IdentifierList_t_finalize(
    Common_IdentifierList_t* self);

NDDSUSERDllExport
void Common_IdentifierList_t_finalize_ex(
    Common_IdentifierList_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_IdentifierList_t_finalize_w_params(
    Common_IdentifierList_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_IdentifierList_t_finalize_optional_members(
    Common_IdentifierList_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_IdentifierList_t_copy(
    Common_IdentifierList_t* dst,
    const Common_IdentifierList_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum Common_ResponseCode_t
{
    Invalid ,      
    Success ,      
    Pending ,      
    Error      
} Common_ResponseCode_t;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_ResponseCode_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_ResponseCode_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ResponseCode_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_ResponseCode_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_ResponseCode_tSeq, Common_ResponseCode_t);

NDDSUSERDllExport
RTIBool Common_ResponseCode_t_initialize(
    Common_ResponseCode_t* self);

NDDSUSERDllExport
RTIBool Common_ResponseCode_t_initialize_ex(
    Common_ResponseCode_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_ResponseCode_t_initialize_w_params(
    Common_ResponseCode_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_ResponseCode_t_finalize_w_return(
    Common_ResponseCode_t* self);

NDDSUSERDllExport
void Common_ResponseCode_t_finalize(
    Common_ResponseCode_t* self);

NDDSUSERDllExport
void Common_ResponseCode_t_finalize_ex(
    Common_ResponseCode_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_ResponseCode_t_finalize_w_params(
    Common_ResponseCode_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_ResponseCode_t_finalize_optional_members(
    Common_ResponseCode_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_ResponseCode_t_copy(
    Common_ResponseCode_t* dst,
    const Common_ResponseCode_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
// Time 

extern "C" {

    extern const char *Common_DateTime_tTYPENAME;

}

struct Common_DateTime_tSeq;
class Common_DateTime_t 
{
  public:
    typedef struct Common_DateTime_tSeq Seq;

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
NDDSUSERDllExport DDS_TypeCode * Common_DateTime_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_DateTime_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_DateTime_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_DateTime_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_DateTime_tSeq, Common_DateTime_t);

NDDSUSERDllExport
RTIBool Common_DateTime_t_initialize(
    Common_DateTime_t* self);

NDDSUSERDllExport
RTIBool Common_DateTime_t_initialize_ex(
    Common_DateTime_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_DateTime_t_initialize_w_params(
    Common_DateTime_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_DateTime_t_finalize_w_return(
    Common_DateTime_t* self);

NDDSUSERDllExport
void Common_DateTime_t_finalize(
    Common_DateTime_t* self);

NDDSUSERDllExport
void Common_DateTime_t_finalize_ex(
    Common_DateTime_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_DateTime_t_finalize_w_params(
    Common_DateTime_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_DateTime_t_finalize_optional_members(
    Common_DateTime_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_DateTime_t_copy(
    Common_DateTime_t* dst,
    const Common_DateTime_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Common_MetaData_tTYPENAME;

}

struct Common_MetaData_tSeq;
class Common_MetaData_t 
{
  public:
    typedef struct Common_MetaData_tSeq Seq;

    Common_DateTime_t   timeOfGeneration ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_MetaData_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_MetaData_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MetaData_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MetaData_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_MetaData_tSeq, Common_MetaData_t);

NDDSUSERDllExport
RTIBool Common_MetaData_t_initialize(
    Common_MetaData_t* self);

NDDSUSERDllExport
RTIBool Common_MetaData_t_initialize_ex(
    Common_MetaData_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_MetaData_t_initialize_w_params(
    Common_MetaData_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_MetaData_t_finalize_w_return(
    Common_MetaData_t* self);

NDDSUSERDllExport
void Common_MetaData_t_finalize(
    Common_MetaData_t* self);

NDDSUSERDllExport
void Common_MetaData_t_finalize_ex(
    Common_MetaData_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_MetaData_t_finalize_w_params(
    Common_MetaData_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_MetaData_t_finalize_optional_members(
    Common_MetaData_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_MetaData_t_copy(
    Common_MetaData_t* dst,
    const Common_MetaData_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Short   * Common_BinaryData_t [(Common_MAX_LEN)];
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_BinaryData_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_BinaryData_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_BinaryData_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_BinaryData_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE_NO_GET(Common_BinaryData_tSeq, Common_BinaryData_t);

NDDSUSERDllExport
RTIBool Common_BinaryData_t_initialize(
    Common_BinaryData_t* self);

NDDSUSERDllExport
RTIBool Common_BinaryData_t_initialize_ex(
    Common_BinaryData_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_BinaryData_t_initialize_w_params(
    Common_BinaryData_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_BinaryData_t_finalize_w_return(
    Common_BinaryData_t* self);

NDDSUSERDllExport
void Common_BinaryData_t_finalize(
    Common_BinaryData_t* self);

NDDSUSERDllExport
void Common_BinaryData_t_finalize_ex(
    Common_BinaryData_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_BinaryData_t_finalize_w_params(
    Common_BinaryData_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_BinaryData_t_finalize_optional_members(
    Common_BinaryData_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_BinaryData_t_copy(
    Common_BinaryData_t* dst,
    const Common_BinaryData_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum Common_UnitType
{
    Farenheit ,      
    Celcius ,      
    Percent      
} Common_UnitType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_UnitType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_UnitType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_UnitType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_UnitType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_UnitTypeSeq, Common_UnitType);

NDDSUSERDllExport
RTIBool Common_UnitType_initialize(
    Common_UnitType* self);

NDDSUSERDllExport
RTIBool Common_UnitType_initialize_ex(
    Common_UnitType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_UnitType_initialize_w_params(
    Common_UnitType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_UnitType_finalize_w_return(
    Common_UnitType* self);

NDDSUSERDllExport
void Common_UnitType_finalize(
    Common_UnitType* self);

NDDSUSERDllExport
void Common_UnitType_finalize_ex(
    Common_UnitType* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_UnitType_finalize_w_params(
    Common_UnitType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_UnitType_finalize_optional_members(
    Common_UnitType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_UnitType_copy(
    Common_UnitType* dst,
    const Common_UnitType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Common_MeasurementCoordinate_tTYPENAME;

}

struct Common_MeasurementCoordinate_tSeq;
class Common_MeasurementCoordinate_t 
{
  public:
    typedef struct Common_MeasurementCoordinate_tSeq Seq;

    DDS_Double   latitude ;
    DDS_Double   longitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Common_MeasurementCoordinate_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Common_MeasurementCoordinate_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MeasurementCoordinate_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Common_MeasurementCoordinate_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Common_MeasurementCoordinate_tSeq, Common_MeasurementCoordinate_t);

NDDSUSERDllExport
RTIBool Common_MeasurementCoordinate_t_initialize(
    Common_MeasurementCoordinate_t* self);

NDDSUSERDllExport
RTIBool Common_MeasurementCoordinate_t_initialize_ex(
    Common_MeasurementCoordinate_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Common_MeasurementCoordinate_t_initialize_w_params(
    Common_MeasurementCoordinate_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Common_MeasurementCoordinate_t_finalize_w_return(
    Common_MeasurementCoordinate_t* self);

NDDSUSERDllExport
void Common_MeasurementCoordinate_t_finalize(
    Common_MeasurementCoordinate_t* self);

NDDSUSERDllExport
void Common_MeasurementCoordinate_t_finalize_ex(
    Common_MeasurementCoordinate_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void Common_MeasurementCoordinate_t_finalize_w_params(
    Common_MeasurementCoordinate_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Common_MeasurementCoordinate_t_finalize_optional_members(
    Common_MeasurementCoordinate_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Common_MeasurementCoordinate_t_copy(
    Common_MeasurementCoordinate_t* dst,
    const Common_MeasurementCoordinate_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum Alarms_Severities
{
    Critical ,      
    Major ,      
    Minor ,      
    Informational      
} Alarms_Severities;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_Severities_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_Severities_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_Severities_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_Severities_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_SeveritiesSeq, Alarms_Severities);

NDDSUSERDllExport
RTIBool Alarms_Severities_initialize(
    Alarms_Severities* self);

NDDSUSERDllExport
RTIBool Alarms_Severities_initialize_ex(
    Alarms_Severities* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_Severities_initialize_w_params(
    Alarms_Severities* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_Severities_finalize_w_return(
    Alarms_Severities* self);

NDDSUSERDllExport
void Alarms_Severities_finalize(
    Alarms_Severities* self);

NDDSUSERDllExport
void Alarms_Severities_finalize_ex(
    Alarms_Severities* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_Severities_finalize_w_params(
    Alarms_Severities* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_Severities_finalize_optional_members(
    Alarms_Severities* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_Severities_copy(
    Alarms_Severities* dst,
    const Alarms_Severities* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum Alarms_State
{
    Open ,      
    Closed      
} Alarms_State;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_State_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_State_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_State_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_State_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_StateSeq, Alarms_State);

NDDSUSERDllExport
RTIBool Alarms_State_initialize(
    Alarms_State* self);

NDDSUSERDllExport
RTIBool Alarms_State_initialize_ex(
    Alarms_State* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_State_initialize_w_params(
    Alarms_State* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_State_finalize_w_return(
    Alarms_State* self);

NDDSUSERDllExport
void Alarms_State_finalize(
    Alarms_State* self);

NDDSUSERDllExport
void Alarms_State_finalize_ex(
    Alarms_State* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_State_finalize_w_params(
    Alarms_State* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_State_finalize_optional_members(
    Alarms_State* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_State_copy(
    Alarms_State* dst,
    const Alarms_State* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_ValueDefinitionTYPENAME;

}

struct Alarms_ValueDefinitionSeq;
class Alarms_ValueDefinition 
{
  public:
    typedef struct Alarms_ValueDefinitionSeq Seq;

    DDS_Float   number ;
    Common_UnitType   Units ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_ValueDefinition_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_ValueDefinition_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_ValueDefinition_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_ValueDefinition_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_ValueDefinitionSeq, Alarms_ValueDefinition);

NDDSUSERDllExport
RTIBool Alarms_ValueDefinition_initialize(
    Alarms_ValueDefinition* self);

NDDSUSERDllExport
RTIBool Alarms_ValueDefinition_initialize_ex(
    Alarms_ValueDefinition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_ValueDefinition_initialize_w_params(
    Alarms_ValueDefinition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_ValueDefinition_finalize_w_return(
    Alarms_ValueDefinition* self);

NDDSUSERDllExport
void Alarms_ValueDefinition_finalize(
    Alarms_ValueDefinition* self);

NDDSUSERDllExport
void Alarms_ValueDefinition_finalize_ex(
    Alarms_ValueDefinition* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_ValueDefinition_finalize_w_params(
    Alarms_ValueDefinition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_ValueDefinition_finalize_optional_members(
    Alarms_ValueDefinition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_ValueDefinition_copy(
    Alarms_ValueDefinition* dst,
    const Alarms_ValueDefinition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_AlarmTYPENAME;

}

struct Alarms_AlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class Alarms_AlarmTypeSupport;
class Alarms_AlarmDataWriter;
class Alarms_AlarmDataReader;
#endif
class Alarms_Alarm 
{
  public:
    typedef struct Alarms_AlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef Alarms_AlarmTypeSupport TypeSupport;
    typedef Alarms_AlarmDataWriter DataWriter;
    typedef Alarms_AlarmDataReader DataReader;
    #endif

    Common_IdentifierType_t   sourceId ;
    DDS_Char *   alarmTypeName ;
    Alarms_Severities   severity ;
    Alarms_State   null ;
    Alarms_ValueDefinition   numericValue ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_Alarm_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_Alarm_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_Alarm_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_Alarm_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_AlarmSeq, Alarms_Alarm);

NDDSUSERDllExport
RTIBool Alarms_Alarm_initialize(
    Alarms_Alarm* self);

NDDSUSERDllExport
RTIBool Alarms_Alarm_initialize_ex(
    Alarms_Alarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_Alarm_initialize_w_params(
    Alarms_Alarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_Alarm_finalize_w_return(
    Alarms_Alarm* self);

NDDSUSERDllExport
void Alarms_Alarm_finalize(
    Alarms_Alarm* self);

NDDSUSERDllExport
void Alarms_Alarm_finalize_ex(
    Alarms_Alarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_Alarm_finalize_w_params(
    Alarms_Alarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_Alarm_finalize_optional_members(
    Alarms_Alarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_Alarm_copy(
    Alarms_Alarm* dst,
    const Alarms_Alarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_HumidityAlarmTYPENAME;

}

struct Alarms_HumidityAlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class Alarms_HumidityAlarmTypeSupport;
class Alarms_HumidityAlarmDataWriter;
class Alarms_HumidityAlarmDataReader;
#endif
class Alarms_HumidityAlarm 
: public Alarms_Alarm{
  public:
    typedef struct Alarms_HumidityAlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef Alarms_HumidityAlarmTypeSupport TypeSupport;
    typedef Alarms_HumidityAlarmDataWriter DataWriter;
    typedef Alarms_HumidityAlarmDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * Alarms_HumidityAlarm_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_HumidityAlarm_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_HumidityAlarm_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_HumidityAlarm_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_HumidityAlarmSeq, Alarms_HumidityAlarm);

NDDSUSERDllExport
RTIBool Alarms_HumidityAlarm_initialize(
    Alarms_HumidityAlarm* self);

NDDSUSERDllExport
RTIBool Alarms_HumidityAlarm_initialize_ex(
    Alarms_HumidityAlarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_HumidityAlarm_initialize_w_params(
    Alarms_HumidityAlarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_HumidityAlarm_finalize_w_return(
    Alarms_HumidityAlarm* self);

NDDSUSERDllExport
void Alarms_HumidityAlarm_finalize(
    Alarms_HumidityAlarm* self);

NDDSUSERDllExport
void Alarms_HumidityAlarm_finalize_ex(
    Alarms_HumidityAlarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_HumidityAlarm_finalize_w_params(
    Alarms_HumidityAlarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_HumidityAlarm_finalize_optional_members(
    Alarms_HumidityAlarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_HumidityAlarm_copy(
    Alarms_HumidityAlarm* dst,
    const Alarms_HumidityAlarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_MotionAlarmTYPENAME;

}

struct Alarms_MotionAlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class Alarms_MotionAlarmTypeSupport;
class Alarms_MotionAlarmDataWriter;
class Alarms_MotionAlarmDataReader;
#endif
class Alarms_MotionAlarm 
: public Alarms_Alarm{
  public:
    typedef struct Alarms_MotionAlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef Alarms_MotionAlarmTypeSupport TypeSupport;
    typedef Alarms_MotionAlarmDataWriter DataWriter;
    typedef Alarms_MotionAlarmDataReader DataReader;
    #endif

    Common_MeasurementCoordinate_t   coordinate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_MotionAlarm_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_MotionAlarm_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_MotionAlarm_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_MotionAlarm_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_MotionAlarmSeq, Alarms_MotionAlarm);

NDDSUSERDllExport
RTIBool Alarms_MotionAlarm_initialize(
    Alarms_MotionAlarm* self);

NDDSUSERDllExport
RTIBool Alarms_MotionAlarm_initialize_ex(
    Alarms_MotionAlarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_MotionAlarm_initialize_w_params(
    Alarms_MotionAlarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_MotionAlarm_finalize_w_return(
    Alarms_MotionAlarm* self);

NDDSUSERDllExport
void Alarms_MotionAlarm_finalize(
    Alarms_MotionAlarm* self);

NDDSUSERDllExport
void Alarms_MotionAlarm_finalize_ex(
    Alarms_MotionAlarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_MotionAlarm_finalize_w_params(
    Alarms_MotionAlarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_MotionAlarm_finalize_optional_members(
    Alarms_MotionAlarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_MotionAlarm_copy(
    Alarms_MotionAlarm* dst,
    const Alarms_MotionAlarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_FireAlarmTYPENAME;

}

struct Alarms_FireAlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class Alarms_FireAlarmTypeSupport;
class Alarms_FireAlarmDataWriter;
class Alarms_FireAlarmDataReader;
#endif
class Alarms_FireAlarm 
: public Alarms_Alarm{
  public:
    typedef struct Alarms_FireAlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef Alarms_FireAlarmTypeSupport TypeSupport;
    typedef Alarms_FireAlarmDataWriter DataWriter;
    typedef Alarms_FireAlarmDataReader DataReader;
    #endif

    DDS_Float   temperature ;
    Common_UnitType   units ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_FireAlarm_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_FireAlarm_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_FireAlarm_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_FireAlarm_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_FireAlarmSeq, Alarms_FireAlarm);

NDDSUSERDllExport
RTIBool Alarms_FireAlarm_initialize(
    Alarms_FireAlarm* self);

NDDSUSERDllExport
RTIBool Alarms_FireAlarm_initialize_ex(
    Alarms_FireAlarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_FireAlarm_initialize_w_params(
    Alarms_FireAlarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_FireAlarm_finalize_w_return(
    Alarms_FireAlarm* self);

NDDSUSERDllExport
void Alarms_FireAlarm_finalize(
    Alarms_FireAlarm* self);

NDDSUSERDllExport
void Alarms_FireAlarm_finalize_ex(
    Alarms_FireAlarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_FireAlarm_finalize_w_params(
    Alarms_FireAlarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_FireAlarm_finalize_optional_members(
    Alarms_FireAlarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_FireAlarm_copy(
    Alarms_FireAlarm* dst,
    const Alarms_FireAlarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *Alarms_IntrusionAlarmTYPENAME;

}

struct Alarms_IntrusionAlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class Alarms_IntrusionAlarmTypeSupport;
class Alarms_IntrusionAlarmDataWriter;
class Alarms_IntrusionAlarmDataReader;
#endif
class Alarms_IntrusionAlarm 
: public Alarms_Alarm{
  public:
    typedef struct Alarms_IntrusionAlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef Alarms_IntrusionAlarmTypeSupport TypeSupport;
    typedef Alarms_IntrusionAlarmDataWriter DataWriter;
    typedef Alarms_IntrusionAlarmDataReader DataReader;
    #endif

    Common_MeasurementCoordinate_t   coordinate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * Alarms_IntrusionAlarm_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Alarms_IntrusionAlarm_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_IntrusionAlarm_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Alarms_IntrusionAlarm_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(Alarms_IntrusionAlarmSeq, Alarms_IntrusionAlarm);

NDDSUSERDllExport
RTIBool Alarms_IntrusionAlarm_initialize(
    Alarms_IntrusionAlarm* self);

NDDSUSERDllExport
RTIBool Alarms_IntrusionAlarm_initialize_ex(
    Alarms_IntrusionAlarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Alarms_IntrusionAlarm_initialize_w_params(
    Alarms_IntrusionAlarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Alarms_IntrusionAlarm_finalize_w_return(
    Alarms_IntrusionAlarm* self);

NDDSUSERDllExport
void Alarms_IntrusionAlarm_finalize(
    Alarms_IntrusionAlarm* self);

NDDSUSERDllExport
void Alarms_IntrusionAlarm_finalize_ex(
    Alarms_IntrusionAlarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void Alarms_IntrusionAlarm_finalize_w_params(
    Alarms_IntrusionAlarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Alarms_IntrusionAlarm_finalize_optional_members(
    Alarms_IntrusionAlarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Alarms_IntrusionAlarm_copy(
    Alarms_IntrusionAlarm* dst,
    const Alarms_IntrusionAlarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<Common_IdentifierType_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Common_DateTime_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Common_MetaData_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Common_MeasurementCoordinate_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_ValueDefinition> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_Alarm> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_HumidityAlarm> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_MotionAlarm> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_FireAlarm> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Alarms_IntrusionAlarm> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Alarms */

