

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl 
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Alarms.h"

#ifndef NDDS_STANDALONE_TYPE
#include "AlarmsPlugin.h"
#endif

#include <new>

// Common Data Types

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_LargeString_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_LargeString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common_MAX_LEN)));

    static DDS_TypeCode Common_LargeString_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::LargeString_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_LargeString_t */

    if (is_initialized) {
        return &Common_LargeString_t_g_tc;
    }

    Common_LargeString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_LargeString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&Common_LargeString_t_g_tc_string;

    /* Initialize the values for member annotations. */
    Common_LargeString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Common_LargeString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Common_LargeString_t_g_tc._data._sampleAccessInfo =
    Common_LargeString_t_get_sample_access_info();
    Common_LargeString_t_g_tc._data._typePlugin =
    Common_LargeString_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_LargeString_t_g_tc;
}

#define TSeq Common_LargeString_tSeq
#define T Common_LargeString_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_LargeString_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_LargeString_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_LargeString_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_LargeString_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_LargeString_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_LargeString_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_LargeString_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_LargeString_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_LargeString_t_g_sampleAccessInfo;
    }

    Common_LargeString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_LargeString_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_LargeString_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_LargeString_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_LargeString_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_LargeString_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_LargeString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_LargeString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_LargeString_t_get_member_value_pointer;

    Common_LargeString_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_LargeString_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_LargeString_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_LargeString_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_LargeString_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_LargeString_t_finalize_w_return,
        NULL
    };

    return &Common_LargeString_t_g_typePlugin;
}
#endif

RTIBool Common_LargeString_t_initialize(
    Common_LargeString_t* sample) {
    return Common_LargeString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_LargeString_t_initialize_ex(
    Common_LargeString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_LargeString_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_LargeString_t_initialize_w_params(
    Common_LargeString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc(((Common_MAX_LEN)));
        RTICdrType_copyStringEx(
            &(*sample),
            "",
            ((Common_MAX_LEN)),
            RTI_FALSE);
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common_MAX_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool Common_LargeString_t_finalize_w_return(
    Common_LargeString_t* sample)
{
    Common_LargeString_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_LargeString_t_finalize(
    Common_LargeString_t* sample)
{

    Common_LargeString_t_finalize_ex(sample,RTI_TRUE);
}

void Common_LargeString_t_finalize_ex(
    Common_LargeString_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_LargeString_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_LargeString_t_finalize_w_params(
    Common_LargeString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void Common_LargeString_t_finalize_optional_members(
    Common_LargeString_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_LargeString_t_copy(
    Common_LargeString_t* dst,
    const Common_LargeString_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &(*dst), (*src), 
            ((Common_MAX_LEN)) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_LargeString_t' sequence class.
*/
#define T Common_LargeString_t
#define TSeq Common_LargeString_tSeq

#define T_initialize_w_params Common_LargeString_t_initialize_w_params

#define T_finalize_w_params   Common_LargeString_t_finalize_w_params
#define T_copy       Common_LargeString_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_MediumString_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_MediumString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common_MED_LEN)));

    static DDS_TypeCode Common_MediumString_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::MediumString_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_MediumString_t */

    if (is_initialized) {
        return &Common_MediumString_t_g_tc;
    }

    Common_MediumString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_MediumString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&Common_MediumString_t_g_tc_string;

    /* Initialize the values for member annotations. */
    Common_MediumString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Common_MediumString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Common_MediumString_t_g_tc._data._sampleAccessInfo =
    Common_MediumString_t_get_sample_access_info();
    Common_MediumString_t_g_tc._data._typePlugin =
    Common_MediumString_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_MediumString_t_g_tc;
}

#define TSeq Common_MediumString_tSeq
#define T Common_MediumString_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_MediumString_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_MediumString_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_MediumString_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_MediumString_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_MediumString_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_MediumString_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_MediumString_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_MediumString_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_MediumString_t_g_sampleAccessInfo;
    }

    Common_MediumString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_MediumString_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_MediumString_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_MediumString_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_MediumString_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_MediumString_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_MediumString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_MediumString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_MediumString_t_get_member_value_pointer;

    Common_MediumString_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_MediumString_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_MediumString_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_MediumString_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_MediumString_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_MediumString_t_finalize_w_return,
        NULL
    };

    return &Common_MediumString_t_g_typePlugin;
}
#endif

RTIBool Common_MediumString_t_initialize(
    Common_MediumString_t* sample) {
    return Common_MediumString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_MediumString_t_initialize_ex(
    Common_MediumString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_MediumString_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_MediumString_t_initialize_w_params(
    Common_MediumString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc(((Common_MED_LEN)));
        RTICdrType_copyStringEx(
            &(*sample),
            "",
            ((Common_MED_LEN)),
            RTI_FALSE);
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common_MED_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool Common_MediumString_t_finalize_w_return(
    Common_MediumString_t* sample)
{
    Common_MediumString_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_MediumString_t_finalize(
    Common_MediumString_t* sample)
{

    Common_MediumString_t_finalize_ex(sample,RTI_TRUE);
}

void Common_MediumString_t_finalize_ex(
    Common_MediumString_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_MediumString_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_MediumString_t_finalize_w_params(
    Common_MediumString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void Common_MediumString_t_finalize_optional_members(
    Common_MediumString_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_MediumString_t_copy(
    Common_MediumString_t* dst,
    const Common_MediumString_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &(*dst), (*src), 
            ((Common_MED_LEN)) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_MediumString_t' sequence class.
*/
#define T Common_MediumString_t
#define TSeq Common_MediumString_tSeq

#define T_initialize_w_params Common_MediumString_t_initialize_w_params

#define T_finalize_w_params   Common_MediumString_t_finalize_w_params
#define T_copy       Common_MediumString_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_ShortString_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_ShortString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common_MIN_LEN)));

    static DDS_TypeCode Common_ShortString_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::ShortString_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_ShortString_t */

    if (is_initialized) {
        return &Common_ShortString_t_g_tc;
    }

    Common_ShortString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_ShortString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&Common_ShortString_t_g_tc_string;

    /* Initialize the values for member annotations. */
    Common_ShortString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Common_ShortString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Common_ShortString_t_g_tc._data._sampleAccessInfo =
    Common_ShortString_t_get_sample_access_info();
    Common_ShortString_t_g_tc._data._typePlugin =
    Common_ShortString_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_ShortString_t_g_tc;
}

#define TSeq Common_ShortString_tSeq
#define T Common_ShortString_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_ShortString_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_ShortString_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_ShortString_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_ShortString_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_ShortString_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_ShortString_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_ShortString_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_ShortString_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_ShortString_t_g_sampleAccessInfo;
    }

    Common_ShortString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_ShortString_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_ShortString_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_ShortString_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_ShortString_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_ShortString_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_ShortString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_ShortString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_ShortString_t_get_member_value_pointer;

    Common_ShortString_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_ShortString_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_ShortString_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_ShortString_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_ShortString_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_ShortString_t_finalize_w_return,
        NULL
    };

    return &Common_ShortString_t_g_typePlugin;
}
#endif

RTIBool Common_ShortString_t_initialize(
    Common_ShortString_t* sample) {
    return Common_ShortString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_ShortString_t_initialize_ex(
    Common_ShortString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_ShortString_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_ShortString_t_initialize_w_params(
    Common_ShortString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc(((Common_MIN_LEN)));
        RTICdrType_copyStringEx(
            &(*sample),
            "",
            ((Common_MIN_LEN)),
            RTI_FALSE);
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common_MIN_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool Common_ShortString_t_finalize_w_return(
    Common_ShortString_t* sample)
{
    Common_ShortString_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_ShortString_t_finalize(
    Common_ShortString_t* sample)
{

    Common_ShortString_t_finalize_ex(sample,RTI_TRUE);
}

void Common_ShortString_t_finalize_ex(
    Common_ShortString_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_ShortString_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_ShortString_t_finalize_w_params(
    Common_ShortString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void Common_ShortString_t_finalize_optional_members(
    Common_ShortString_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_ShortString_t_copy(
    Common_ShortString_t* dst,
    const Common_ShortString_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &(*dst), (*src), 
            ((Common_MIN_LEN)) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_ShortString_t' sequence class.
*/
#define T Common_ShortString_t
#define TSeq Common_ShortString_tSeq

#define T_initialize_w_params Common_ShortString_t_initialize_w_params

#define T_finalize_w_params   Common_ShortString_t_finalize_w_params
#define T_copy       Common_ShortString_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_Descriptor_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_Descriptor_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::Descriptor_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_Descriptor_t */

    if (is_initialized) {
        return &Common_Descriptor_t_g_tc;
    }

    Common_Descriptor_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_Descriptor_t_g_tc._data._typeCode =  (RTICdrTypeCode *)Common_ShortString_t_get_typecode();

    /* Initialize the values for member annotations. */
    Common_Descriptor_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Common_Descriptor_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Common_Descriptor_t_g_tc._data._sampleAccessInfo =
    Common_Descriptor_t_get_sample_access_info();
    Common_Descriptor_t_g_tc._data._typePlugin =
    Common_Descriptor_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_Descriptor_t_g_tc;
}

#define TSeq Common_Descriptor_tSeq
#define T Common_Descriptor_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_Descriptor_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_Descriptor_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_Descriptor_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_Descriptor_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_Descriptor_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_Descriptor_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_Descriptor_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_Descriptor_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_Descriptor_t_g_sampleAccessInfo;
    }

    Common_Descriptor_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_Descriptor_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_Descriptor_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_Descriptor_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_Descriptor_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_Descriptor_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_Descriptor_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_Descriptor_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_Descriptor_t_get_member_value_pointer;

    Common_Descriptor_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_Descriptor_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_Descriptor_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_Descriptor_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_Descriptor_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_Descriptor_t_finalize_w_return,
        NULL
    };

    return &Common_Descriptor_t_g_typePlugin;
}
#endif

RTIBool Common_Descriptor_t_initialize(
    Common_Descriptor_t* sample) {
    return Common_Descriptor_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_Descriptor_t_initialize_ex(
    Common_Descriptor_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_Descriptor_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_Descriptor_t_initialize_w_params(
    Common_Descriptor_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc(((Common_MIN_LEN)));
        RTICdrType_copyStringEx(
            &(*sample),
            "",
            ((Common_MIN_LEN)),
            RTI_FALSE);
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common_MIN_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool Common_Descriptor_t_finalize_w_return(
    Common_Descriptor_t* sample)
{
    Common_Descriptor_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_Descriptor_t_finalize(
    Common_Descriptor_t* sample)
{

    Common_Descriptor_t_finalize_ex(sample,RTI_TRUE);
}

void Common_Descriptor_t_finalize_ex(
    Common_Descriptor_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_Descriptor_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_Descriptor_t_finalize_w_params(
    Common_Descriptor_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void Common_Descriptor_t_finalize_optional_members(
    Common_Descriptor_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_Descriptor_t_copy(
    Common_Descriptor_t* dst,
    const Common_Descriptor_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &(*dst), (*src), 
            ((Common_MIN_LEN)) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_Descriptor_t' sequence class.
*/
#define T Common_Descriptor_t
#define TSeq Common_Descriptor_tSeq

#define T_initialize_w_params Common_Descriptor_t_initialize_w_params

#define T_finalize_w_params   Common_Descriptor_t_finalize_w_params
#define T_copy       Common_Descriptor_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_Percentage_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_Percentage_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::Percentage_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_Percentage_t */

    if (is_initialized) {
        return &Common_Percentage_t_g_tc;
    }

    Common_Percentage_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_Percentage_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    Common_Percentage_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Common_Percentage_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    Common_Percentage_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Common_Percentage_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Common_Percentage_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Common_Percentage_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Common_Percentage_t_g_tc._data._sampleAccessInfo =
    Common_Percentage_t_get_sample_access_info();
    Common_Percentage_t_g_tc._data._typePlugin =
    Common_Percentage_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_Percentage_t_g_tc;
}

#define TSeq Common_Percentage_tSeq
#define T Common_Percentage_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_Percentage_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_Percentage_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_Percentage_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_Percentage_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_Percentage_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_Percentage_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_Percentage_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_Percentage_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_Percentage_t_g_sampleAccessInfo;
    }

    Common_Percentage_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_Percentage_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_Percentage_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_Percentage_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_Percentage_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_Percentage_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_Percentage_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_Percentage_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_Percentage_t_get_member_value_pointer;

    Common_Percentage_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_Percentage_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_Percentage_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_Percentage_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_Percentage_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_Percentage_t_finalize_w_return,
        NULL
    };

    return &Common_Percentage_t_g_typePlugin;
}
#endif

RTIBool Common_Percentage_t_initialize(
    Common_Percentage_t* sample) {
    return Common_Percentage_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_Percentage_t_initialize_ex(
    Common_Percentage_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_Percentage_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_Percentage_t_initialize_w_params(
    Common_Percentage_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool Common_Percentage_t_finalize_w_return(
    Common_Percentage_t* sample)
{
    Common_Percentage_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_Percentage_t_finalize(
    Common_Percentage_t* sample)
{

    Common_Percentage_t_finalize_ex(sample,RTI_TRUE);
}

void Common_Percentage_t_finalize_ex(
    Common_Percentage_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_Percentage_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_Percentage_t_finalize_w_params(
    Common_Percentage_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_Percentage_t_finalize_optional_members(
    Common_Percentage_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_Percentage_t_copy(
    Common_Percentage_t* dst,
    const Common_Percentage_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_Percentage_t' sequence class.
*/
#define T Common_Percentage_t
#define TSeq Common_Percentage_tSeq

#define T_initialize_w_params Common_Percentage_t_initialize_w_params

#define T_finalize_w_params   Common_Percentage_t_finalize_w_params
#define T_copy       Common_Percentage_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_PressureInPascal_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_PressureInPascal_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::PressureInPascal_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_PressureInPascal_t */

    if (is_initialized) {
        return &Common_PressureInPascal_t_g_tc;
    }

    Common_PressureInPascal_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_PressureInPascal_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    Common_PressureInPascal_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Common_PressureInPascal_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    Common_PressureInPascal_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Common_PressureInPascal_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Common_PressureInPascal_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Common_PressureInPascal_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Common_PressureInPascal_t_g_tc._data._sampleAccessInfo =
    Common_PressureInPascal_t_get_sample_access_info();
    Common_PressureInPascal_t_g_tc._data._typePlugin =
    Common_PressureInPascal_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_PressureInPascal_t_g_tc;
}

#define TSeq Common_PressureInPascal_tSeq
#define T Common_PressureInPascal_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_PressureInPascal_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_PressureInPascal_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_PressureInPascal_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_PressureInPascal_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_PressureInPascal_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_PressureInPascal_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_PressureInPascal_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_PressureInPascal_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_PressureInPascal_t_g_sampleAccessInfo;
    }

    Common_PressureInPascal_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_PressureInPascal_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_PressureInPascal_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_PressureInPascal_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_PressureInPascal_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_PressureInPascal_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_PressureInPascal_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_PressureInPascal_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_PressureInPascal_t_get_member_value_pointer;

    Common_PressureInPascal_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_PressureInPascal_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_PressureInPascal_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_PressureInPascal_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_PressureInPascal_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_PressureInPascal_t_finalize_w_return,
        NULL
    };

    return &Common_PressureInPascal_t_g_typePlugin;
}
#endif

RTIBool Common_PressureInPascal_t_initialize(
    Common_PressureInPascal_t* sample) {
    return Common_PressureInPascal_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_PressureInPascal_t_initialize_ex(
    Common_PressureInPascal_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_PressureInPascal_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_PressureInPascal_t_initialize_w_params(
    Common_PressureInPascal_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool Common_PressureInPascal_t_finalize_w_return(
    Common_PressureInPascal_t* sample)
{
    Common_PressureInPascal_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_PressureInPascal_t_finalize(
    Common_PressureInPascal_t* sample)
{

    Common_PressureInPascal_t_finalize_ex(sample,RTI_TRUE);
}

void Common_PressureInPascal_t_finalize_ex(
    Common_PressureInPascal_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_PressureInPascal_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_PressureInPascal_t_finalize_w_params(
    Common_PressureInPascal_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_PressureInPascal_t_finalize_optional_members(
    Common_PressureInPascal_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_PressureInPascal_t_copy(
    Common_PressureInPascal_t* dst,
    const Common_PressureInPascal_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_PressureInPascal_t' sequence class.
*/
#define T Common_PressureInPascal_t
#define TSeq Common_PressureInPascal_tSeq

#define T_initialize_w_params Common_PressureInPascal_t_initialize_w_params

#define T_finalize_w_params   Common_PressureInPascal_t_finalize_w_params
#define T_copy       Common_PressureInPascal_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_TemperatureInDegreesKelvin_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_TemperatureInDegreesKelvin_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::TemperatureInDegreesKelvin_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_TemperatureInDegreesKelvin_t */

    if (is_initialized) {
        return &Common_TemperatureInDegreesKelvin_t_g_tc;
    }

    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_TemperatureInDegreesKelvin_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Common_TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Common_TemperatureInDegreesKelvin_t_g_tc._data._sampleAccessInfo =
    Common_TemperatureInDegreesKelvin_t_get_sample_access_info();
    Common_TemperatureInDegreesKelvin_t_g_tc._data._typePlugin =
    Common_TemperatureInDegreesKelvin_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_TemperatureInDegreesKelvin_t_g_tc;
}

#define TSeq Common_TemperatureInDegreesKelvin_tSeq
#define T Common_TemperatureInDegreesKelvin_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_TemperatureInDegreesKelvin_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_TemperatureInDegreesKelvin_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_TemperatureInDegreesKelvin_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_TemperatureInDegreesKelvin_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_TemperatureInDegreesKelvin_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_TemperatureInDegreesKelvin_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_TemperatureInDegreesKelvin_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo;
    }

    Common_TemperatureInDegreesKelvin_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_TemperatureInDegreesKelvin_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_TemperatureInDegreesKelvin_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_TemperatureInDegreesKelvin_t_get_member_value_pointer;

    Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_TemperatureInDegreesKelvin_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_TemperatureInDegreesKelvin_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_TemperatureInDegreesKelvin_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_TemperatureInDegreesKelvin_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_TemperatureInDegreesKelvin_t_finalize_w_return,
        NULL
    };

    return &Common_TemperatureInDegreesKelvin_t_g_typePlugin;
}
#endif

RTIBool Common_TemperatureInDegreesKelvin_t_initialize(
    Common_TemperatureInDegreesKelvin_t* sample) {
    return Common_TemperatureInDegreesKelvin_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_TemperatureInDegreesKelvin_t_initialize_ex(
    Common_TemperatureInDegreesKelvin_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_TemperatureInDegreesKelvin_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_TemperatureInDegreesKelvin_t_initialize_w_params(
    Common_TemperatureInDegreesKelvin_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool Common_TemperatureInDegreesKelvin_t_finalize_w_return(
    Common_TemperatureInDegreesKelvin_t* sample)
{
    Common_TemperatureInDegreesKelvin_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_TemperatureInDegreesKelvin_t_finalize(
    Common_TemperatureInDegreesKelvin_t* sample)
{

    Common_TemperatureInDegreesKelvin_t_finalize_ex(sample,RTI_TRUE);
}

void Common_TemperatureInDegreesKelvin_t_finalize_ex(
    Common_TemperatureInDegreesKelvin_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_TemperatureInDegreesKelvin_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_TemperatureInDegreesKelvin_t_finalize_w_params(
    Common_TemperatureInDegreesKelvin_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_TemperatureInDegreesKelvin_t_finalize_optional_members(
    Common_TemperatureInDegreesKelvin_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_TemperatureInDegreesKelvin_t_copy(
    Common_TemperatureInDegreesKelvin_t* dst,
    const Common_TemperatureInDegreesKelvin_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_TemperatureInDegreesKelvin_t' sequence class.
*/
#define T Common_TemperatureInDegreesKelvin_t
#define TSeq Common_TemperatureInDegreesKelvin_tSeq

#define T_initialize_w_params Common_TemperatureInDegreesKelvin_t_initialize_w_params

#define T_finalize_w_params   Common_TemperatureInDegreesKelvin_t_finalize_w_params
#define T_copy       Common_TemperatureInDegreesKelvin_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_ConcentrationInMolesPerCubicMetre_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_ConcentrationInMolesPerCubicMetre_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::ConcentrationInMolesPerCubicMetre_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_ConcentrationInMolesPerCubicMetre_t */

    if (is_initialized) {
        return &Common_ConcentrationInMolesPerCubicMetre_t_g_tc;
    }

    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._u.float_value = 0.0f;
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._sampleAccessInfo =
    Common_ConcentrationInMolesPerCubicMetre_t_get_sample_access_info();
    Common_ConcentrationInMolesPerCubicMetre_t_g_tc._data._typePlugin =
    Common_ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_ConcentrationInMolesPerCubicMetre_t_g_tc;
}

#define TSeq Common_ConcentrationInMolesPerCubicMetre_tSeq
#define T Common_ConcentrationInMolesPerCubicMetre_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_ConcentrationInMolesPerCubicMetre_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_ConcentrationInMolesPerCubicMetre_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_ConcentrationInMolesPerCubicMetre_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_ConcentrationInMolesPerCubicMetre_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_ConcentrationInMolesPerCubicMetre_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_ConcentrationInMolesPerCubicMetre_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo;
    }

    Common_ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_ConcentrationInMolesPerCubicMetre_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_ConcentrationInMolesPerCubicMetre_t_get_member_value_pointer;

    Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_ConcentrationInMolesPerCubicMetre_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_ConcentrationInMolesPerCubicMetre_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_return,
        NULL
    };

    return &Common_ConcentrationInMolesPerCubicMetre_t_g_typePlugin;
}
#endif

RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize(
    Common_ConcentrationInMolesPerCubicMetre_t* sample) {
    return Common_ConcentrationInMolesPerCubicMetre_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize_ex(
    Common_ConcentrationInMolesPerCubicMetre_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
    Common_ConcentrationInMolesPerCubicMetre_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_return(
    Common_ConcentrationInMolesPerCubicMetre_t* sample)
{
    Common_ConcentrationInMolesPerCubicMetre_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_ConcentrationInMolesPerCubicMetre_t_finalize(
    Common_ConcentrationInMolesPerCubicMetre_t* sample)
{

    Common_ConcentrationInMolesPerCubicMetre_t_finalize_ex(sample,RTI_TRUE);
}

void Common_ConcentrationInMolesPerCubicMetre_t_finalize_ex(
    Common_ConcentrationInMolesPerCubicMetre_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
    Common_ConcentrationInMolesPerCubicMetre_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_ConcentrationInMolesPerCubicMetre_t_finalize_optional_members(
    Common_ConcentrationInMolesPerCubicMetre_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_ConcentrationInMolesPerCubicMetre_t_copy(
    Common_ConcentrationInMolesPerCubicMetre_t* dst,
    const Common_ConcentrationInMolesPerCubicMetre_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_ConcentrationInMolesPerCubicMetre_t' sequence class.
*/
#define T Common_ConcentrationInMolesPerCubicMetre_t
#define TSeq Common_ConcentrationInMolesPerCubicMetre_tSeq

#define T_initialize_w_params Common_ConcentrationInMolesPerCubicMetre_t_initialize_w_params

#define T_finalize_w_params   Common_ConcentrationInMolesPerCubicMetre_t_finalize_w_params
#define T_copy       Common_ConcentrationInMolesPerCubicMetre_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

// Identifies a resource

/* ========================================================================= */
const char *Common_IdentifierType_tTYPENAME = "Common::IdentifierType_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_IdentifierType_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_IdentifierType_t_g_tc_members[2]=
    {

        {
            (char *)"resourceId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"id",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_IdentifierType_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::IdentifierType_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Common_IdentifierType_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_IdentifierType_t*/

    if (is_initialized) {
        return &Common_IdentifierType_t_g_tc;
    }

    Common_IdentifierType_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_IdentifierType_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    Common_IdentifierType_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    Common_IdentifierType_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    Common_IdentifierType_t_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
    Common_IdentifierType_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    Common_IdentifierType_t_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    Common_IdentifierType_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    Common_IdentifierType_t_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    Common_IdentifierType_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    Common_IdentifierType_t_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    Common_IdentifierType_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    Common_IdentifierType_t_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    Common_IdentifierType_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    Common_IdentifierType_t_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    Common_IdentifierType_t_g_tc._data._sampleAccessInfo =
    Common_IdentifierType_t_get_sample_access_info();
    Common_IdentifierType_t_g_tc._data._typePlugin =
    Common_IdentifierType_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_IdentifierType_t_g_tc;
}

#define TSeq Common_IdentifierType_tSeq
#define T Common_IdentifierType_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_IdentifierType_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_IdentifierType_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_IdentifierType_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_IdentifierType_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_IdentifierType_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_IdentifierType_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Common_IdentifierType_t *sample;

    static RTIXCdrMemberAccessInfo Common_IdentifierType_t_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_IdentifierType_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_IdentifierType_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Common_IdentifierType_t);
    if (sample == NULL) {
        return NULL;
    }

    Common_IdentifierType_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->resourceId - (char *)sample);

    Common_IdentifierType_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

    Common_IdentifierType_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_IdentifierType_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_IdentifierType_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_IdentifierType_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_IdentifierType_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_IdentifierType_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_IdentifierType_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_IdentifierType_t_get_member_value_pointer;

    Common_IdentifierType_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_IdentifierType_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_IdentifierType_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_IdentifierType_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_IdentifierType_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_IdentifierType_t_finalize_w_return,
        NULL
    };

    return &Common_IdentifierType_t_g_typePlugin;
}
#endif

RTIBool Common_IdentifierType_t_initialize(
    Common_IdentifierType_t* sample) {
    return Common_IdentifierType_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_IdentifierType_t_initialize_ex(
    Common_IdentifierType_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_IdentifierType_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_IdentifierType_t_initialize_w_params(
    Common_IdentifierType_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->resourceId = 0u;

    sample->id = 0;

    return RTI_TRUE;
}

RTIBool Common_IdentifierType_t_finalize_w_return(
    Common_IdentifierType_t* sample)
{
    Common_IdentifierType_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_IdentifierType_t_finalize(
    Common_IdentifierType_t* sample)
{

    Common_IdentifierType_t_finalize_ex(sample,RTI_TRUE);
}

void Common_IdentifierType_t_finalize_ex(
    Common_IdentifierType_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_IdentifierType_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_IdentifierType_t_finalize_w_params(
    Common_IdentifierType_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_IdentifierType_t_finalize_optional_members(
    Common_IdentifierType_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_IdentifierType_t_copy(
    Common_IdentifierType_t* dst,
    const Common_IdentifierType_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyUnsignedLong (
            &dst->resourceId, &src->resourceId)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->id, &src->id)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_IdentifierType_t' sequence class.
*/
#define T Common_IdentifierType_t
#define TSeq Common_IdentifierType_tSeq

#define T_initialize_w_params Common_IdentifierType_t_initialize_w_params

#define T_finalize_w_params   Common_IdentifierType_t_finalize_w_params
#define T_copy       Common_IdentifierType_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_IdentifierList_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_IdentifierList_t_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((Common_MAX_LEN)),NULL);

    static DDS_TypeCode Common_IdentifierList_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::IdentifierList_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_IdentifierList_t */

    if (is_initialized) {
        return &Common_IdentifierList_t_g_tc;
    }

    Common_IdentifierList_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_IdentifierList_t_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)Common_IdentifierType_t_get_typecode();
    Common_IdentifierList_t_g_tc_sequence._data._sampleAccessInfo = Common_IdentifierType_t_get_sample_seq_access_info();
    Common_IdentifierList_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& Common_IdentifierList_t_g_tc_sequence;

    /* Initialize the values for member annotations. */

    Common_IdentifierList_t_g_tc._data._sampleAccessInfo =
    Common_IdentifierList_t_get_sample_access_info();
    Common_IdentifierList_t_g_tc._data._typePlugin =
    Common_IdentifierList_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_IdentifierList_t_g_tc;
}

#define TSeq Common_IdentifierList_tSeq
#define T Common_IdentifierList_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_IdentifierList_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_IdentifierList_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_IdentifierList_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_IdentifierList_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_IdentifierList_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_IdentifierList_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_IdentifierList_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_IdentifierList_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_IdentifierList_t_g_sampleAccessInfo;
    }

    Common_IdentifierList_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_IdentifierList_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_IdentifierList_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_IdentifierList_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_IdentifierList_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_IdentifierList_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_IdentifierList_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_IdentifierList_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_IdentifierList_t_get_member_value_pointer;

    Common_IdentifierList_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_IdentifierList_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_IdentifierList_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_IdentifierList_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_IdentifierList_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_IdentifierList_t_finalize_w_return,
        NULL
    };

    return &Common_IdentifierList_t_g_typePlugin;
}
#endif

RTIBool Common_IdentifierList_t_initialize(
    Common_IdentifierList_t* sample) {
    return Common_IdentifierList_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_IdentifierList_t_initialize_ex(
    Common_IdentifierList_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_IdentifierList_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_IdentifierList_t_initialize_w_params(
    Common_IdentifierList_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        if(!Common_IdentifierType_tSeq_initialize(sample )){
            return RTI_FALSE;
        };
        if(!Common_IdentifierType_tSeq_set_element_allocation_params(sample ,allocParams)){
            return RTI_FALSE;
        };
        if(!Common_IdentifierType_tSeq_set_absolute_maximum(sample , ((Common_MAX_LEN)))){
            return RTI_FALSE;
        }
        if (!Common_IdentifierType_tSeq_set_maximum(sample, ((Common_MAX_LEN)))) {
            return RTI_FALSE;
        }
    } else { 
        if(!Common_IdentifierType_tSeq_set_length(sample, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}

RTIBool Common_IdentifierList_t_finalize_w_return(
    Common_IdentifierList_t* sample)
{
    Common_IdentifierList_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_IdentifierList_t_finalize(
    Common_IdentifierList_t* sample)
{

    Common_IdentifierList_t_finalize_ex(sample,RTI_TRUE);
}

void Common_IdentifierList_t_finalize_ex(
    Common_IdentifierList_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_IdentifierList_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_IdentifierList_t_finalize_w_params(
    Common_IdentifierList_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if(!Common_IdentifierType_tSeq_set_element_deallocation_params(
        sample,deallocParams)){
        return; 
    }
    if(!Common_IdentifierType_tSeq_finalize(sample)){
        return;
    }

}

void Common_IdentifierList_t_finalize_optional_members(
    Common_IdentifierList_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_IdentifierList_t_copy(
    Common_IdentifierList_t* dst,
    const Common_IdentifierList_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!Common_IdentifierType_tSeq_copy(dst ,
        src )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_IdentifierList_t' sequence class.
*/
#define T Common_IdentifierList_t
#define TSeq Common_IdentifierList_tSeq

#define T_initialize_w_params Common_IdentifierList_t_initialize_w_params

#define T_finalize_w_params   Common_IdentifierList_t_finalize_w_params
#define T_copy       Common_IdentifierList_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Common_ResponseCode_tTYPENAME = "Common::ResponseCode_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_ResponseCode_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_ResponseCode_t_g_tc_members[4]=
    {

        {
            (char *)"Invalid",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Invalid, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Success",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Success, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Pending",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Pending, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Error",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Error, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_ResponseCode_t_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::ResponseCode_t", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            Common_ResponseCode_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_ResponseCode_t*/

    if (is_initialized) {
        return &Common_ResponseCode_t_g_tc;
    }

    Common_ResponseCode_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    Common_ResponseCode_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Common_ResponseCode_t_g_tc._data._annotations._defaultValue._u.long_value = 0;

    Common_ResponseCode_t_g_tc._data._sampleAccessInfo =
    Common_ResponseCode_t_get_sample_access_info();
    Common_ResponseCode_t_g_tc._data._typePlugin =
    Common_ResponseCode_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_ResponseCode_t_g_tc;
}

#define TSeq Common_ResponseCode_tSeq
#define T Common_ResponseCode_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_ResponseCode_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_ResponseCode_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_ResponseCode_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_ResponseCode_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_ResponseCode_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_ResponseCode_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_ResponseCode_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_ResponseCode_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_ResponseCode_t_g_sampleAccessInfo;
    }

    Common_ResponseCode_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_ResponseCode_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_ResponseCode_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_ResponseCode_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_ResponseCode_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_ResponseCode_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_ResponseCode_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_ResponseCode_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_ResponseCode_t_get_member_value_pointer;

    Common_ResponseCode_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_ResponseCode_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_ResponseCode_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_ResponseCode_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_ResponseCode_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_ResponseCode_t_finalize_w_return,
        NULL
    };

    return &Common_ResponseCode_t_g_typePlugin;
}
#endif

RTIBool Common_ResponseCode_t_initialize(
    Common_ResponseCode_t* sample) {
    *sample = Invalid;
    return RTI_TRUE;
}

RTIBool Common_ResponseCode_t_initialize_ex(
    Common_ResponseCode_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_ResponseCode_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_ResponseCode_t_initialize_w_params(
    Common_ResponseCode_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = Invalid;
    return RTI_TRUE;
}

RTIBool Common_ResponseCode_t_finalize_w_return(
    Common_ResponseCode_t* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void Common_ResponseCode_t_finalize(
    Common_ResponseCode_t* sample)
{

    if (sample==NULL) {
        return;
    }
}

void Common_ResponseCode_t_finalize_ex(
    Common_ResponseCode_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_ResponseCode_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_ResponseCode_t_finalize_w_params(
    Common_ResponseCode_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_ResponseCode_t_finalize_optional_members(
    Common_ResponseCode_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_ResponseCode_t_copy(
    Common_ResponseCode_t* dst,
    const Common_ResponseCode_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_ResponseCode_t' sequence class.
*/
#define T Common_ResponseCode_t
#define TSeq Common_ResponseCode_tSeq

#define T_initialize_w_params Common_ResponseCode_t_initialize_w_params

#define T_finalize_w_params   Common_ResponseCode_t_finalize_w_params
#define T_copy       Common_ResponseCode_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

// Time

/* ========================================================================= */
const char *Common_DateTime_tTYPENAME = "Common::DateTime_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_DateTime_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_DateTime_t_g_tc_members[2]=
    {

        {
            (char *)"secs",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"nsecs",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_DateTime_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::DateTime_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Common_DateTime_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_DateTime_t*/

    if (is_initialized) {
        return &Common_DateTime_t_g_tc;
    }

    Common_DateTime_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_DateTime_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;
    Common_DateTime_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;

    /* Initialize the values for member annotations. */
    Common_DateTime_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
    Common_DateTime_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    Common_DateTime_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    Common_DateTime_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[1]._annotations._defaultValue._u.long_long_value = 0ll;
    Common_DateTime_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[1]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    Common_DateTime_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    Common_DateTime_t_g_tc_members[1]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    Common_DateTime_t_g_tc._data._sampleAccessInfo =
    Common_DateTime_t_get_sample_access_info();
    Common_DateTime_t_g_tc._data._typePlugin =
    Common_DateTime_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_DateTime_t_g_tc;
}

#define TSeq Common_DateTime_tSeq
#define T Common_DateTime_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_DateTime_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_DateTime_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_DateTime_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_DateTime_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_DateTime_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_DateTime_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Common_DateTime_t *sample;

    static RTIXCdrMemberAccessInfo Common_DateTime_t_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_DateTime_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_DateTime_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Common_DateTime_t);
    if (sample == NULL) {
        return NULL;
    }

    Common_DateTime_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->secs - (char *)sample);

    Common_DateTime_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->nsecs - (char *)sample);

    Common_DateTime_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_DateTime_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_DateTime_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_DateTime_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_DateTime_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_DateTime_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_DateTime_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_DateTime_t_get_member_value_pointer;

    Common_DateTime_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_DateTime_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_DateTime_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_DateTime_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_DateTime_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_DateTime_t_finalize_w_return,
        NULL
    };

    return &Common_DateTime_t_g_typePlugin;
}
#endif

RTIBool Common_DateTime_t_initialize(
    Common_DateTime_t* sample) {
    return Common_DateTime_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_DateTime_t_initialize_ex(
    Common_DateTime_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_DateTime_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_DateTime_t_initialize_w_params(
    Common_DateTime_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->secs = 0ll;

    sample->nsecs = 0ll;

    return RTI_TRUE;
}

RTIBool Common_DateTime_t_finalize_w_return(
    Common_DateTime_t* sample)
{
    Common_DateTime_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_DateTime_t_finalize(
    Common_DateTime_t* sample)
{

    Common_DateTime_t_finalize_ex(sample,RTI_TRUE);
}

void Common_DateTime_t_finalize_ex(
    Common_DateTime_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_DateTime_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_DateTime_t_finalize_w_params(
    Common_DateTime_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_DateTime_t_finalize_optional_members(
    Common_DateTime_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_DateTime_t_copy(
    Common_DateTime_t* dst,
    const Common_DateTime_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLongLong (
            &dst->secs, &src->secs)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLongLong (
            &dst->nsecs, &src->nsecs)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_DateTime_t' sequence class.
*/
#define T Common_DateTime_t
#define TSeq Common_DateTime_tSeq

#define T_initialize_w_params Common_DateTime_t_initialize_w_params

#define T_finalize_w_params   Common_DateTime_t_finalize_w_params
#define T_copy       Common_DateTime_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Common_MetaData_tTYPENAME = "Common::MetaData_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_MetaData_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_MetaData_t_g_tc_members[1]=
    {

        {
            (char *)"timeOfGeneration",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_MetaData_t_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::MetaData_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            Common_MetaData_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_MetaData_t*/

    if (is_initialized) {
        return &Common_MetaData_t_g_tc;
    }

    Common_MetaData_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_MetaData_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common_DateTime_t_get_typecode();

    /* Initialize the values for member annotations. */

    Common_MetaData_t_g_tc._data._sampleAccessInfo =
    Common_MetaData_t_get_sample_access_info();
    Common_MetaData_t_g_tc._data._typePlugin =
    Common_MetaData_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_MetaData_t_g_tc;
}

#define TSeq Common_MetaData_tSeq
#define T Common_MetaData_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_MetaData_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_MetaData_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_MetaData_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_MetaData_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_MetaData_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_MetaData_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Common_MetaData_t *sample;

    static RTIXCdrMemberAccessInfo Common_MetaData_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_MetaData_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_MetaData_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Common_MetaData_t);
    if (sample == NULL) {
        return NULL;
    }

    Common_MetaData_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeOfGeneration - (char *)sample);

    Common_MetaData_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_MetaData_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_MetaData_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_MetaData_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_MetaData_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_MetaData_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_MetaData_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_MetaData_t_get_member_value_pointer;

    Common_MetaData_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_MetaData_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_MetaData_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_MetaData_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_MetaData_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_MetaData_t_finalize_w_return,
        NULL
    };

    return &Common_MetaData_t_g_typePlugin;
}
#endif

RTIBool Common_MetaData_t_initialize(
    Common_MetaData_t* sample) {
    return Common_MetaData_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_MetaData_t_initialize_ex(
    Common_MetaData_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_MetaData_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_MetaData_t_initialize_w_params(
    Common_MetaData_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!Common_DateTime_t_initialize_w_params(&sample->timeOfGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool Common_MetaData_t_finalize_w_return(
    Common_MetaData_t* sample)
{
    Common_MetaData_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_MetaData_t_finalize(
    Common_MetaData_t* sample)
{

    Common_MetaData_t_finalize_ex(sample,RTI_TRUE);
}

void Common_MetaData_t_finalize_ex(
    Common_MetaData_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_MetaData_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_MetaData_t_finalize_w_params(
    Common_MetaData_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    Common_DateTime_t_finalize_w_params(&sample->timeOfGeneration,deallocParams);

}

void Common_MetaData_t_finalize_optional_members(
    Common_MetaData_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_MetaData_t_copy(
    Common_MetaData_t* dst,
    const Common_MetaData_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!Common_DateTime_t_copy(
            &dst->timeOfGeneration,(const Common_DateTime_t*)&src->timeOfGeneration)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_MetaData_t' sequence class.
*/
#define T Common_MetaData_t
#define TSeq Common_MetaData_tSeq

#define T_initialize_w_params Common_MetaData_t_initialize_w_params

#define T_finalize_w_params   Common_MetaData_t_finalize_w_params
#define T_copy       Common_MetaData_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_BinaryData_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Common_BinaryData_t_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(Common_MAX_LEN), NULL,NULL);

    static DDS_TypeCode Common_BinaryData_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_TRUE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"Common::BinaryData_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  Common_BinaryData_t */

    if (is_initialized) {
        return &Common_BinaryData_t_g_tc;
    }

    Common_BinaryData_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_BinaryData_t_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short_w_new;
    Common_BinaryData_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& Common_BinaryData_t_g_tc_array;

    /* Initialize the values for member annotations. */

    Common_BinaryData_t_g_tc._data._sampleAccessInfo =
    Common_BinaryData_t_get_sample_access_info();
    Common_BinaryData_t_g_tc._data._typePlugin =
    Common_BinaryData_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_BinaryData_t_g_tc;
}

#define ALIAS_OF_ARRAY

#define TSeq Common_BinaryData_tSeq
#define T Common_BinaryData_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

#undef ALIAS_OF_ARRAY

RTIXCdrSampleAccessInfo *Common_BinaryData_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_BinaryData_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_BinaryData_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_BinaryData_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_BinaryData_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_BinaryData_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_BinaryData_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_BinaryData_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_BinaryData_t_g_sampleAccessInfo;
    }

    Common_BinaryData_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_BinaryData_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_BinaryData_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_BinaryData_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_BinaryData_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_BinaryData_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_BinaryData_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_BinaryData_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_BinaryData_t_get_member_value_pointer;

    Common_BinaryData_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_BinaryData_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_BinaryData_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_BinaryData_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_BinaryData_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_BinaryData_t_finalize_w_return,
        NULL
    };

    return &Common_BinaryData_t_g_typePlugin;
}
#endif

RTIBool Common_BinaryData_t_initialize(
    Common_BinaryData_t* sample) {
    return Common_BinaryData_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_BinaryData_t_initialize_ex(
    Common_BinaryData_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_BinaryData_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_BinaryData_t_initialize_w_params(
    Common_BinaryData_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    {

        int i=0;    
        DDS_Short** elem =
        (DDS_Short**) (*sample);        
        if (allocParams->allocate_memory){
            if (allocParams->allocate_pointers) {
                for (i=0;i < (int)(((Common_MAX_LEN)));++i,++elem) {

                    *elem = new (std::nothrow)   DDS_Short  ;
                    if (*elem==NULL) {
                        return RTI_FALSE;
                    }

                    memset((void *)*elem,0,sizeof(DDS_Short));
                }        
            } else {
                for (i=0;i < (int)(((Common_MAX_LEN)));i++,++elem) {
                    *elem = NULL;
                }
            }
        } else {

            for (i=0;i < (int)(((Common_MAX_LEN)));i++,++elem) {
                if (*elem != NULL) {
                    memset((void *)*elem,0,sizeof(DDS_Short));
                }
            }
        }
    }
    return RTI_TRUE;
}

RTIBool Common_BinaryData_t_finalize_w_return(
    Common_BinaryData_t* sample)
{
    Common_BinaryData_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_BinaryData_t_finalize(
    Common_BinaryData_t* sample)
{

    Common_BinaryData_t_finalize_ex(sample,RTI_TRUE);
}

void Common_BinaryData_t_finalize_ex(
    Common_BinaryData_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_BinaryData_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_BinaryData_t_finalize_w_params(
    Common_BinaryData_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_pointers) {

        int i=0;
        DDS_Short ** elem =
        (  DDS_Short  **) (*sample);

        for (i=0;i < (int)(((Common_MAX_LEN)));++i,++elem) {
            if (*elem != NULL) {
                delete  *elem;
                *elem=NULL;
            }
        }   

    }
}

void Common_BinaryData_t_finalize_optional_members(
    Common_BinaryData_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_BinaryData_t_copy(
    Common_BinaryData_t* dst,
    const Common_BinaryData_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        {
            int i = 0;
            DDS_Short** elemOut = (DDS_Short**) (*dst);
            DDS_Short** elemIn = (DDS_Short**) (*src);

            for (i = 0; i < (int)(((Common_MAX_LEN)));
            ++i, ++elemOut, ++elemIn) {
                if (!RTICdrType_copyShort (*elemOut,(const DDS_Short*) *elemIn)) {
                    return RTI_FALSE;
                }
            }
        }     

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_BinaryData_t' sequence class.
*/
#define T Common_BinaryData_t
#define TSeq Common_BinaryData_tSeq

#define T_initialize_w_params Common_BinaryData_t_initialize_w_params

#define T_finalize_w_params   Common_BinaryData_t_finalize_w_params
#define T_copy       Common_BinaryData_t_copy

#define T_no_get  
#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_no_get  

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Common_UnitTypeTYPENAME = "Common::UnitType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_UnitType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_UnitType_g_tc_members[3]=
    {

        {
            (char *)"Farenheit",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Farenheit, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Celcius",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Celcius, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Percent",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Percent, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_UnitType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::UnitType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            Common_UnitType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_UnitType*/

    if (is_initialized) {
        return &Common_UnitType_g_tc;
    }

    Common_UnitType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    Common_UnitType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Common_UnitType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    Common_UnitType_g_tc._data._sampleAccessInfo =
    Common_UnitType_get_sample_access_info();
    Common_UnitType_g_tc._data._typePlugin =
    Common_UnitType_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_UnitType_g_tc;
}

#define TSeq Common_UnitTypeSeq
#define T Common_UnitType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_UnitType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_UnitType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_UnitTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_UnitTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_UnitType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_UnitType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Common_UnitType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_UnitType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_UnitType_g_sampleAccessInfo;
    }

    Common_UnitType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Common_UnitType_g_sampleAccessInfo.memberAccessInfos = 
    Common_UnitType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_UnitType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_UnitType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_UnitType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_UnitType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_UnitType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_UnitType_get_member_value_pointer;

    Common_UnitType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_UnitType_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_UnitType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_UnitType_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_UnitType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_UnitType_finalize_w_return,
        NULL
    };

    return &Common_UnitType_g_typePlugin;
}
#endif

RTIBool Common_UnitType_initialize(
    Common_UnitType* sample) {
    *sample = Farenheit;
    return RTI_TRUE;
}

RTIBool Common_UnitType_initialize_ex(
    Common_UnitType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_UnitType_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_UnitType_initialize_w_params(
    Common_UnitType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = Farenheit;
    return RTI_TRUE;
}

RTIBool Common_UnitType_finalize_w_return(
    Common_UnitType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void Common_UnitType_finalize(
    Common_UnitType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void Common_UnitType_finalize_ex(
    Common_UnitType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_UnitType_finalize_w_params(
        sample,&deallocParams);
}

void Common_UnitType_finalize_w_params(
    Common_UnitType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_UnitType_finalize_optional_members(
    Common_UnitType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_UnitType_copy(
    Common_UnitType* dst,
    const Common_UnitType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_UnitType' sequence class.
*/
#define T Common_UnitType
#define TSeq Common_UnitTypeSeq

#define T_initialize_w_params Common_UnitType_initialize_w_params

#define T_finalize_w_params   Common_UnitType_finalize_w_params
#define T_copy       Common_UnitType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Common_MeasurementCoordinate_tTYPENAME = "Common::MeasurementCoordinate_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Common_MeasurementCoordinate_t_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Common_MeasurementCoordinate_t_g_tc_members[2]=
    {

        {
            (char *)"latitude",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"longitude",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Common_MeasurementCoordinate_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Common::MeasurementCoordinate_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Common_MeasurementCoordinate_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Common_MeasurementCoordinate_t*/

    if (is_initialized) {
        return &Common_MeasurementCoordinate_t_g_tc;
    }

    Common_MeasurementCoordinate_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Common_MeasurementCoordinate_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
    Common_MeasurementCoordinate_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    Common_MeasurementCoordinate_t_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    Common_MeasurementCoordinate_t_g_tc._data._sampleAccessInfo =
    Common_MeasurementCoordinate_t_get_sample_access_info();
    Common_MeasurementCoordinate_t_g_tc._data._typePlugin =
    Common_MeasurementCoordinate_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Common_MeasurementCoordinate_t_g_tc;
}

#define TSeq Common_MeasurementCoordinate_tSeq
#define T Common_MeasurementCoordinate_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Common_MeasurementCoordinate_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Common_MeasurementCoordinate_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Common_MeasurementCoordinate_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Common_MeasurementCoordinate_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Common_MeasurementCoordinate_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Common_MeasurementCoordinate_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Common_MeasurementCoordinate_t *sample;

    static RTIXCdrMemberAccessInfo Common_MeasurementCoordinate_t_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Common_MeasurementCoordinate_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Common_MeasurementCoordinate_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Common_MeasurementCoordinate_t);
    if (sample == NULL) {
        return NULL;
    }

    Common_MeasurementCoordinate_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->latitude - (char *)sample);

    Common_MeasurementCoordinate_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->longitude - (char *)sample);

    Common_MeasurementCoordinate_t_g_sampleAccessInfo.memberAccessInfos = 
    Common_MeasurementCoordinate_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Common_MeasurementCoordinate_t);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Common_MeasurementCoordinate_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Common_MeasurementCoordinate_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Common_MeasurementCoordinate_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Common_MeasurementCoordinate_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Common_MeasurementCoordinate_t_get_member_value_pointer;

    Common_MeasurementCoordinate_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Common_MeasurementCoordinate_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Common_MeasurementCoordinate_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Common_MeasurementCoordinate_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Common_MeasurementCoordinate_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Common_MeasurementCoordinate_t_finalize_w_return,
        NULL
    };

    return &Common_MeasurementCoordinate_t_g_typePlugin;
}
#endif

RTIBool Common_MeasurementCoordinate_t_initialize(
    Common_MeasurementCoordinate_t* sample) {
    return Common_MeasurementCoordinate_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Common_MeasurementCoordinate_t_initialize_ex(
    Common_MeasurementCoordinate_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Common_MeasurementCoordinate_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool Common_MeasurementCoordinate_t_initialize_w_params(
    Common_MeasurementCoordinate_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->latitude = 0.0;

    sample->longitude = 0.0;

    return RTI_TRUE;
}

RTIBool Common_MeasurementCoordinate_t_finalize_w_return(
    Common_MeasurementCoordinate_t* sample)
{
    Common_MeasurementCoordinate_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Common_MeasurementCoordinate_t_finalize(
    Common_MeasurementCoordinate_t* sample)
{

    Common_MeasurementCoordinate_t_finalize_ex(sample,RTI_TRUE);
}

void Common_MeasurementCoordinate_t_finalize_ex(
    Common_MeasurementCoordinate_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Common_MeasurementCoordinate_t_finalize_w_params(
        sample,&deallocParams);
}

void Common_MeasurementCoordinate_t_finalize_w_params(
    Common_MeasurementCoordinate_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Common_MeasurementCoordinate_t_finalize_optional_members(
    Common_MeasurementCoordinate_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Common_MeasurementCoordinate_t_copy(
    Common_MeasurementCoordinate_t* dst,
    const Common_MeasurementCoordinate_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->latitude, &src->latitude)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->longitude, &src->longitude)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Common_MeasurementCoordinate_t' sequence class.
*/
#define T Common_MeasurementCoordinate_t
#define TSeq Common_MeasurementCoordinate_tSeq

#define T_initialize_w_params Common_MeasurementCoordinate_t_initialize_w_params

#define T_finalize_w_params   Common_MeasurementCoordinate_t_finalize_w_params
#define T_copy       Common_MeasurementCoordinate_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_SeveritiesTYPENAME = "Alarms::Severities";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_Severities_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_Severities_g_tc_members[4]=
    {

        {
            (char *)"Critical",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Critical, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Major",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Major, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Minor",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Minor, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Informational",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Informational, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_Severities_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::Severities", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            Alarms_Severities_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_Severities*/

    if (is_initialized) {
        return &Alarms_Severities_g_tc;
    }

    Alarms_Severities_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    Alarms_Severities_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_Severities_g_tc._data._annotations._defaultValue._u.long_value = 0;

    Alarms_Severities_g_tc._data._sampleAccessInfo =
    Alarms_Severities_get_sample_access_info();
    Alarms_Severities_g_tc._data._typePlugin =
    Alarms_Severities_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_Severities_g_tc;
}

#define TSeq Alarms_SeveritiesSeq
#define T Alarms_Severities
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_Severities_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_Severities_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_SeveritiesSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_SeveritiesSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_Severities_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_Severities_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Alarms_Severities_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_Severities_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_Severities_g_sampleAccessInfo;
    }

    Alarms_Severities_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Alarms_Severities_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_Severities_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_Severities);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_Severities_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_Severities_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_Severities_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_Severities_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_Severities_get_member_value_pointer;

    Alarms_Severities_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_Severities_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_Severities_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_Severities_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_Severities_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_Severities_finalize_w_return,
        NULL
    };

    return &Alarms_Severities_g_typePlugin;
}
#endif

RTIBool Alarms_Severities_initialize(
    Alarms_Severities* sample) {
    *sample = Critical;
    return RTI_TRUE;
}

RTIBool Alarms_Severities_initialize_ex(
    Alarms_Severities* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_Severities_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_Severities_initialize_w_params(
    Alarms_Severities* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = Critical;
    return RTI_TRUE;
}

RTIBool Alarms_Severities_finalize_w_return(
    Alarms_Severities* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void Alarms_Severities_finalize(
    Alarms_Severities* sample)
{

    if (sample==NULL) {
        return;
    }
}

void Alarms_Severities_finalize_ex(
    Alarms_Severities* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_Severities_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_Severities_finalize_w_params(
    Alarms_Severities* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Alarms_Severities_finalize_optional_members(
    Alarms_Severities* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_Severities_copy(
    Alarms_Severities* dst,
    const Alarms_Severities* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_Severities' sequence class.
*/
#define T Alarms_Severities
#define TSeq Alarms_SeveritiesSeq

#define T_initialize_w_params Alarms_Severities_initialize_w_params

#define T_finalize_w_params   Alarms_Severities_finalize_w_params
#define T_copy       Alarms_Severities_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_StateTYPENAME = "Alarms::State";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_State_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_State_g_tc_members[2]=
    {

        {
            (char *)"Open",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Open, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Closed",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Closed, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_State_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::State", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Alarms_State_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_State*/

    if (is_initialized) {
        return &Alarms_State_g_tc;
    }

    Alarms_State_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    Alarms_State_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_State_g_tc._data._annotations._defaultValue._u.long_value = 0;

    Alarms_State_g_tc._data._sampleAccessInfo =
    Alarms_State_get_sample_access_info();
    Alarms_State_g_tc._data._typePlugin =
    Alarms_State_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_State_g_tc;
}

#define TSeq Alarms_StateSeq
#define T Alarms_State
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_State_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_State_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_StateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_StateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_State_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_State_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Alarms_State_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_State_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_State_g_sampleAccessInfo;
    }

    Alarms_State_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    Alarms_State_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_State_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_State);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_State_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_State_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_State_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_State_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_State_get_member_value_pointer;

    Alarms_State_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_State_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_State_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_State_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_State_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_State_finalize_w_return,
        NULL
    };

    return &Alarms_State_g_typePlugin;
}
#endif

RTIBool Alarms_State_initialize(
    Alarms_State* sample) {
    *sample = Open;
    return RTI_TRUE;
}

RTIBool Alarms_State_initialize_ex(
    Alarms_State* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_State_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_State_initialize_w_params(
    Alarms_State* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = Open;
    return RTI_TRUE;
}

RTIBool Alarms_State_finalize_w_return(
    Alarms_State* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void Alarms_State_finalize(
    Alarms_State* sample)
{

    if (sample==NULL) {
        return;
    }
}

void Alarms_State_finalize_ex(
    Alarms_State* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_State_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_State_finalize_w_params(
    Alarms_State* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Alarms_State_finalize_optional_members(
    Alarms_State* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_State_copy(
    Alarms_State* dst,
    const Alarms_State* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_State' sequence class.
*/
#define T Alarms_State
#define TSeq Alarms_StateSeq

#define T_initialize_w_params Alarms_State_initialize_w_params

#define T_finalize_w_params   Alarms_State_finalize_w_params
#define T_copy       Alarms_State_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_ValueDefinitionTYPENAME = "Alarms::ValueDefinition";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_ValueDefinition_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_ValueDefinition_g_tc_members[2]=
    {

        {
            (char *)"number",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Units",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_ValueDefinition_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::ValueDefinition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Alarms_ValueDefinition_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_ValueDefinition*/

    if (is_initialized) {
        return &Alarms_ValueDefinition_g_tc;
    }

    Alarms_ValueDefinition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_ValueDefinition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    Alarms_ValueDefinition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Common_UnitType_get_typecode();

    /* Initialize the values for member annotations. */
    Alarms_ValueDefinition_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_ValueDefinition_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Alarms_ValueDefinition_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_ValueDefinition_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Alarms_ValueDefinition_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_ValueDefinition_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    Alarms_ValueDefinition_g_tc._data._sampleAccessInfo =
    Alarms_ValueDefinition_get_sample_access_info();
    Alarms_ValueDefinition_g_tc._data._typePlugin =
    Alarms_ValueDefinition_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_ValueDefinition_g_tc;
}

#define TSeq Alarms_ValueDefinitionSeq
#define T Alarms_ValueDefinition
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_ValueDefinition_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_ValueDefinition_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_ValueDefinitionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_ValueDefinitionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_ValueDefinition_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_ValueDefinition_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_ValueDefinition *sample;

    static RTIXCdrMemberAccessInfo Alarms_ValueDefinition_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_ValueDefinition_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_ValueDefinition_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_ValueDefinition);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_ValueDefinition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->number - (char *)sample);

    Alarms_ValueDefinition_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Units - (char *)sample);

    Alarms_ValueDefinition_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_ValueDefinition_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_ValueDefinition);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_ValueDefinition_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_ValueDefinition_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_ValueDefinition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_ValueDefinition_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_ValueDefinition_get_member_value_pointer;

    Alarms_ValueDefinition_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_ValueDefinition_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_ValueDefinition_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_ValueDefinition_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_ValueDefinition_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_ValueDefinition_finalize_w_return,
        NULL
    };

    return &Alarms_ValueDefinition_g_typePlugin;
}
#endif

RTIBool Alarms_ValueDefinition_initialize(
    Alarms_ValueDefinition* sample) {
    return Alarms_ValueDefinition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_ValueDefinition_initialize_ex(
    Alarms_ValueDefinition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_ValueDefinition_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_ValueDefinition_initialize_w_params(
    Alarms_ValueDefinition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->number=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->number = new (std::nothrow)   DDS_Float  ;
            if (sample->number==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initFloat(sample->number)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->number != NULL) {
                if (!RTICdrType_initFloat(sample->number)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->Units = Farenheit;
    return RTI_TRUE;
}

RTIBool Alarms_ValueDefinition_finalize_w_return(
    Alarms_ValueDefinition* sample)
{
    Alarms_ValueDefinition_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_ValueDefinition_finalize(
    Alarms_ValueDefinition* sample)
{

    Alarms_ValueDefinition_finalize_ex(sample,RTI_TRUE);
}

void Alarms_ValueDefinition_finalize_ex(
    Alarms_ValueDefinition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_ValueDefinition_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_ValueDefinition_finalize_w_params(
    Alarms_ValueDefinition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->number != NULL) {

            delete  sample->number;
            sample->number=NULL;
        }
    }
    Common_UnitType_finalize_w_params(&sample->Units,deallocParams);

}

void Alarms_ValueDefinition_finalize_optional_members(
    Alarms_ValueDefinition* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    if (sample->number != NULL) {

        delete  sample->number;
        sample->number=NULL;
    }
}

RTIBool Alarms_ValueDefinition_copy(
    Alarms_ValueDefinition* dst,
    const Alarms_ValueDefinition* src)
{
    try {

        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = DDS_BOOLEAN_TRUE;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (src->number!=NULL) {
            if (dst->number==NULL) {

                dst->number = new (std::nothrow)   DDS_Float  ;
                if (dst->number==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(dst->number)) {
                    return RTI_FALSE;
                }
            }

            if (!RTICdrType_copyFloat (
                dst->number, src->number)) { 
                return RTI_FALSE;
            }
        } else {

            if (dst->number != NULL) {

                delete  dst->number;
                dst->number=NULL;
            }   
        }
        if (!Common_UnitType_copy(
            &dst->Units,(const Common_UnitType*)&src->Units)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_ValueDefinition' sequence class.
*/
#define T Alarms_ValueDefinition
#define TSeq Alarms_ValueDefinitionSeq

#define T_initialize_w_params Alarms_ValueDefinition_initialize_w_params

#define T_finalize_w_params   Alarms_ValueDefinition_finalize_w_params
#define T_copy       Alarms_ValueDefinition_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_AlarmTYPENAME = "Alarms::Alarm";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_Alarm_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_Alarm_g_tc_members[5]=
    {

        {
            (char *)"sourceId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"alarmTypeName",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"severity",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"null",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"numericValue",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_Alarm_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::Alarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            Alarms_Alarm_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_Alarm*/

    if (is_initialized) {
        return &Alarms_Alarm_g_tc;
    }

    Alarms_Alarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_Alarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common_IdentifierType_t_get_typecode();
    Alarms_Alarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Common_Descriptor_t_get_typecode();
    Alarms_Alarm_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Alarms_Severities_get_typecode();
    Alarms_Alarm_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Alarms_State_get_typecode();
    Alarms_Alarm_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)Alarms_ValueDefinition_get_typecode();

    /* Initialize the values for member annotations. */

    Alarms_Alarm_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Alarms_Alarm_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Alarms_Alarm_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_Alarm_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

    Alarms_Alarm_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_Alarm_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

    Alarms_Alarm_g_tc._data._sampleAccessInfo =
    Alarms_Alarm_get_sample_access_info();
    Alarms_Alarm_g_tc._data._typePlugin =
    Alarms_Alarm_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_Alarm_g_tc;
}

#define TSeq Alarms_AlarmSeq
#define T Alarms_Alarm
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_Alarm_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_Alarm_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_AlarmSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_AlarmSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_Alarm_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_Alarm_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_Alarm *sample;

    static RTIXCdrMemberAccessInfo Alarms_Alarm_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_Alarm_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_Alarm_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_Alarm);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_Alarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sourceId - (char *)sample);

    Alarms_Alarm_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->alarmTypeName - (char *)sample);

    Alarms_Alarm_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->severity - (char *)sample);

    Alarms_Alarm_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->null - (char *)sample);

    Alarms_Alarm_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->numericValue - (char *)sample);

    Alarms_Alarm_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_Alarm_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_Alarm);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_Alarm_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_Alarm_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_Alarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_Alarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_Alarm_get_member_value_pointer;

    Alarms_Alarm_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_Alarm_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_Alarm_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_Alarm_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_Alarm_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_Alarm_finalize_w_return,
        NULL
    };

    return &Alarms_Alarm_g_typePlugin;
}
#endif

RTIBool Alarms_Alarm_initialize(
    Alarms_Alarm* sample) {
    return Alarms_Alarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_Alarm_initialize_ex(
    Alarms_Alarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_Alarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_Alarm_initialize_w_params(
    Alarms_Alarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!Common_IdentifierType_t_initialize_w_params(&sample->sourceId,
    allocParams)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->alarmTypeName = DDS_String_alloc(((Common_MIN_LEN)));
        RTICdrType_copyStringEx(
            &sample->alarmTypeName,
            "",
            ((Common_MIN_LEN)),
            RTI_FALSE);
        if (sample->alarmTypeName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->alarmTypeName != NULL) {
            RTICdrType_copyStringEx(
                &sample->alarmTypeName,
                "",
                ((Common_MIN_LEN)),
                RTI_FALSE);
            if (sample->alarmTypeName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->severity = Critical;
    sample->null = Open;
    if (!Alarms_ValueDefinition_initialize_w_params(&sample->numericValue,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool Alarms_Alarm_finalize_w_return(
    Alarms_Alarm* sample)
{
    Alarms_Alarm_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_Alarm_finalize(
    Alarms_Alarm* sample)
{

    Alarms_Alarm_finalize_ex(sample,RTI_TRUE);
}

void Alarms_Alarm_finalize_ex(
    Alarms_Alarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_Alarm_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_Alarm_finalize_w_params(
    Alarms_Alarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    Common_IdentifierType_t_finalize_w_params(&sample->sourceId,deallocParams);

    if (sample->alarmTypeName != NULL) {
        DDS_String_free(sample->alarmTypeName);
        sample->alarmTypeName=NULL;

    }
    Alarms_Severities_finalize_w_params(&sample->severity,deallocParams);

    Alarms_State_finalize_w_params(&sample->null,deallocParams);

    Alarms_ValueDefinition_finalize_w_params(&sample->numericValue,deallocParams);

}

void Alarms_Alarm_finalize_optional_members(
    Alarms_Alarm* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    Alarms_ValueDefinition_finalize_optional_members(&sample->numericValue, deallocParams->delete_pointers);
}

RTIBool Alarms_Alarm_copy(
    Alarms_Alarm* dst,
    const Alarms_Alarm* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!Common_IdentifierType_t_copy(
            &dst->sourceId,(const Common_IdentifierType_t*)&src->sourceId)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyStringEx (
            &dst->alarmTypeName, src->alarmTypeName, 
            ((Common_MIN_LEN)) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!Alarms_Severities_copy(
            &dst->severity,(const Alarms_Severities*)&src->severity)) {
            return RTI_FALSE;
        } 
        if (!Alarms_State_copy(
            &dst->null,(const Alarms_State*)&src->null)) {
            return RTI_FALSE;
        } 
        if (!Alarms_ValueDefinition_copy(
            &dst->numericValue,(const Alarms_ValueDefinition*)&src->numericValue)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_Alarm' sequence class.
*/
#define T Alarms_Alarm
#define TSeq Alarms_AlarmSeq

#define T_initialize_w_params Alarms_Alarm_initialize_w_params

#define T_finalize_w_params   Alarms_Alarm_finalize_w_params
#define T_copy       Alarms_Alarm_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_HumidityAlarmTYPENAME = "Alarms::HumidityAlarm";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_HumidityAlarm_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_HumidityAlarm_g_tc_members[1]=
    {

        {
            (char *)"relativeHumidity",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_HumidityAlarm_g_tc =
    {{
            DDS_TK_VALUE, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::HumidityAlarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            Alarms_HumidityAlarm_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_HumidityAlarm*/

    if (is_initialized) {
        return &Alarms_HumidityAlarm_g_tc;
    }

    Alarms_HumidityAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_HumidityAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common_Percentage_t_get_typecode();

    /* Initialize the values for member annotations. */
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_HumidityAlarm_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Alarms_HumidityAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)Alarms_Alarm_get_typecode(); /* Base class */

    Alarms_HumidityAlarm_g_tc._data._sampleAccessInfo =
    Alarms_HumidityAlarm_get_sample_access_info();
    Alarms_HumidityAlarm_g_tc._data._typePlugin =
    Alarms_HumidityAlarm_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_HumidityAlarm_g_tc;
}

#define TSeq Alarms_HumidityAlarmSeq
#define T Alarms_HumidityAlarm
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_HumidityAlarm_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_HumidityAlarm_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_HumidityAlarmSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_HumidityAlarmSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_HumidityAlarm_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_HumidityAlarm_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_HumidityAlarm *sample;

    static RTIXCdrMemberAccessInfo Alarms_HumidityAlarm_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_HumidityAlarm_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_HumidityAlarm_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_HumidityAlarm);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_HumidityAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity - (char *)sample);

    Alarms_HumidityAlarm_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_HumidityAlarm_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_HumidityAlarm);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_HumidityAlarm_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_HumidityAlarm_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_HumidityAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_HumidityAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_HumidityAlarm_get_member_value_pointer;

    Alarms_HumidityAlarm_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_HumidityAlarm_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_HumidityAlarm_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_HumidityAlarm_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_HumidityAlarm_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_HumidityAlarm_finalize_w_return,
        NULL
    };

    return &Alarms_HumidityAlarm_g_typePlugin;
}
#endif

RTIBool Alarms_HumidityAlarm_initialize(
    Alarms_HumidityAlarm* sample) {
    return Alarms_HumidityAlarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_HumidityAlarm_initialize_ex(
    Alarms_HumidityAlarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_HumidityAlarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_HumidityAlarm_initialize_w_params(
    Alarms_HumidityAlarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    if (!Alarms_Alarm_initialize_w_params((Alarms_Alarm*)sample,allocParams)) {
        return RTI_FALSE;
    }

    sample->relativeHumidity = 0.0f;

    return RTI_TRUE;
}

RTIBool Alarms_HumidityAlarm_finalize_w_return(
    Alarms_HumidityAlarm* sample)
{
    Alarms_HumidityAlarm_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_HumidityAlarm_finalize(
    Alarms_HumidityAlarm* sample)
{

    Alarms_HumidityAlarm_finalize_ex(sample,RTI_TRUE);
}

void Alarms_HumidityAlarm_finalize_ex(
    Alarms_HumidityAlarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_HumidityAlarm_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_HumidityAlarm_finalize_w_params(
    Alarms_HumidityAlarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }
    Alarms_Alarm_finalize_w_params((Alarms_Alarm*)sample,deallocParams);

}

void Alarms_HumidityAlarm_finalize_optional_members(
    Alarms_HumidityAlarm* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    Alarms_Alarm_finalize_optional_members((Alarms_Alarm*)sample,deletePointers);

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_HumidityAlarm_copy(
    Alarms_HumidityAlarm* dst,
    const Alarms_HumidityAlarm* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if(!Alarms_Alarm_copy((Alarms_Alarm*)dst,(const Alarms_Alarm*)src)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            &dst->relativeHumidity, &src->relativeHumidity)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_HumidityAlarm' sequence class.
*/
#define T Alarms_HumidityAlarm
#define TSeq Alarms_HumidityAlarmSeq

#define T_initialize_w_params Alarms_HumidityAlarm_initialize_w_params

#define T_finalize_w_params   Alarms_HumidityAlarm_finalize_w_params
#define T_copy       Alarms_HumidityAlarm_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_MotionAlarmTYPENAME = "Alarms::MotionAlarm";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_MotionAlarm_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_MotionAlarm_g_tc_members[1]=
    {

        {
            (char *)"coordinate",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_MotionAlarm_g_tc =
    {{
            DDS_TK_VALUE, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::MotionAlarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            Alarms_MotionAlarm_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_MotionAlarm*/

    if (is_initialized) {
        return &Alarms_MotionAlarm_g_tc;
    }

    Alarms_MotionAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_MotionAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common_MeasurementCoordinate_t_get_typecode();

    /* Initialize the values for member annotations. */

    Alarms_MotionAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)Alarms_Alarm_get_typecode(); /* Base class */

    Alarms_MotionAlarm_g_tc._data._sampleAccessInfo =
    Alarms_MotionAlarm_get_sample_access_info();
    Alarms_MotionAlarm_g_tc._data._typePlugin =
    Alarms_MotionAlarm_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_MotionAlarm_g_tc;
}

#define TSeq Alarms_MotionAlarmSeq
#define T Alarms_MotionAlarm
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_MotionAlarm_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_MotionAlarm_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_MotionAlarmSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_MotionAlarmSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_MotionAlarm_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_MotionAlarm_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_MotionAlarm *sample;

    static RTIXCdrMemberAccessInfo Alarms_MotionAlarm_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_MotionAlarm_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_MotionAlarm_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_MotionAlarm);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_MotionAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coordinate - (char *)sample);

    Alarms_MotionAlarm_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_MotionAlarm_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_MotionAlarm);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_MotionAlarm_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_MotionAlarm_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_MotionAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_MotionAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_MotionAlarm_get_member_value_pointer;

    Alarms_MotionAlarm_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_MotionAlarm_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_MotionAlarm_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_MotionAlarm_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_MotionAlarm_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_MotionAlarm_finalize_w_return,
        NULL
    };

    return &Alarms_MotionAlarm_g_typePlugin;
}
#endif

RTIBool Alarms_MotionAlarm_initialize(
    Alarms_MotionAlarm* sample) {
    return Alarms_MotionAlarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_MotionAlarm_initialize_ex(
    Alarms_MotionAlarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_MotionAlarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_MotionAlarm_initialize_w_params(
    Alarms_MotionAlarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    if (!Alarms_Alarm_initialize_w_params((Alarms_Alarm*)sample,allocParams)) {
        return RTI_FALSE;
    }

    if (!Common_MeasurementCoordinate_t_initialize_w_params(&sample->coordinate,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool Alarms_MotionAlarm_finalize_w_return(
    Alarms_MotionAlarm* sample)
{
    Alarms_MotionAlarm_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_MotionAlarm_finalize(
    Alarms_MotionAlarm* sample)
{

    Alarms_MotionAlarm_finalize_ex(sample,RTI_TRUE);
}

void Alarms_MotionAlarm_finalize_ex(
    Alarms_MotionAlarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_MotionAlarm_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_MotionAlarm_finalize_w_params(
    Alarms_MotionAlarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }
    Alarms_Alarm_finalize_w_params((Alarms_Alarm*)sample,deallocParams);

    Common_MeasurementCoordinate_t_finalize_w_params(&sample->coordinate,deallocParams);

}

void Alarms_MotionAlarm_finalize_optional_members(
    Alarms_MotionAlarm* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    Alarms_Alarm_finalize_optional_members((Alarms_Alarm*)sample,deletePointers);

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_MotionAlarm_copy(
    Alarms_MotionAlarm* dst,
    const Alarms_MotionAlarm* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if(!Alarms_Alarm_copy((Alarms_Alarm*)dst,(const Alarms_Alarm*)src)) {
            return RTI_FALSE;
        }

        if (!Common_MeasurementCoordinate_t_copy(
            &dst->coordinate,(const Common_MeasurementCoordinate_t*)&src->coordinate)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_MotionAlarm' sequence class.
*/
#define T Alarms_MotionAlarm
#define TSeq Alarms_MotionAlarmSeq

#define T_initialize_w_params Alarms_MotionAlarm_initialize_w_params

#define T_finalize_w_params   Alarms_MotionAlarm_finalize_w_params
#define T_copy       Alarms_MotionAlarm_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_FireAlarmTYPENAME = "Alarms::FireAlarm";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_FireAlarm_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_FireAlarm_g_tc_members[2]=
    {

        {
            (char *)"temperature",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"units",/* Member name */
            {
                6,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_FireAlarm_g_tc =
    {{
            DDS_TK_VALUE, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::FireAlarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Alarms_FireAlarm_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_FireAlarm*/

    if (is_initialized) {
        return &Alarms_FireAlarm_g_tc;
    }

    Alarms_FireAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_FireAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    Alarms_FireAlarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Common_UnitType_get_typecode();

    /* Initialize the values for member annotations. */
    Alarms_FireAlarm_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_FireAlarm_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
    Alarms_FireAlarm_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_FireAlarm_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Alarms_FireAlarm_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Alarms_FireAlarm_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Alarms_FireAlarm_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    Alarms_FireAlarm_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    Alarms_FireAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)Alarms_Alarm_get_typecode(); /* Base class */

    Alarms_FireAlarm_g_tc._data._sampleAccessInfo =
    Alarms_FireAlarm_get_sample_access_info();
    Alarms_FireAlarm_g_tc._data._typePlugin =
    Alarms_FireAlarm_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_FireAlarm_g_tc;
}

#define TSeq Alarms_FireAlarmSeq
#define T Alarms_FireAlarm
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_FireAlarm_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_FireAlarm_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_FireAlarmSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_FireAlarmSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_FireAlarm_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_FireAlarm_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_FireAlarm *sample;

    static RTIXCdrMemberAccessInfo Alarms_FireAlarm_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_FireAlarm_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_FireAlarm_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_FireAlarm);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_FireAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->temperature - (char *)sample);

    Alarms_FireAlarm_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->units - (char *)sample);

    Alarms_FireAlarm_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_FireAlarm_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_FireAlarm);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_FireAlarm_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_FireAlarm_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_FireAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_FireAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_FireAlarm_get_member_value_pointer;

    Alarms_FireAlarm_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_FireAlarm_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_FireAlarm_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_FireAlarm_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_FireAlarm_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_FireAlarm_finalize_w_return,
        NULL
    };

    return &Alarms_FireAlarm_g_typePlugin;
}
#endif

RTIBool Alarms_FireAlarm_initialize(
    Alarms_FireAlarm* sample) {
    return Alarms_FireAlarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_FireAlarm_initialize_ex(
    Alarms_FireAlarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_FireAlarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_FireAlarm_initialize_w_params(
    Alarms_FireAlarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    if (!Alarms_Alarm_initialize_w_params((Alarms_Alarm*)sample,allocParams)) {
        return RTI_FALSE;
    }

    sample->temperature = 0.0f;

    sample->units = Farenheit;
    return RTI_TRUE;
}

RTIBool Alarms_FireAlarm_finalize_w_return(
    Alarms_FireAlarm* sample)
{
    Alarms_FireAlarm_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_FireAlarm_finalize(
    Alarms_FireAlarm* sample)
{

    Alarms_FireAlarm_finalize_ex(sample,RTI_TRUE);
}

void Alarms_FireAlarm_finalize_ex(
    Alarms_FireAlarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_FireAlarm_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_FireAlarm_finalize_w_params(
    Alarms_FireAlarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }
    Alarms_Alarm_finalize_w_params((Alarms_Alarm*)sample,deallocParams);

    Common_UnitType_finalize_w_params(&sample->units,deallocParams);

}

void Alarms_FireAlarm_finalize_optional_members(
    Alarms_FireAlarm* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    Alarms_Alarm_finalize_optional_members((Alarms_Alarm*)sample,deletePointers);

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_FireAlarm_copy(
    Alarms_FireAlarm* dst,
    const Alarms_FireAlarm* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if(!Alarms_Alarm_copy((Alarms_Alarm*)dst,(const Alarms_Alarm*)src)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            &dst->temperature, &src->temperature)) { 
            return RTI_FALSE;
        }
        if (!Common_UnitType_copy(
            &dst->units,(const Common_UnitType*)&src->units)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_FireAlarm' sequence class.
*/
#define T Alarms_FireAlarm
#define TSeq Alarms_FireAlarmSeq

#define T_initialize_w_params Alarms_FireAlarm_initialize_w_params

#define T_finalize_w_params   Alarms_FireAlarm_finalize_w_params
#define T_copy       Alarms_FireAlarm_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *Alarms_IntrusionAlarmTYPENAME = "Alarms::IntrusionAlarm";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * Alarms_IntrusionAlarm_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Alarms_IntrusionAlarm_g_tc_members[1]=
    {

        {
            (char *)"coordinate",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Alarms_IntrusionAlarm_g_tc =
    {{
            DDS_TK_VALUE, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Alarms::IntrusionAlarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            Alarms_IntrusionAlarm_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Alarms_IntrusionAlarm*/

    if (is_initialized) {
        return &Alarms_IntrusionAlarm_g_tc;
    }

    Alarms_IntrusionAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Alarms_IntrusionAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common_MeasurementCoordinate_t_get_typecode();

    /* Initialize the values for member annotations. */

    Alarms_IntrusionAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)Alarms_Alarm_get_typecode(); /* Base class */

    Alarms_IntrusionAlarm_g_tc._data._sampleAccessInfo =
    Alarms_IntrusionAlarm_get_sample_access_info();
    Alarms_IntrusionAlarm_g_tc._data._typePlugin =
    Alarms_IntrusionAlarm_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Alarms_IntrusionAlarm_g_tc;
}

#define TSeq Alarms_IntrusionAlarmSeq
#define T Alarms_IntrusionAlarm
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Alarms_IntrusionAlarm_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Alarms_IntrusionAlarm_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(Alarms_IntrusionAlarmSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        Alarms_IntrusionAlarmSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Alarms_IntrusionAlarm_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Alarms_IntrusionAlarm_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Alarms_IntrusionAlarm *sample;

    static RTIXCdrMemberAccessInfo Alarms_IntrusionAlarm_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Alarms_IntrusionAlarm_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Alarms_IntrusionAlarm_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Alarms_IntrusionAlarm);
    if (sample == NULL) {
        return NULL;
    }

    Alarms_IntrusionAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coordinate - (char *)sample);

    Alarms_IntrusionAlarm_g_sampleAccessInfo.memberAccessInfos = 
    Alarms_IntrusionAlarm_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Alarms_IntrusionAlarm);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            Alarms_IntrusionAlarm_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            Alarms_IntrusionAlarm_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Alarms_IntrusionAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Alarms_IntrusionAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Alarms_IntrusionAlarm_get_member_value_pointer;

    Alarms_IntrusionAlarm_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Alarms_IntrusionAlarm_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Alarms_IntrusionAlarm_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Alarms_IntrusionAlarm_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Alarms_IntrusionAlarm_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Alarms_IntrusionAlarm_finalize_w_return,
        NULL
    };

    return &Alarms_IntrusionAlarm_g_typePlugin;
}
#endif

RTIBool Alarms_IntrusionAlarm_initialize(
    Alarms_IntrusionAlarm* sample) {
    return Alarms_IntrusionAlarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Alarms_IntrusionAlarm_initialize_ex(
    Alarms_IntrusionAlarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Alarms_IntrusionAlarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool Alarms_IntrusionAlarm_initialize_w_params(
    Alarms_IntrusionAlarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    if (!Alarms_Alarm_initialize_w_params((Alarms_Alarm*)sample,allocParams)) {
        return RTI_FALSE;
    }

    if (!Common_MeasurementCoordinate_t_initialize_w_params(&sample->coordinate,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool Alarms_IntrusionAlarm_finalize_w_return(
    Alarms_IntrusionAlarm* sample)
{
    Alarms_IntrusionAlarm_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Alarms_IntrusionAlarm_finalize(
    Alarms_IntrusionAlarm* sample)
{

    Alarms_IntrusionAlarm_finalize_ex(sample,RTI_TRUE);
}

void Alarms_IntrusionAlarm_finalize_ex(
    Alarms_IntrusionAlarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Alarms_IntrusionAlarm_finalize_w_params(
        sample,&deallocParams);
}

void Alarms_IntrusionAlarm_finalize_w_params(
    Alarms_IntrusionAlarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }
    Alarms_Alarm_finalize_w_params((Alarms_Alarm*)sample,deallocParams);

    Common_MeasurementCoordinate_t_finalize_w_params(&sample->coordinate,deallocParams);

}

void Alarms_IntrusionAlarm_finalize_optional_members(
    Alarms_IntrusionAlarm* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    Alarms_Alarm_finalize_optional_members((Alarms_Alarm*)sample,deletePointers);

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Alarms_IntrusionAlarm_copy(
    Alarms_IntrusionAlarm* dst,
    const Alarms_IntrusionAlarm* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if(!Alarms_Alarm_copy((Alarms_Alarm*)dst,(const Alarms_Alarm*)src)) {
            return RTI_FALSE;
        }

        if (!Common_MeasurementCoordinate_t_copy(
            &dst->coordinate,(const Common_MeasurementCoordinate_t*)&src->coordinate)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Alarms_IntrusionAlarm' sequence class.
*/
#define T Alarms_IntrusionAlarm
#define TSeq Alarms_IntrusionAlarmSeq

#define T_initialize_w_params Alarms_IntrusionAlarm_initialize_w_params

#define T_finalize_w_params   Alarms_IntrusionAlarm_finalize_w_params
#define T_copy       Alarms_IntrusionAlarm_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Common_IdentifierType_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common_IdentifierType_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Common_DateTime_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common_DateTime_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Common_MetaData_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common_MetaData_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Common_MeasurementCoordinate_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common_MeasurementCoordinate_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_ValueDefinition>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_ValueDefinition_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_Alarm>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_Alarm_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_HumidityAlarm>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_HumidityAlarm_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_MotionAlarm>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_MotionAlarm_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_FireAlarm>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_FireAlarm_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Alarms_IntrusionAlarm>::get() 
        {
            return (const RTIXCdrTypeCode *) Alarms_IntrusionAlarm_get_typecode();
        }

    } 
}
#endif
