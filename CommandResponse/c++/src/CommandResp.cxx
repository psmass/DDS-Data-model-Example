

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl 
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

#include "CommandResp.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CommandRespPlugin.h"
#endif

#include <new>

namespace ExCmdRsp {

    /* ========================================================================= */
    const char *DeviceStateEnumTYPENAME = "ExCmdRsp::DeviceStateEnum";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * DeviceStateEnum_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DeviceStateEnum_g_tc_members[4]=
        {

            {
                (char *)"UNINITIALIZED",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                UNINITIALIZED, 
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
                (char *)"OFF",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                OFF, 
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
                (char *)"ON",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                ON, 
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
                (char *)"ERROR",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                ERROR, 
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

        static DDS_TypeCode DeviceStateEnum_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ExCmdRsp::DeviceStateEnum", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                4, /* Number of members */
                DeviceStateEnum_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for DeviceStateEnum*/

        if (is_initialized) {
            return &DeviceStateEnum_g_tc;
        }

        DeviceStateEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        DeviceStateEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        DeviceStateEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

        DeviceStateEnum_g_tc._data._sampleAccessInfo =
        DeviceStateEnum_get_sample_access_info();
        DeviceStateEnum_g_tc._data._typePlugin =
        DeviceStateEnum_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DeviceStateEnum_g_tc;
    }

    #define TSeq DeviceStateEnumSeq
    #define T DeviceStateEnum
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DeviceStateEnum_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DeviceStateEnum_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DeviceStateEnumSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DeviceStateEnumSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DeviceStateEnum_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DeviceStateEnum_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo DeviceStateEnum_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DeviceStateEnum_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DeviceStateEnum_g_sampleAccessInfo;
        }

        DeviceStateEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        DeviceStateEnum_g_sampleAccessInfo.memberAccessInfos = 
        DeviceStateEnum_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DeviceStateEnum);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DeviceStateEnum_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DeviceStateEnum_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DeviceStateEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DeviceStateEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DeviceStateEnum_get_member_value_pointer;

        DeviceStateEnum_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DeviceStateEnum_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DeviceStateEnum_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DeviceStateEnum_g_typePlugin = 
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
            ExCmdRsp::DeviceStateEnum_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::DeviceStateEnum_finalize_w_return,
            NULL
        };

        return &DeviceStateEnum_g_typePlugin;
    }
    #endif

    RTIBool DeviceStateEnum_initialize(
        DeviceStateEnum* sample) {
        *sample = UNINITIALIZED;
        return RTI_TRUE;
    }

    RTIBool DeviceStateEnum_initialize_ex(
        DeviceStateEnum* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::DeviceStateEnum_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DeviceStateEnum_initialize_w_params(
        DeviceStateEnum* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = UNINITIALIZED;
        return RTI_TRUE;
    }

    RTIBool DeviceStateEnum_finalize_w_return(
        DeviceStateEnum* sample)
    {
        if (sample) {} /* To avoid warnings */

        return RTI_TRUE;
    }

    void DeviceStateEnum_finalize(
        DeviceStateEnum* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void DeviceStateEnum_finalize_ex(
        DeviceStateEnum* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::DeviceStateEnum_finalize_w_params(
            sample,&deallocParams);
    }

    void DeviceStateEnum_finalize_w_params(
        DeviceStateEnum* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void DeviceStateEnum_finalize_optional_members(
        DeviceStateEnum* sample, RTIBool deletePointers)
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

    RTIBool DeviceStateEnum_copy(
        DeviceStateEnum* dst,
        const DeviceStateEnum* src)
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
    * Configure and implement 'DeviceStateEnum' sequence class.
    */
    #define T DeviceStateEnum
    #define TSeq DeviceStateEnumSeq

    #define T_initialize_w_params ExCmdRsp::DeviceStateEnum_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::DeviceStateEnum_finalize_w_params
    #define T_copy       ExCmdRsp::DeviceStateEnum_copy

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
    const char *DeviceIdTYPENAME = "ExCmdRsp::DeviceId";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * DeviceId_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DeviceId_g_tc_members[2]=
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

        static DDS_TypeCode DeviceId_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ExCmdRsp::DeviceId", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                DeviceId_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for DeviceId*/

        if (is_initialized) {
            return &DeviceId_g_tc;
        }

        DeviceId_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        DeviceId_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
        DeviceId_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

        /* Initialize the values for member annotations. */
        DeviceId_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
        DeviceId_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        DeviceId_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        DeviceId_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
        DeviceId_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        DeviceId_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        DeviceId_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        DeviceId_g_tc._data._sampleAccessInfo =
        DeviceId_get_sample_access_info();
        DeviceId_g_tc._data._typePlugin =
        DeviceId_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DeviceId_g_tc;
    }

    #define TSeq DeviceIdSeq
    #define T DeviceId
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DeviceId_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DeviceId_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DeviceIdSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DeviceIdSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DeviceId_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DeviceId_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        ExCmdRsp::DeviceId *sample;

        static RTIXCdrMemberAccessInfo DeviceId_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DeviceId_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DeviceId_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            ExCmdRsp::DeviceId);
        if (sample == NULL) {
            return NULL;
        }

        DeviceId_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->resourceId - (char *)sample);

        DeviceId_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

        DeviceId_g_sampleAccessInfo.memberAccessInfos = 
        DeviceId_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DeviceId);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DeviceId_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DeviceId_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DeviceId_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DeviceId_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DeviceId_get_member_value_pointer;

        DeviceId_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DeviceId_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DeviceId_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DeviceId_g_typePlugin = 
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
            ExCmdRsp::DeviceId_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::DeviceId_finalize_w_return,
            NULL
        };

        return &DeviceId_g_typePlugin;
    }
    #endif

    RTIBool DeviceId_initialize(
        DeviceId* sample) {
        return ExCmdRsp::DeviceId_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DeviceId_initialize_ex(
        DeviceId* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::DeviceId_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DeviceId_initialize_w_params(
        DeviceId* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    RTIBool DeviceId_finalize_w_return(
        DeviceId* sample)
    {
        ExCmdRsp::DeviceId_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void DeviceId_finalize(
        DeviceId* sample)
    {

        ExCmdRsp::DeviceId_finalize_ex(sample,RTI_TRUE);
    }

    void DeviceId_finalize_ex(
        DeviceId* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::DeviceId_finalize_w_params(
            sample,&deallocParams);
    }

    void DeviceId_finalize_w_params(
        DeviceId* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void DeviceId_finalize_optional_members(
        DeviceId* sample, RTIBool deletePointers)
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

    RTIBool DeviceId_copy(
        DeviceId* dst,
        const DeviceId* src)
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
    * Configure and implement 'DeviceId' sequence class.
    */
    #define T DeviceId
    #define TSeq DeviceIdSeq

    #define T_initialize_w_params ExCmdRsp::DeviceId_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::DeviceId_finalize_w_params
    #define T_copy       ExCmdRsp::DeviceId_copy

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
    const char *DeviceConfigurationStuctTYPENAME = "ExCmdRsp::DeviceConfigurationStuct";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * DeviceConfigurationStuct_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode DeviceConfigurationStuct_g_tc_fooName_string = DDS_INITIALIZE_STRING_TYPECODE(((ExCmdRsp::LEN_STR_FOO)));
        static DDS_TypeCode DeviceConfigurationStuct_g_tc_barName_string = DDS_INITIALIZE_STRING_TYPECODE(((ExCmdRsp::LEN_STR_BAR)));

        static DDS_TypeCode_Member DeviceConfigurationStuct_g_tc_members[5]=
        {

            {
                (char *)"stateReq",/* Member name */
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
                (char *)"fooName",/* Member name */
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
                (char *)"fooValue",/* Member name */
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
                (char *)"barName",/* Member name */
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
                (char *)"barValue",/* Member name */
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

        static DDS_TypeCode DeviceConfigurationStuct_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ExCmdRsp::DeviceConfigurationStuct", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                5, /* Number of members */
                DeviceConfigurationStuct_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for DeviceConfigurationStuct*/

        if (is_initialized) {
            return &DeviceConfigurationStuct_g_tc;
        }

        DeviceConfigurationStuct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        DeviceConfigurationStuct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ExCmdRsp::DeviceStateEnum_get_typecode();
        DeviceConfigurationStuct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DeviceConfigurationStuct_g_tc_fooName_string;
        DeviceConfigurationStuct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
        DeviceConfigurationStuct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DeviceConfigurationStuct_g_tc_barName_string;
        DeviceConfigurationStuct_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;

        /* Initialize the values for member annotations. */
        DeviceConfigurationStuct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        DeviceConfigurationStuct_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

        DeviceConfigurationStuct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        DeviceConfigurationStuct_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        DeviceConfigurationStuct_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        DeviceConfigurationStuct_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
        DeviceConfigurationStuct_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        DeviceConfigurationStuct_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        DeviceConfigurationStuct_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        DeviceConfigurationStuct_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        DeviceConfigurationStuct_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        DeviceConfigurationStuct_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        DeviceConfigurationStuct_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
        DeviceConfigurationStuct_g_tc_members[4]._annotations._defaultValue._u.ulong_value = 0u;
        DeviceConfigurationStuct_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
        DeviceConfigurationStuct_g_tc_members[4]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
        DeviceConfigurationStuct_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
        DeviceConfigurationStuct_g_tc_members[4]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

        DeviceConfigurationStuct_g_tc._data._sampleAccessInfo =
        DeviceConfigurationStuct_get_sample_access_info();
        DeviceConfigurationStuct_g_tc._data._typePlugin =
        DeviceConfigurationStuct_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DeviceConfigurationStuct_g_tc;
    }

    #define TSeq DeviceConfigurationStuctSeq
    #define T DeviceConfigurationStuct
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DeviceConfigurationStuct_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DeviceConfigurationStuct_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DeviceConfigurationStuctSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DeviceConfigurationStuctSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DeviceConfigurationStuct_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DeviceConfigurationStuct_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        ExCmdRsp::DeviceConfigurationStuct *sample;

        static RTIXCdrMemberAccessInfo DeviceConfigurationStuct_g_memberAccessInfos[5] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DeviceConfigurationStuct_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DeviceConfigurationStuct_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            ExCmdRsp::DeviceConfigurationStuct);
        if (sample == NULL) {
            return NULL;
        }

        DeviceConfigurationStuct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->stateReq - (char *)sample);

        DeviceConfigurationStuct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->fooName - (char *)sample);

        DeviceConfigurationStuct_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->fooValue - (char *)sample);

        DeviceConfigurationStuct_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->barName - (char *)sample);

        DeviceConfigurationStuct_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->barValue - (char *)sample);

        DeviceConfigurationStuct_g_sampleAccessInfo.memberAccessInfos = 
        DeviceConfigurationStuct_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DeviceConfigurationStuct);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DeviceConfigurationStuct_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DeviceConfigurationStuct_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DeviceConfigurationStuct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DeviceConfigurationStuct_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DeviceConfigurationStuct_get_member_value_pointer;

        DeviceConfigurationStuct_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DeviceConfigurationStuct_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DeviceConfigurationStuct_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DeviceConfigurationStuct_g_typePlugin = 
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
            ExCmdRsp::DeviceConfigurationStuct_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::DeviceConfigurationStuct_finalize_w_return,
            NULL
        };

        return &DeviceConfigurationStuct_g_typePlugin;
    }
    #endif

    RTIBool DeviceConfigurationStuct_initialize(
        DeviceConfigurationStuct* sample) {
        return ExCmdRsp::DeviceConfigurationStuct_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DeviceConfigurationStuct_initialize_ex(
        DeviceConfigurationStuct* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::DeviceConfigurationStuct_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DeviceConfigurationStuct_initialize_w_params(
        DeviceConfigurationStuct* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        sample->stateReq = ExCmdRsp::UNINITIALIZED;

        if (allocParams->allocate_memory) {
            sample->fooName = DDS_String_alloc(((ExCmdRsp::LEN_STR_FOO)));
            RTICdrType_copyStringEx(
                &sample->fooName,
                "",
                ((ExCmdRsp::LEN_STR_FOO)),
                RTI_FALSE);
            if (sample->fooName == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->fooName != NULL) {
                RTICdrType_copyStringEx(
                    &sample->fooName,
                    "",
                    ((ExCmdRsp::LEN_STR_FOO)),
                    RTI_FALSE);
                if (sample->fooName == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        sample->fooValue = 0;

        if (allocParams->allocate_memory) {
            sample->barName = DDS_String_alloc(((ExCmdRsp::LEN_STR_BAR)));
            RTICdrType_copyStringEx(
                &sample->barName,
                "",
                ((ExCmdRsp::LEN_STR_BAR)),
                RTI_FALSE);
            if (sample->barName == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->barName != NULL) {
                RTICdrType_copyStringEx(
                    &sample->barName,
                    "",
                    ((ExCmdRsp::LEN_STR_BAR)),
                    RTI_FALSE);
                if (sample->barName == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        sample->barValue = 0u;

        return RTI_TRUE;
    }

    RTIBool DeviceConfigurationStuct_finalize_w_return(
        DeviceConfigurationStuct* sample)
    {
        ExCmdRsp::DeviceConfigurationStuct_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void DeviceConfigurationStuct_finalize(
        DeviceConfigurationStuct* sample)
    {

        ExCmdRsp::DeviceConfigurationStuct_finalize_ex(sample,RTI_TRUE);
    }

    void DeviceConfigurationStuct_finalize_ex(
        DeviceConfigurationStuct* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::DeviceConfigurationStuct_finalize_w_params(
            sample,&deallocParams);
    }

    void DeviceConfigurationStuct_finalize_w_params(
        DeviceConfigurationStuct* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        ExCmdRsp::DeviceStateEnum_finalize_w_params(&sample->stateReq,deallocParams);

        if (sample->fooName != NULL) {
            DDS_String_free(sample->fooName);
            sample->fooName=NULL;

        }

        if (sample->barName != NULL) {
            DDS_String_free(sample->barName);
            sample->barName=NULL;

        }

    }

    void DeviceConfigurationStuct_finalize_optional_members(
        DeviceConfigurationStuct* sample, RTIBool deletePointers)
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

    RTIBool DeviceConfigurationStuct_copy(
        DeviceConfigurationStuct* dst,
        const DeviceConfigurationStuct* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!ExCmdRsp::DeviceStateEnum_copy(
                &dst->stateReq,(const ExCmdRsp::DeviceStateEnum*)&src->stateReq)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyStringEx (
                &dst->fooName, src->fooName, 
                ((ExCmdRsp::LEN_STR_FOO)) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyLong (
                &dst->fooValue, &src->fooValue)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->barName, src->barName, 
                ((ExCmdRsp::LEN_STR_BAR)) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyUnsignedLong (
                &dst->barValue, &src->barValue)) { 
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
    * Configure and implement 'DeviceConfigurationStuct' sequence class.
    */
    #define T DeviceConfigurationStuct
    #define TSeq DeviceConfigurationStuctSeq

    #define T_initialize_w_params ExCmdRsp::DeviceConfigurationStuct_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::DeviceConfigurationStuct_finalize_w_params
    #define T_copy       ExCmdRsp::DeviceConfigurationStuct_copy

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
    DDS_TypeCode * DeviceConfiguration_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode DeviceConfiguration_g_tc =
        {{
                DDS_TK_ALIAS, /* Kind*/
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Ignored */
                (char *)"ExCmdRsp::DeviceConfiguration", /* Name */
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
            }}; /* Type code for  DeviceConfiguration */

        if (is_initialized) {
            return &DeviceConfiguration_g_tc;
        }

        DeviceConfiguration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        DeviceConfiguration_g_tc._data._typeCode =  (RTICdrTypeCode *)ExCmdRsp::DeviceConfigurationStuct_get_typecode();

        /* Initialize the values for member annotations. */

        DeviceConfiguration_g_tc._data._sampleAccessInfo =
        DeviceConfiguration_get_sample_access_info();
        DeviceConfiguration_g_tc._data._typePlugin =
        DeviceConfiguration_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DeviceConfiguration_g_tc;
    }

    #define TSeq DeviceConfigurationSeq
    #define T DeviceConfiguration
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DeviceConfiguration_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DeviceConfiguration_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DeviceConfigurationSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DeviceConfigurationSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DeviceConfiguration_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DeviceConfiguration_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo DeviceConfiguration_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DeviceConfiguration_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DeviceConfiguration_g_sampleAccessInfo;
        }

        DeviceConfiguration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        DeviceConfiguration_g_sampleAccessInfo.memberAccessInfos = 
        DeviceConfiguration_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DeviceConfiguration);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DeviceConfiguration_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DeviceConfiguration_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DeviceConfiguration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DeviceConfiguration_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DeviceConfiguration_get_member_value_pointer;

        DeviceConfiguration_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DeviceConfiguration_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DeviceConfiguration_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DeviceConfiguration_g_typePlugin = 
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
            ExCmdRsp::DeviceConfiguration_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::DeviceConfiguration_finalize_w_return,
            NULL
        };

        return &DeviceConfiguration_g_typePlugin;
    }
    #endif

    RTIBool DeviceConfiguration_initialize(
        DeviceConfiguration* sample) {
        return ExCmdRsp::DeviceConfiguration_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DeviceConfiguration_initialize_ex(
        DeviceConfiguration* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::DeviceConfiguration_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DeviceConfiguration_initialize_w_params(
        DeviceConfiguration* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!ExCmdRsp::DeviceConfigurationStuct_initialize_w_params(sample,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool DeviceConfiguration_finalize_w_return(
        DeviceConfiguration* sample)
    {
        ExCmdRsp::DeviceConfiguration_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void DeviceConfiguration_finalize(
        DeviceConfiguration* sample)
    {

        ExCmdRsp::DeviceConfiguration_finalize_ex(sample,RTI_TRUE);
    }

    void DeviceConfiguration_finalize_ex(
        DeviceConfiguration* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::DeviceConfiguration_finalize_w_params(
            sample,&deallocParams);
    }

    void DeviceConfiguration_finalize_w_params(
        DeviceConfiguration* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        ExCmdRsp::DeviceConfigurationStuct_finalize_w_params(sample,deallocParams);

    }

    void DeviceConfiguration_finalize_optional_members(
        DeviceConfiguration* sample, RTIBool deletePointers)
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

    RTIBool DeviceConfiguration_copy(
        DeviceConfiguration* dst,
        const DeviceConfiguration* src)
    {
        try {

            if (!ExCmdRsp::DeviceConfigurationStuct_copy(
                dst,(const ExCmdRsp::DeviceConfigurationStuct*)src)) {
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
    * Configure and implement 'DeviceConfiguration' sequence class.
    */
    #define T DeviceConfiguration
    #define TSeq DeviceConfigurationSeq

    #define T_initialize_w_params ExCmdRsp::DeviceConfiguration_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::DeviceConfiguration_finalize_w_params
    #define T_copy       ExCmdRsp::DeviceConfiguration_copy

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
    const char *ConfigureDeviceTYPENAME = "ExCmdRsp::ConfigureDevice";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * ConfigureDevice_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member ConfigureDevice_g_tc_members[2]=
        {

            {
                (char *)"targetDeviceId",/* Member name */
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
                (char *)"deviceConfig",/* Member name */
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

        static DDS_TypeCode ConfigureDevice_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ExCmdRsp::ConfigureDevice", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                ConfigureDevice_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for ConfigureDevice*/

        if (is_initialized) {
            return &ConfigureDevice_g_tc;
        }

        ConfigureDevice_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        ConfigureDevice_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ExCmdRsp::DeviceId_get_typecode();
        ConfigureDevice_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)ExCmdRsp::DeviceConfiguration_get_typecode();

        /* Initialize the values for member annotations. */

        ConfigureDevice_g_tc._data._sampleAccessInfo =
        ConfigureDevice_get_sample_access_info();
        ConfigureDevice_g_tc._data._typePlugin =
        ConfigureDevice_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &ConfigureDevice_g_tc;
    }

    #define TSeq ConfigureDeviceSeq
    #define T ConfigureDevice
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *ConfigureDevice_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo ConfigureDevice_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(ConfigureDeviceSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            ConfigureDeviceSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &ConfigureDevice_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *ConfigureDevice_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        ExCmdRsp::ConfigureDevice *sample;

        static RTIXCdrMemberAccessInfo ConfigureDevice_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo ConfigureDevice_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &ConfigureDevice_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            ExCmdRsp::ConfigureDevice);
        if (sample == NULL) {
            return NULL;
        }

        ConfigureDevice_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->targetDeviceId - (char *)sample);

        ConfigureDevice_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->deviceConfig - (char *)sample);

        ConfigureDevice_g_sampleAccessInfo.memberAccessInfos = 
        ConfigureDevice_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(ConfigureDevice);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                ConfigureDevice_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                ConfigureDevice_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        ConfigureDevice_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        ConfigureDevice_g_sampleAccessInfo.getMemberValuePointerFcn = 
        ConfigureDevice_get_member_value_pointer;

        ConfigureDevice_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &ConfigureDevice_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *ConfigureDevice_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin ConfigureDevice_g_typePlugin = 
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
            ExCmdRsp::ConfigureDevice_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::ConfigureDevice_finalize_w_return,
            NULL
        };

        return &ConfigureDevice_g_typePlugin;
    }
    #endif

    RTIBool ConfigureDevice_initialize(
        ConfigureDevice* sample) {
        return ExCmdRsp::ConfigureDevice_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ConfigureDevice_initialize_ex(
        ConfigureDevice* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::ConfigureDevice_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ConfigureDevice_initialize_w_params(
        ConfigureDevice* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!ExCmdRsp::DeviceId_initialize_w_params(&sample->targetDeviceId,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!ExCmdRsp::DeviceConfigurationStuct_initialize_w_params(&sample->deviceConfig,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool ConfigureDevice_finalize_w_return(
        ConfigureDevice* sample)
    {
        ExCmdRsp::ConfigureDevice_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void ConfigureDevice_finalize(
        ConfigureDevice* sample)
    {

        ExCmdRsp::ConfigureDevice_finalize_ex(sample,RTI_TRUE);
    }

    void ConfigureDevice_finalize_ex(
        ConfigureDevice* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::ConfigureDevice_finalize_w_params(
            sample,&deallocParams);
    }

    void ConfigureDevice_finalize_w_params(
        ConfigureDevice* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        ExCmdRsp::DeviceId_finalize_w_params(&sample->targetDeviceId,deallocParams);

        ExCmdRsp::DeviceConfigurationStuct_finalize_w_params(&sample->deviceConfig,deallocParams);

    }

    void ConfigureDevice_finalize_optional_members(
        ConfigureDevice* sample, RTIBool deletePointers)
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

    RTIBool ConfigureDevice_copy(
        ConfigureDevice* dst,
        const ConfigureDevice* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!ExCmdRsp::DeviceId_copy(
                &dst->targetDeviceId,(const ExCmdRsp::DeviceId*)&src->targetDeviceId)) {
                return RTI_FALSE;
            } 
            if (!ExCmdRsp::DeviceConfigurationStuct_copy(
                &dst->deviceConfig,(const ExCmdRsp::DeviceConfigurationStuct*)&src->deviceConfig)) {
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
    * Configure and implement 'ConfigureDevice' sequence class.
    */
    #define T ConfigureDevice
    #define TSeq ConfigureDeviceSeq

    #define T_initialize_w_params ExCmdRsp::ConfigureDevice_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::ConfigureDevice_finalize_w_params
    #define T_copy       ExCmdRsp::ConfigureDevice_copy

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
    const char *DeviceStateTYPENAME = "ExCmdRsp::DeviceState";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * DeviceState_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DeviceState_g_tc_members[2]=
        {

            {
                (char *)"myDeviceId",/* Member name */
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
                (char *)"state",/* Member name */
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

        static DDS_TypeCode DeviceState_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ExCmdRsp::DeviceState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                DeviceState_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for DeviceState*/

        if (is_initialized) {
            return &DeviceState_g_tc;
        }

        DeviceState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        DeviceState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ExCmdRsp::DeviceId_get_typecode();
        DeviceState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)ExCmdRsp::DeviceStateEnum_get_typecode();

        /* Initialize the values for member annotations. */

        DeviceState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        DeviceState_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

        DeviceState_g_tc._data._sampleAccessInfo =
        DeviceState_get_sample_access_info();
        DeviceState_g_tc._data._typePlugin =
        DeviceState_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &DeviceState_g_tc;
    }

    #define TSeq DeviceStateSeq
    #define T DeviceState
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *DeviceState_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo DeviceState_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(DeviceStateSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            DeviceStateSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &DeviceState_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *DeviceState_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        ExCmdRsp::DeviceState *sample;

        static RTIXCdrMemberAccessInfo DeviceState_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo DeviceState_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &DeviceState_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            ExCmdRsp::DeviceState);
        if (sample == NULL) {
            return NULL;
        }

        DeviceState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->myDeviceId - (char *)sample);

        DeviceState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->state - (char *)sample);

        DeviceState_g_sampleAccessInfo.memberAccessInfos = 
        DeviceState_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(DeviceState);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                DeviceState_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                DeviceState_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        DeviceState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        DeviceState_g_sampleAccessInfo.getMemberValuePointerFcn = 
        DeviceState_get_member_value_pointer;

        DeviceState_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &DeviceState_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *DeviceState_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin DeviceState_g_typePlugin = 
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
            ExCmdRsp::DeviceState_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            ExCmdRsp::DeviceState_finalize_w_return,
            NULL
        };

        return &DeviceState_g_typePlugin;
    }
    #endif

    RTIBool DeviceState_initialize(
        DeviceState* sample) {
        return ExCmdRsp::DeviceState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DeviceState_initialize_ex(
        DeviceState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ExCmdRsp::DeviceState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DeviceState_initialize_w_params(
        DeviceState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!ExCmdRsp::DeviceId_initialize_w_params(&sample->myDeviceId,
        allocParams)) {
            return RTI_FALSE;
        }
        sample->state = ExCmdRsp::UNINITIALIZED;
        return RTI_TRUE;
    }

    RTIBool DeviceState_finalize_w_return(
        DeviceState* sample)
    {
        ExCmdRsp::DeviceState_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void DeviceState_finalize(
        DeviceState* sample)
    {

        ExCmdRsp::DeviceState_finalize_ex(sample,RTI_TRUE);
    }

    void DeviceState_finalize_ex(
        DeviceState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ExCmdRsp::DeviceState_finalize_w_params(
            sample,&deallocParams);
    }

    void DeviceState_finalize_w_params(
        DeviceState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        ExCmdRsp::DeviceId_finalize_w_params(&sample->myDeviceId,deallocParams);

        ExCmdRsp::DeviceStateEnum_finalize_w_params(&sample->state,deallocParams);

    }

    void DeviceState_finalize_optional_members(
        DeviceState* sample, RTIBool deletePointers)
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

    RTIBool DeviceState_copy(
        DeviceState* dst,
        const DeviceState* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!ExCmdRsp::DeviceId_copy(
                &dst->myDeviceId,(const ExCmdRsp::DeviceId*)&src->myDeviceId)) {
                return RTI_FALSE;
            } 
            if (!ExCmdRsp::DeviceStateEnum_copy(
                &dst->state,(const ExCmdRsp::DeviceStateEnum*)&src->state)) {
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
    * Configure and implement 'DeviceState' sequence class.
    */
    #define T DeviceState
    #define TSeq DeviceStateSeq

    #define T_initialize_w_params ExCmdRsp::DeviceState_initialize_w_params

    #define T_finalize_w_params   ExCmdRsp::DeviceState_finalize_w_params
    #define T_copy       ExCmdRsp::DeviceState_copy

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

} /* namespace ExCmdRsp  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<ExCmdRsp::DeviceId>::get() 
        {
            return (const RTIXCdrTypeCode *) ExCmdRsp::DeviceId_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<ExCmdRsp::DeviceConfigurationStuct>::get() 
        {
            return (const RTIXCdrTypeCode *) ExCmdRsp::DeviceConfigurationStuct_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<ExCmdRsp::ConfigureDevice>::get() 
        {
            return (const RTIXCdrTypeCode *) ExCmdRsp::ConfigureDevice_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<ExCmdRsp::DeviceState>::get() 
        {
            return (const RTIXCdrTypeCode *) ExCmdRsp::DeviceState_get_typecode();
        }

    } 
}
#endif
