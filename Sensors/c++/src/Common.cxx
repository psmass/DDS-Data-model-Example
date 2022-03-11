

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Common.idl 
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

#include "Common.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CommonPlugin.h"
#endif

#include <new>

namespace Common {

    /* ========================================================================= */

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * LargeString_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode LargeString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common::MAX_LEN)));

        static DDS_TypeCode LargeString_t_g_tc =
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
            }}; /* Type code for  LargeString_t */

        if (is_initialized) {
            return &LargeString_t_g_tc;
        }

        LargeString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        LargeString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&LargeString_t_g_tc_string;

        /* Initialize the values for member annotations. */
        LargeString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        LargeString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        LargeString_t_g_tc._data._sampleAccessInfo =
        LargeString_t_get_sample_access_info();
        LargeString_t_g_tc._data._typePlugin =
        LargeString_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &LargeString_t_g_tc;
    }

    #define TSeq LargeString_tSeq
    #define T LargeString_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *LargeString_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo LargeString_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(LargeString_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            LargeString_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &LargeString_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *LargeString_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo LargeString_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo LargeString_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &LargeString_t_g_sampleAccessInfo;
        }

        LargeString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        LargeString_t_g_sampleAccessInfo.memberAccessInfos = 
        LargeString_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(LargeString_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                LargeString_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                LargeString_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        LargeString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        LargeString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        LargeString_t_get_member_value_pointer;

        LargeString_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &LargeString_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *LargeString_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin LargeString_t_g_typePlugin = 
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
            Common::LargeString_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::LargeString_t_finalize_w_return,
            NULL
        };

        return &LargeString_t_g_typePlugin;
    }
    #endif

    RTIBool LargeString_t_initialize(
        LargeString_t* sample) {
        return Common::LargeString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool LargeString_t_initialize_ex(
        LargeString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::LargeString_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool LargeString_t_initialize_w_params(
        LargeString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            (*sample) = DDS_String_alloc(((Common::MAX_LEN)));
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common::MAX_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        } else {
            if ((*sample) != NULL) {
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    ((Common::MAX_LEN)),
                    RTI_FALSE);
                if ((*sample) == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool LargeString_t_finalize_w_return(
        LargeString_t* sample)
    {
        Common::LargeString_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void LargeString_t_finalize(
        LargeString_t* sample)
    {

        Common::LargeString_t_finalize_ex(sample,RTI_TRUE);
    }

    void LargeString_t_finalize_ex(
        LargeString_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::LargeString_t_finalize_w_params(
            sample,&deallocParams);
    }

    void LargeString_t_finalize_w_params(
        LargeString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

    void LargeString_t_finalize_optional_members(
        LargeString_t* sample, RTIBool deletePointers)
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

    RTIBool LargeString_t_copy(
        LargeString_t* dst,
        const LargeString_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &(*dst), (*src), 
                ((Common::MAX_LEN)) + 1, RTI_FALSE)){
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
    * Configure and implement 'LargeString_t' sequence class.
    */
    #define T LargeString_t
    #define TSeq LargeString_tSeq

    #define T_initialize_w_params Common::LargeString_t_initialize_w_params

    #define T_finalize_w_params   Common::LargeString_t_finalize_w_params
    #define T_copy       Common::LargeString_t_copy

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
    DDS_TypeCode * MediumString_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode MediumString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common::MED_LEN)));

        static DDS_TypeCode MediumString_t_g_tc =
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
            }}; /* Type code for  MediumString_t */

        if (is_initialized) {
            return &MediumString_t_g_tc;
        }

        MediumString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        MediumString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&MediumString_t_g_tc_string;

        /* Initialize the values for member annotations. */
        MediumString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        MediumString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        MediumString_t_g_tc._data._sampleAccessInfo =
        MediumString_t_get_sample_access_info();
        MediumString_t_g_tc._data._typePlugin =
        MediumString_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &MediumString_t_g_tc;
    }

    #define TSeq MediumString_tSeq
    #define T MediumString_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *MediumString_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo MediumString_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(MediumString_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            MediumString_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &MediumString_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *MediumString_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo MediumString_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo MediumString_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &MediumString_t_g_sampleAccessInfo;
        }

        MediumString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        MediumString_t_g_sampleAccessInfo.memberAccessInfos = 
        MediumString_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(MediumString_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                MediumString_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                MediumString_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        MediumString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        MediumString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        MediumString_t_get_member_value_pointer;

        MediumString_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &MediumString_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *MediumString_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin MediumString_t_g_typePlugin = 
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
            Common::MediumString_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::MediumString_t_finalize_w_return,
            NULL
        };

        return &MediumString_t_g_typePlugin;
    }
    #endif

    RTIBool MediumString_t_initialize(
        MediumString_t* sample) {
        return Common::MediumString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool MediumString_t_initialize_ex(
        MediumString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::MediumString_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool MediumString_t_initialize_w_params(
        MediumString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            (*sample) = DDS_String_alloc(((Common::MED_LEN)));
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common::MED_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        } else {
            if ((*sample) != NULL) {
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    ((Common::MED_LEN)),
                    RTI_FALSE);
                if ((*sample) == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool MediumString_t_finalize_w_return(
        MediumString_t* sample)
    {
        Common::MediumString_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void MediumString_t_finalize(
        MediumString_t* sample)
    {

        Common::MediumString_t_finalize_ex(sample,RTI_TRUE);
    }

    void MediumString_t_finalize_ex(
        MediumString_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::MediumString_t_finalize_w_params(
            sample,&deallocParams);
    }

    void MediumString_t_finalize_w_params(
        MediumString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

    void MediumString_t_finalize_optional_members(
        MediumString_t* sample, RTIBool deletePointers)
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

    RTIBool MediumString_t_copy(
        MediumString_t* dst,
        const MediumString_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &(*dst), (*src), 
                ((Common::MED_LEN)) + 1, RTI_FALSE)){
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
    * Configure and implement 'MediumString_t' sequence class.
    */
    #define T MediumString_t
    #define TSeq MediumString_tSeq

    #define T_initialize_w_params Common::MediumString_t_initialize_w_params

    #define T_finalize_w_params   Common::MediumString_t_finalize_w_params
    #define T_copy       Common::MediumString_t_copy

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
    DDS_TypeCode * ShortString_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode ShortString_t_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(((Common::MIN_LEN)));

        static DDS_TypeCode ShortString_t_g_tc =
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
            }}; /* Type code for  ShortString_t */

        if (is_initialized) {
            return &ShortString_t_g_tc;
        }

        ShortString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        ShortString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&ShortString_t_g_tc_string;

        /* Initialize the values for member annotations. */
        ShortString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        ShortString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        ShortString_t_g_tc._data._sampleAccessInfo =
        ShortString_t_get_sample_access_info();
        ShortString_t_g_tc._data._typePlugin =
        ShortString_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &ShortString_t_g_tc;
    }

    #define TSeq ShortString_tSeq
    #define T ShortString_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *ShortString_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo ShortString_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(ShortString_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            ShortString_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &ShortString_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *ShortString_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo ShortString_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo ShortString_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &ShortString_t_g_sampleAccessInfo;
        }

        ShortString_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        ShortString_t_g_sampleAccessInfo.memberAccessInfos = 
        ShortString_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(ShortString_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                ShortString_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                ShortString_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        ShortString_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        ShortString_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        ShortString_t_get_member_value_pointer;

        ShortString_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &ShortString_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *ShortString_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin ShortString_t_g_typePlugin = 
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
            Common::ShortString_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::ShortString_t_finalize_w_return,
            NULL
        };

        return &ShortString_t_g_typePlugin;
    }
    #endif

    RTIBool ShortString_t_initialize(
        ShortString_t* sample) {
        return Common::ShortString_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ShortString_t_initialize_ex(
        ShortString_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::ShortString_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ShortString_t_initialize_w_params(
        ShortString_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            (*sample) = DDS_String_alloc(((Common::MIN_LEN)));
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common::MIN_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        } else {
            if ((*sample) != NULL) {
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    ((Common::MIN_LEN)),
                    RTI_FALSE);
                if ((*sample) == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool ShortString_t_finalize_w_return(
        ShortString_t* sample)
    {
        Common::ShortString_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void ShortString_t_finalize(
        ShortString_t* sample)
    {

        Common::ShortString_t_finalize_ex(sample,RTI_TRUE);
    }

    void ShortString_t_finalize_ex(
        ShortString_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::ShortString_t_finalize_w_params(
            sample,&deallocParams);
    }

    void ShortString_t_finalize_w_params(
        ShortString_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

    void ShortString_t_finalize_optional_members(
        ShortString_t* sample, RTIBool deletePointers)
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

    RTIBool ShortString_t_copy(
        ShortString_t* dst,
        const ShortString_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &(*dst), (*src), 
                ((Common::MIN_LEN)) + 1, RTI_FALSE)){
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
    * Configure and implement 'ShortString_t' sequence class.
    */
    #define T ShortString_t
    #define TSeq ShortString_tSeq

    #define T_initialize_w_params Common::ShortString_t_initialize_w_params

    #define T_finalize_w_params   Common::ShortString_t_finalize_w_params
    #define T_copy       Common::ShortString_t_copy

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
    DDS_TypeCode * Descriptor_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode Descriptor_t_g_tc =
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
            }}; /* Type code for  Descriptor_t */

        if (is_initialized) {
            return &Descriptor_t_g_tc;
        }

        Descriptor_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        Descriptor_t_g_tc._data._typeCode =  (RTICdrTypeCode *)Common::ShortString_t_get_typecode();

        /* Initialize the values for member annotations. */
        Descriptor_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        Descriptor_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        Descriptor_t_g_tc._data._sampleAccessInfo =
        Descriptor_t_get_sample_access_info();
        Descriptor_t_g_tc._data._typePlugin =
        Descriptor_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Descriptor_t_g_tc;
    }

    #define TSeq Descriptor_tSeq
    #define T Descriptor_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Descriptor_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Descriptor_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(Descriptor_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            Descriptor_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Descriptor_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Descriptor_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Descriptor_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Descriptor_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Descriptor_t_g_sampleAccessInfo;
        }

        Descriptor_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Descriptor_t_g_sampleAccessInfo.memberAccessInfos = 
        Descriptor_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Descriptor_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                Descriptor_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                Descriptor_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Descriptor_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Descriptor_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Descriptor_t_get_member_value_pointer;

        Descriptor_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Descriptor_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Descriptor_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Descriptor_t_g_typePlugin = 
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
            Common::Descriptor_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::Descriptor_t_finalize_w_return,
            NULL
        };

        return &Descriptor_t_g_typePlugin;
    }
    #endif

    RTIBool Descriptor_t_initialize(
        Descriptor_t* sample) {
        return Common::Descriptor_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Descriptor_t_initialize_ex(
        Descriptor_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::Descriptor_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Descriptor_t_initialize_w_params(
        Descriptor_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            (*sample) = DDS_String_alloc(((Common::MIN_LEN)));
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                ((Common::MIN_LEN)),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        } else {
            if ((*sample) != NULL) {
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    ((Common::MIN_LEN)),
                    RTI_FALSE);
                if ((*sample) == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool Descriptor_t_finalize_w_return(
        Descriptor_t* sample)
    {
        Common::Descriptor_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void Descriptor_t_finalize(
        Descriptor_t* sample)
    {

        Common::Descriptor_t_finalize_ex(sample,RTI_TRUE);
    }

    void Descriptor_t_finalize_ex(
        Descriptor_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::Descriptor_t_finalize_w_params(
            sample,&deallocParams);
    }

    void Descriptor_t_finalize_w_params(
        Descriptor_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

    void Descriptor_t_finalize_optional_members(
        Descriptor_t* sample, RTIBool deletePointers)
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

    RTIBool Descriptor_t_copy(
        Descriptor_t* dst,
        const Descriptor_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &(*dst), (*src), 
                ((Common::MIN_LEN)) + 1, RTI_FALSE)){
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
    * Configure and implement 'Descriptor_t' sequence class.
    */
    #define T Descriptor_t
    #define TSeq Descriptor_tSeq

    #define T_initialize_w_params Common::Descriptor_t_initialize_w_params

    #define T_finalize_w_params   Common::Descriptor_t_finalize_w_params
    #define T_copy       Common::Descriptor_t_copy

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
    DDS_TypeCode * Percentage_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode Percentage_t_g_tc =
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
            }}; /* Type code for  Percentage_t */

        if (is_initialized) {
            return &Percentage_t_g_tc;
        }

        Percentage_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        Percentage_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

        /* Initialize the values for member annotations. */
        Percentage_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        Percentage_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
        Percentage_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        Percentage_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        Percentage_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        Percentage_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        Percentage_t_g_tc._data._sampleAccessInfo =
        Percentage_t_get_sample_access_info();
        Percentage_t_g_tc._data._typePlugin =
        Percentage_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Percentage_t_g_tc;
    }

    #define TSeq Percentage_tSeq
    #define T Percentage_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Percentage_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Percentage_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(Percentage_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            Percentage_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Percentage_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Percentage_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Percentage_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Percentage_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Percentage_t_g_sampleAccessInfo;
        }

        Percentage_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Percentage_t_g_sampleAccessInfo.memberAccessInfos = 
        Percentage_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Percentage_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                Percentage_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                Percentage_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Percentage_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Percentage_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Percentage_t_get_member_value_pointer;

        Percentage_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Percentage_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Percentage_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Percentage_t_g_typePlugin = 
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
            Common::Percentage_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::Percentage_t_finalize_w_return,
            NULL
        };

        return &Percentage_t_g_typePlugin;
    }
    #endif

    RTIBool Percentage_t_initialize(
        Percentage_t* sample) {
        return Common::Percentage_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Percentage_t_initialize_ex(
        Percentage_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::Percentage_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Percentage_t_initialize_w_params(
        Percentage_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool Percentage_t_finalize_w_return(
        Percentage_t* sample)
    {
        Common::Percentage_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void Percentage_t_finalize(
        Percentage_t* sample)
    {

        Common::Percentage_t_finalize_ex(sample,RTI_TRUE);
    }

    void Percentage_t_finalize_ex(
        Percentage_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::Percentage_t_finalize_w_params(
            sample,&deallocParams);
    }

    void Percentage_t_finalize_w_params(
        Percentage_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void Percentage_t_finalize_optional_members(
        Percentage_t* sample, RTIBool deletePointers)
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

    RTIBool Percentage_t_copy(
        Percentage_t* dst,
        const Percentage_t* src)
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
    * Configure and implement 'Percentage_t' sequence class.
    */
    #define T Percentage_t
    #define TSeq Percentage_tSeq

    #define T_initialize_w_params Common::Percentage_t_initialize_w_params

    #define T_finalize_w_params   Common::Percentage_t_finalize_w_params
    #define T_copy       Common::Percentage_t_copy

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
    DDS_TypeCode * PressureInPascal_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode PressureInPascal_t_g_tc =
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
            }}; /* Type code for  PressureInPascal_t */

        if (is_initialized) {
            return &PressureInPascal_t_g_tc;
        }

        PressureInPascal_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        PressureInPascal_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

        /* Initialize the values for member annotations. */
        PressureInPascal_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        PressureInPascal_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
        PressureInPascal_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        PressureInPascal_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        PressureInPascal_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        PressureInPascal_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        PressureInPascal_t_g_tc._data._sampleAccessInfo =
        PressureInPascal_t_get_sample_access_info();
        PressureInPascal_t_g_tc._data._typePlugin =
        PressureInPascal_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &PressureInPascal_t_g_tc;
    }

    #define TSeq PressureInPascal_tSeq
    #define T PressureInPascal_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *PressureInPascal_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo PressureInPascal_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(PressureInPascal_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            PressureInPascal_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &PressureInPascal_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *PressureInPascal_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo PressureInPascal_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo PressureInPascal_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &PressureInPascal_t_g_sampleAccessInfo;
        }

        PressureInPascal_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        PressureInPascal_t_g_sampleAccessInfo.memberAccessInfos = 
        PressureInPascal_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(PressureInPascal_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                PressureInPascal_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                PressureInPascal_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        PressureInPascal_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        PressureInPascal_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        PressureInPascal_t_get_member_value_pointer;

        PressureInPascal_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &PressureInPascal_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *PressureInPascal_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin PressureInPascal_t_g_typePlugin = 
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
            Common::PressureInPascal_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::PressureInPascal_t_finalize_w_return,
            NULL
        };

        return &PressureInPascal_t_g_typePlugin;
    }
    #endif

    RTIBool PressureInPascal_t_initialize(
        PressureInPascal_t* sample) {
        return Common::PressureInPascal_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool PressureInPascal_t_initialize_ex(
        PressureInPascal_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::PressureInPascal_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool PressureInPascal_t_initialize_w_params(
        PressureInPascal_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool PressureInPascal_t_finalize_w_return(
        PressureInPascal_t* sample)
    {
        Common::PressureInPascal_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void PressureInPascal_t_finalize(
        PressureInPascal_t* sample)
    {

        Common::PressureInPascal_t_finalize_ex(sample,RTI_TRUE);
    }

    void PressureInPascal_t_finalize_ex(
        PressureInPascal_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::PressureInPascal_t_finalize_w_params(
            sample,&deallocParams);
    }

    void PressureInPascal_t_finalize_w_params(
        PressureInPascal_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void PressureInPascal_t_finalize_optional_members(
        PressureInPascal_t* sample, RTIBool deletePointers)
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

    RTIBool PressureInPascal_t_copy(
        PressureInPascal_t* dst,
        const PressureInPascal_t* src)
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
    * Configure and implement 'PressureInPascal_t' sequence class.
    */
    #define T PressureInPascal_t
    #define TSeq PressureInPascal_tSeq

    #define T_initialize_w_params Common::PressureInPascal_t_initialize_w_params

    #define T_finalize_w_params   Common::PressureInPascal_t_finalize_w_params
    #define T_copy       Common::PressureInPascal_t_copy

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
    DDS_TypeCode * TemperatureInDegreesKelvin_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode TemperatureInDegreesKelvin_t_g_tc =
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
            }}; /* Type code for  TemperatureInDegreesKelvin_t */

        if (is_initialized) {
            return &TemperatureInDegreesKelvin_t_g_tc;
        }

        TemperatureInDegreesKelvin_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        TemperatureInDegreesKelvin_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

        /* Initialize the values for member annotations. */
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        TemperatureInDegreesKelvin_t_g_tc._data._sampleAccessInfo =
        TemperatureInDegreesKelvin_t_get_sample_access_info();
        TemperatureInDegreesKelvin_t_g_tc._data._typePlugin =
        TemperatureInDegreesKelvin_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &TemperatureInDegreesKelvin_t_g_tc;
    }

    #define TSeq TemperatureInDegreesKelvin_tSeq
    #define T TemperatureInDegreesKelvin_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *TemperatureInDegreesKelvin_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo TemperatureInDegreesKelvin_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(TemperatureInDegreesKelvin_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            TemperatureInDegreesKelvin_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &TemperatureInDegreesKelvin_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *TemperatureInDegreesKelvin_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo TemperatureInDegreesKelvin_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo TemperatureInDegreesKelvin_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &TemperatureInDegreesKelvin_t_g_sampleAccessInfo;
        }

        TemperatureInDegreesKelvin_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        TemperatureInDegreesKelvin_t_g_sampleAccessInfo.memberAccessInfos = 
        TemperatureInDegreesKelvin_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(TemperatureInDegreesKelvin_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                TemperatureInDegreesKelvin_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                TemperatureInDegreesKelvin_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        TemperatureInDegreesKelvin_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        TemperatureInDegreesKelvin_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        TemperatureInDegreesKelvin_t_get_member_value_pointer;

        TemperatureInDegreesKelvin_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &TemperatureInDegreesKelvin_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *TemperatureInDegreesKelvin_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin TemperatureInDegreesKelvin_t_g_typePlugin = 
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
            Common::TemperatureInDegreesKelvin_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::TemperatureInDegreesKelvin_t_finalize_w_return,
            NULL
        };

        return &TemperatureInDegreesKelvin_t_g_typePlugin;
    }
    #endif

    RTIBool TemperatureInDegreesKelvin_t_initialize(
        TemperatureInDegreesKelvin_t* sample) {
        return Common::TemperatureInDegreesKelvin_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool TemperatureInDegreesKelvin_t_initialize_ex(
        TemperatureInDegreesKelvin_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::TemperatureInDegreesKelvin_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool TemperatureInDegreesKelvin_t_initialize_w_params(
        TemperatureInDegreesKelvin_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool TemperatureInDegreesKelvin_t_finalize_w_return(
        TemperatureInDegreesKelvin_t* sample)
    {
        Common::TemperatureInDegreesKelvin_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void TemperatureInDegreesKelvin_t_finalize(
        TemperatureInDegreesKelvin_t* sample)
    {

        Common::TemperatureInDegreesKelvin_t_finalize_ex(sample,RTI_TRUE);
    }

    void TemperatureInDegreesKelvin_t_finalize_ex(
        TemperatureInDegreesKelvin_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::TemperatureInDegreesKelvin_t_finalize_w_params(
            sample,&deallocParams);
    }

    void TemperatureInDegreesKelvin_t_finalize_w_params(
        TemperatureInDegreesKelvin_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void TemperatureInDegreesKelvin_t_finalize_optional_members(
        TemperatureInDegreesKelvin_t* sample, RTIBool deletePointers)
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

    RTIBool TemperatureInDegreesKelvin_t_copy(
        TemperatureInDegreesKelvin_t* dst,
        const TemperatureInDegreesKelvin_t* src)
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
    * Configure and implement 'TemperatureInDegreesKelvin_t' sequence class.
    */
    #define T TemperatureInDegreesKelvin_t
    #define TSeq TemperatureInDegreesKelvin_tSeq

    #define T_initialize_w_params Common::TemperatureInDegreesKelvin_t_initialize_w_params

    #define T_finalize_w_params   Common::TemperatureInDegreesKelvin_t_finalize_w_params
    #define T_copy       Common::TemperatureInDegreesKelvin_t_copy

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
    DDS_TypeCode * ConcentrationInMolesPerCubicMetre_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode ConcentrationInMolesPerCubicMetre_t_g_tc =
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
            }}; /* Type code for  ConcentrationInMolesPerCubicMetre_t */

        if (is_initialized) {
            return &ConcentrationInMolesPerCubicMetre_t_g_tc;
        }

        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        ConcentrationInMolesPerCubicMetre_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

        /* Initialize the values for member annotations. */
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._u.float_value = 0.0f;
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        ConcentrationInMolesPerCubicMetre_t_g_tc._data._sampleAccessInfo =
        ConcentrationInMolesPerCubicMetre_t_get_sample_access_info();
        ConcentrationInMolesPerCubicMetre_t_g_tc._data._typePlugin =
        ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &ConcentrationInMolesPerCubicMetre_t_g_tc;
    }

    #define TSeq ConcentrationInMolesPerCubicMetre_tSeq
    #define T ConcentrationInMolesPerCubicMetre_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *ConcentrationInMolesPerCubicMetre_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo ConcentrationInMolesPerCubicMetre_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(ConcentrationInMolesPerCubicMetre_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            ConcentrationInMolesPerCubicMetre_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &ConcentrationInMolesPerCubicMetre_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *ConcentrationInMolesPerCubicMetre_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo;
        }

        ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.memberAccessInfos = 
        ConcentrationInMolesPerCubicMetre_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(ConcentrationInMolesPerCubicMetre_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        ConcentrationInMolesPerCubicMetre_t_get_member_value_pointer;

        ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *ConcentrationInMolesPerCubicMetre_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin ConcentrationInMolesPerCubicMetre_t_g_typePlugin = 
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
            Common::ConcentrationInMolesPerCubicMetre_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::ConcentrationInMolesPerCubicMetre_t_finalize_w_return,
            NULL
        };

        return &ConcentrationInMolesPerCubicMetre_t_g_typePlugin;
    }
    #endif

    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize(
        ConcentrationInMolesPerCubicMetre_t* sample) {
        return Common::ConcentrationInMolesPerCubicMetre_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize_ex(
        ConcentrationInMolesPerCubicMetre_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ConcentrationInMolesPerCubicMetre_t_initialize_w_params(
        ConcentrationInMolesPerCubicMetre_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool ConcentrationInMolesPerCubicMetre_t_finalize_w_return(
        ConcentrationInMolesPerCubicMetre_t* sample)
    {
        Common::ConcentrationInMolesPerCubicMetre_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void ConcentrationInMolesPerCubicMetre_t_finalize(
        ConcentrationInMolesPerCubicMetre_t* sample)
    {

        Common::ConcentrationInMolesPerCubicMetre_t_finalize_ex(sample,RTI_TRUE);
    }

    void ConcentrationInMolesPerCubicMetre_t_finalize_ex(
        ConcentrationInMolesPerCubicMetre_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
            sample,&deallocParams);
    }

    void ConcentrationInMolesPerCubicMetre_t_finalize_w_params(
        ConcentrationInMolesPerCubicMetre_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void ConcentrationInMolesPerCubicMetre_t_finalize_optional_members(
        ConcentrationInMolesPerCubicMetre_t* sample, RTIBool deletePointers)
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

    RTIBool ConcentrationInMolesPerCubicMetre_t_copy(
        ConcentrationInMolesPerCubicMetre_t* dst,
        const ConcentrationInMolesPerCubicMetre_t* src)
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
    * Configure and implement 'ConcentrationInMolesPerCubicMetre_t' sequence class.
    */
    #define T ConcentrationInMolesPerCubicMetre_t
    #define TSeq ConcentrationInMolesPerCubicMetre_tSeq

    #define T_initialize_w_params Common::ConcentrationInMolesPerCubicMetre_t_initialize_w_params

    #define T_finalize_w_params   Common::ConcentrationInMolesPerCubicMetre_t_finalize_w_params
    #define T_copy       Common::ConcentrationInMolesPerCubicMetre_t_copy

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
    DDS_TypeCode * BinaryData_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode BinaryData_t_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(Common::MAX_LEN), NULL,NULL);

        static DDS_TypeCode BinaryData_t_g_tc =
        {{
                DDS_TK_ALIAS, /* Kind*/
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
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
            }}; /* Type code for  BinaryData_t */

        if (is_initialized) {
            return &BinaryData_t_g_tc;
        }

        BinaryData_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        BinaryData_t_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short_w_new;
        BinaryData_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& BinaryData_t_g_tc_array;

        /* Initialize the values for member annotations. */

        BinaryData_t_g_tc._data._sampleAccessInfo =
        BinaryData_t_get_sample_access_info();
        BinaryData_t_g_tc._data._typePlugin =
        BinaryData_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &BinaryData_t_g_tc;
    }

    #define ALIAS_OF_ARRAY

    #define TSeq BinaryData_tSeq
    #define T BinaryData_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    #undef ALIAS_OF_ARRAY

    RTIXCdrSampleAccessInfo *BinaryData_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo BinaryData_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(BinaryData_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            BinaryData_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &BinaryData_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *BinaryData_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo BinaryData_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo BinaryData_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &BinaryData_t_g_sampleAccessInfo;
        }

        BinaryData_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        BinaryData_t_g_sampleAccessInfo.memberAccessInfos = 
        BinaryData_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(BinaryData_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                BinaryData_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                BinaryData_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        BinaryData_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        BinaryData_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        BinaryData_t_get_member_value_pointer;

        BinaryData_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &BinaryData_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *BinaryData_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin BinaryData_t_g_typePlugin = 
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
            Common::BinaryData_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::BinaryData_t_finalize_w_return,
            NULL
        };

        return &BinaryData_t_g_typePlugin;
    }
    #endif

    RTIBool BinaryData_t_initialize(
        BinaryData_t* sample) {
        return Common::BinaryData_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool BinaryData_t_initialize_ex(
        BinaryData_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::BinaryData_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool BinaryData_t_initialize_w_params(
        BinaryData_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initArray(
            (*sample), ((Common::MAX_LEN)), RTI_CDR_SHORT_SIZE)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool BinaryData_t_finalize_w_return(
        BinaryData_t* sample)
    {
        Common::BinaryData_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void BinaryData_t_finalize(
        BinaryData_t* sample)
    {

        Common::BinaryData_t_finalize_ex(sample,RTI_TRUE);
    }

    void BinaryData_t_finalize_ex(
        BinaryData_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::BinaryData_t_finalize_w_params(
            sample,&deallocParams);
    }

    void BinaryData_t_finalize_w_params(
        BinaryData_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void BinaryData_t_finalize_optional_members(
        BinaryData_t* sample, RTIBool deletePointers)
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

    RTIBool BinaryData_t_copy(
        BinaryData_t* dst,
        const BinaryData_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyArray(
                (*dst) ,(*src),((Common::MAX_LEN)), RTI_CDR_SHORT_SIZE)) {
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
    * Configure and implement 'BinaryData_t' sequence class.
    */
    #define T BinaryData_t
    #define TSeq BinaryData_tSeq

    #define T_initialize_w_params Common::BinaryData_t_initialize_w_params

    #define T_finalize_w_params   Common::BinaryData_t_finalize_w_params
    #define T_copy       Common::BinaryData_t_copy

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
    const char *IdentifierType_tTYPENAME = "Common::IdentifierType_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * IdentifierType_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member IdentifierType_t_g_tc_members[2]=
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

        static DDS_TypeCode IdentifierType_t_g_tc =
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
                IdentifierType_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for IdentifierType_t*/

        if (is_initialized) {
            return &IdentifierType_t_g_tc;
        }

        IdentifierType_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        IdentifierType_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
        IdentifierType_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

        /* Initialize the values for member annotations. */
        IdentifierType_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
        IdentifierType_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        IdentifierType_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        IdentifierType_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
        IdentifierType_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        IdentifierType_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        IdentifierType_t_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        IdentifierType_t_g_tc._data._sampleAccessInfo =
        IdentifierType_t_get_sample_access_info();
        IdentifierType_t_g_tc._data._typePlugin =
        IdentifierType_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &IdentifierType_t_g_tc;
    }

    #define TSeq IdentifierType_tSeq
    #define T IdentifierType_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *IdentifierType_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo IdentifierType_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(IdentifierType_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            IdentifierType_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &IdentifierType_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *IdentifierType_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Common::IdentifierType_t *sample;

        static RTIXCdrMemberAccessInfo IdentifierType_t_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo IdentifierType_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &IdentifierType_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Common::IdentifierType_t);
        if (sample == NULL) {
            return NULL;
        }

        IdentifierType_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->resourceId - (char *)sample);

        IdentifierType_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

        IdentifierType_t_g_sampleAccessInfo.memberAccessInfos = 
        IdentifierType_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(IdentifierType_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                IdentifierType_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                IdentifierType_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        IdentifierType_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        IdentifierType_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        IdentifierType_t_get_member_value_pointer;

        IdentifierType_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &IdentifierType_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *IdentifierType_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin IdentifierType_t_g_typePlugin = 
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
            Common::IdentifierType_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::IdentifierType_t_finalize_w_return,
            NULL
        };

        return &IdentifierType_t_g_typePlugin;
    }
    #endif

    RTIBool IdentifierType_t_initialize(
        IdentifierType_t* sample) {
        return Common::IdentifierType_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool IdentifierType_t_initialize_ex(
        IdentifierType_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::IdentifierType_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool IdentifierType_t_initialize_w_params(
        IdentifierType_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        sample->resourceId = 0;

        sample->id = 0;

        return RTI_TRUE;
    }

    RTIBool IdentifierType_t_finalize_w_return(
        IdentifierType_t* sample)
    {
        Common::IdentifierType_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void IdentifierType_t_finalize(
        IdentifierType_t* sample)
    {

        Common::IdentifierType_t_finalize_ex(sample,RTI_TRUE);
    }

    void IdentifierType_t_finalize_ex(
        IdentifierType_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::IdentifierType_t_finalize_w_params(
            sample,&deallocParams);
    }

    void IdentifierType_t_finalize_w_params(
        IdentifierType_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void IdentifierType_t_finalize_optional_members(
        IdentifierType_t* sample, RTIBool deletePointers)
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

    RTIBool IdentifierType_t_copy(
        IdentifierType_t* dst,
        const IdentifierType_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyLong (
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
    * Configure and implement 'IdentifierType_t' sequence class.
    */
    #define T IdentifierType_t
    #define TSeq IdentifierType_tSeq

    #define T_initialize_w_params Common::IdentifierType_t_initialize_w_params

    #define T_finalize_w_params   Common::IdentifierType_t_finalize_w_params
    #define T_copy       Common::IdentifierType_t_copy

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
    DDS_TypeCode * IdentifierList_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode IdentifierList_t_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((Common::MAX_LEN)),NULL);

        static DDS_TypeCode IdentifierList_t_g_tc =
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
            }}; /* Type code for  IdentifierList_t */

        if (is_initialized) {
            return &IdentifierList_t_g_tc;
        }

        IdentifierList_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        IdentifierList_t_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)Common::IdentifierType_t_get_typecode();
        IdentifierList_t_g_tc_sequence._data._sampleAccessInfo = Common::IdentifierType_t_get_sample_seq_access_info();
        IdentifierList_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& IdentifierList_t_g_tc_sequence;

        /* Initialize the values for member annotations. */

        IdentifierList_t_g_tc._data._sampleAccessInfo =
        IdentifierList_t_get_sample_access_info();
        IdentifierList_t_g_tc._data._typePlugin =
        IdentifierList_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &IdentifierList_t_g_tc;
    }

    #define TSeq IdentifierList_tSeq
    #define T IdentifierList_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *IdentifierList_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo IdentifierList_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(IdentifierList_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            IdentifierList_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &IdentifierList_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *IdentifierList_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo IdentifierList_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo IdentifierList_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &IdentifierList_t_g_sampleAccessInfo;
        }

        IdentifierList_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        IdentifierList_t_g_sampleAccessInfo.memberAccessInfos = 
        IdentifierList_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(IdentifierList_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                IdentifierList_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                IdentifierList_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        IdentifierList_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        IdentifierList_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        IdentifierList_t_get_member_value_pointer;

        IdentifierList_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &IdentifierList_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *IdentifierList_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin IdentifierList_t_g_typePlugin = 
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
            Common::IdentifierList_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::IdentifierList_t_finalize_w_return,
            NULL
        };

        return &IdentifierList_t_g_typePlugin;
    }
    #endif

    RTIBool IdentifierList_t_initialize(
        IdentifierList_t* sample) {
        return Common::IdentifierList_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool IdentifierList_t_initialize_ex(
        IdentifierList_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::IdentifierList_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool IdentifierList_t_initialize_w_params(
        IdentifierList_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if(!Common::IdentifierType_tSeq_initialize(sample )){
                return RTI_FALSE;
            };
            if(!Common::IdentifierType_tSeq_set_element_allocation_params(sample ,allocParams)){
                return RTI_FALSE;
            };
            if(!Common::IdentifierType_tSeq_set_absolute_maximum(sample , ((Common::MAX_LEN)))){
                return RTI_FALSE;
            }
            if (!Common::IdentifierType_tSeq_set_maximum(sample, ((Common::MAX_LEN)))) {
                return RTI_FALSE;
            }
        } else { 
            if(!Common::IdentifierType_tSeq_set_length(sample, 0)){
                return RTI_FALSE;
            }    
        }
        return RTI_TRUE;
    }

    RTIBool IdentifierList_t_finalize_w_return(
        IdentifierList_t* sample)
    {
        Common::IdentifierList_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void IdentifierList_t_finalize(
        IdentifierList_t* sample)
    {

        Common::IdentifierList_t_finalize_ex(sample,RTI_TRUE);
    }

    void IdentifierList_t_finalize_ex(
        IdentifierList_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::IdentifierList_t_finalize_w_params(
            sample,&deallocParams);
    }

    void IdentifierList_t_finalize_w_params(
        IdentifierList_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if(!Common::IdentifierType_tSeq_set_element_deallocation_params(
            sample,deallocParams)){
            return; 
        }
        if(!Common::IdentifierType_tSeq_finalize(sample)){
            return;
        }

    }

    void IdentifierList_t_finalize_optional_members(
        IdentifierList_t* sample, RTIBool deletePointers)
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

    RTIBool IdentifierList_t_copy(
        IdentifierList_t* dst,
        const IdentifierList_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!Common::IdentifierType_tSeq_copy(dst ,
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
    * Configure and implement 'IdentifierList_t' sequence class.
    */
    #define T IdentifierList_t
    #define TSeq IdentifierList_tSeq

    #define T_initialize_w_params Common::IdentifierList_t_initialize_w_params

    #define T_finalize_w_params   Common::IdentifierList_t_finalize_w_params
    #define T_copy       Common::IdentifierList_t_copy

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
    const char *DateTime_tTYPENAME = "Common::DateTime_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * DateTime_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DateTime_t_g_tc_members[2]=
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

        static DDS_TypeCode DateTime_t_g_tc =
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
                DateTime_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for DateTime_t*/

        if (is_initialized) {
            return &DateTime_t_g_tc;
        }

        DateTime_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        DateTime_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;
        DateTime_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;

        /* Initialize the values for member annotations. */
        DateTime_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
        DateTime_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
        DateTime_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

        DateTime_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[1]._annotations._defaultValue._u.long_long_value = 0ll;
        DateTime_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[1]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
        DateTime_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
        DateTime_t_g_tc_members[1]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

        DateTime_t_g_tc._data._sampleAccessInfo =
        DateTime_t_get_sample_access_info();
        DateTime_t_g_tc._data._typePlugin =
        DateTime_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DateTime_t_g_tc;
    }

    #define TSeq DateTime_tSeq
    #define T DateTime_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DateTime_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DateTime_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DateTime_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DateTime_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DateTime_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DateTime_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Common::DateTime_t *sample;

        static RTIXCdrMemberAccessInfo DateTime_t_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DateTime_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DateTime_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Common::DateTime_t);
        if (sample == NULL) {
            return NULL;
        }

        DateTime_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->secs - (char *)sample);

        DateTime_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->nsecs - (char *)sample);

        DateTime_t_g_sampleAccessInfo.memberAccessInfos = 
        DateTime_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DateTime_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DateTime_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DateTime_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DateTime_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DateTime_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DateTime_t_get_member_value_pointer;

        DateTime_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DateTime_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DateTime_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DateTime_t_g_typePlugin = 
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
            Common::DateTime_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::DateTime_t_finalize_w_return,
            NULL
        };

        return &DateTime_t_g_typePlugin;
    }
    #endif

    RTIBool DateTime_t_initialize(
        DateTime_t* sample) {
        return Common::DateTime_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DateTime_t_initialize_ex(
        DateTime_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::DateTime_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DateTime_t_initialize_w_params(
        DateTime_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool DateTime_t_finalize_w_return(
        DateTime_t* sample)
    {
        Common::DateTime_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void DateTime_t_finalize(
        DateTime_t* sample)
    {

        Common::DateTime_t_finalize_ex(sample,RTI_TRUE);
    }

    void DateTime_t_finalize_ex(
        DateTime_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::DateTime_t_finalize_w_params(
            sample,&deallocParams);
    }

    void DateTime_t_finalize_w_params(
        DateTime_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void DateTime_t_finalize_optional_members(
        DateTime_t* sample, RTIBool deletePointers)
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

    RTIBool DateTime_t_copy(
        DateTime_t* dst,
        const DateTime_t* src)
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
    * Configure and implement 'DateTime_t' sequence class.
    */
    #define T DateTime_t
    #define TSeq DateTime_tSeq

    #define T_initialize_w_params Common::DateTime_t_initialize_w_params

    #define T_finalize_w_params   Common::DateTime_t_finalize_w_params
    #define T_copy       Common::DateTime_t_copy

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
    const char *MetaData_tTYPENAME = "Common::MetaData_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * MetaData_t_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member MetaData_t_g_tc_members[1]=
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

        static DDS_TypeCode MetaData_t_g_tc =
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
                MetaData_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for MetaData_t*/

        if (is_initialized) {
            return &MetaData_t_g_tc;
        }

        MetaData_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        MetaData_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::DateTime_t_get_typecode();

        /* Initialize the values for member annotations. */

        MetaData_t_g_tc._data._sampleAccessInfo =
        MetaData_t_get_sample_access_info();
        MetaData_t_g_tc._data._typePlugin =
        MetaData_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &MetaData_t_g_tc;
    }

    #define TSeq MetaData_tSeq
    #define T MetaData_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *MetaData_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo MetaData_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(MetaData_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            MetaData_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &MetaData_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *MetaData_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Common::MetaData_t *sample;

        static RTIXCdrMemberAccessInfo MetaData_t_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo MetaData_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &MetaData_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Common::MetaData_t);
        if (sample == NULL) {
            return NULL;
        }

        MetaData_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->timeOfGeneration - (char *)sample);

        MetaData_t_g_sampleAccessInfo.memberAccessInfos = 
        MetaData_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(MetaData_t);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                MetaData_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                MetaData_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        MetaData_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        MetaData_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        MetaData_t_get_member_value_pointer;

        MetaData_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &MetaData_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *MetaData_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin MetaData_t_g_typePlugin = 
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
            Common::MetaData_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Common::MetaData_t_finalize_w_return,
            NULL
        };

        return &MetaData_t_g_typePlugin;
    }
    #endif

    RTIBool MetaData_t_initialize(
        MetaData_t* sample) {
        return Common::MetaData_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool MetaData_t_initialize_ex(
        MetaData_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Common::MetaData_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool MetaData_t_initialize_w_params(
        MetaData_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!Common::DateTime_t_initialize_w_params(&sample->timeOfGeneration,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool MetaData_t_finalize_w_return(
        MetaData_t* sample)
    {
        Common::MetaData_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void MetaData_t_finalize(
        MetaData_t* sample)
    {

        Common::MetaData_t_finalize_ex(sample,RTI_TRUE);
    }

    void MetaData_t_finalize_ex(
        MetaData_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Common::MetaData_t_finalize_w_params(
            sample,&deallocParams);
    }

    void MetaData_t_finalize_w_params(
        MetaData_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        Common::DateTime_t_finalize_w_params(&sample->timeOfGeneration,deallocParams);

    }

    void MetaData_t_finalize_optional_members(
        MetaData_t* sample, RTIBool deletePointers)
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

    RTIBool MetaData_t_copy(
        MetaData_t* dst,
        const MetaData_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!Common::DateTime_t_copy(
                &dst->timeOfGeneration,(const Common::DateTime_t*)&src->timeOfGeneration)) {
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
    * Configure and implement 'MetaData_t' sequence class.
    */
    #define T MetaData_t
    #define TSeq MetaData_tSeq

    #define T_initialize_w_params Common::MetaData_t_initialize_w_params

    #define T_finalize_w_params   Common::MetaData_t_finalize_w_params
    #define T_copy       Common::MetaData_t_copy

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

} /* namespace Common  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Common::IdentifierType_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common::IdentifierType_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Common::DateTime_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common::DateTime_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Common::MetaData_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Common::MetaData_t_get_typecode();
        }

    } 
}
#endif
