

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensor.idl 
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

#include "Sensor.h"

#ifndef NDDS_STANDALONE_TYPE
#include "SensorPlugin.h"
#endif

#include <new>

namespace Sensor {

    namespace Constants {

    } /* namespace Constants  */

    /* ========================================================================= */
    const char *BaseSensorTYPENAME = "Sensor::BaseSensor";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * BaseSensor_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member BaseSensor_g_tc_members[3]=
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
                (char *)"sensorTypeName",/* Member name */
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
                (char *)"metaData",/* Member name */
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
            }
        };

        static DDS_TypeCode BaseSensor_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Sensor::BaseSensor", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                BaseSensor_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for BaseSensor*/

        if (is_initialized) {
            return &BaseSensor_g_tc;
        }

        BaseSensor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        BaseSensor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::IdentifierType_t_get_typecode();
        BaseSensor_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Common::Descriptor_t_get_typecode();
        BaseSensor_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Common::MetaData_t_get_typecode();

        /* Initialize the values for member annotations. */

        BaseSensor_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        BaseSensor_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        BaseSensor_g_tc._data._sampleAccessInfo =
        BaseSensor_get_sample_access_info();
        BaseSensor_g_tc._data._typePlugin =
        BaseSensor_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &BaseSensor_g_tc;
    }

    #define TSeq BaseSensorSeq
    #define T BaseSensor
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *BaseSensor_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo BaseSensor_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(BaseSensorSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            BaseSensorSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &BaseSensor_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *BaseSensor_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Sensor::BaseSensor *sample;

        static RTIXCdrMemberAccessInfo BaseSensor_g_memberAccessInfos[3] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo BaseSensor_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &BaseSensor_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Sensor::BaseSensor);
        if (sample == NULL) {
            return NULL;
        }

        BaseSensor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->sourceId - (char *)sample);

        BaseSensor_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->sensorTypeName - (char *)sample);

        BaseSensor_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->metaData - (char *)sample);

        BaseSensor_g_sampleAccessInfo.memberAccessInfos = 
        BaseSensor_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(BaseSensor);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                BaseSensor_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                BaseSensor_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        BaseSensor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        BaseSensor_g_sampleAccessInfo.getMemberValuePointerFcn = 
        BaseSensor_get_member_value_pointer;

        BaseSensor_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &BaseSensor_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *BaseSensor_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin BaseSensor_g_typePlugin = 
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
            Sensor::BaseSensor_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Sensor::BaseSensor_finalize_w_return,
            NULL
        };

        return &BaseSensor_g_typePlugin;
    }
    #endif

    RTIBool BaseSensor_initialize(
        BaseSensor* sample) {
        return Sensor::BaseSensor_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool BaseSensor_initialize_ex(
        BaseSensor* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Sensor::BaseSensor_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool BaseSensor_initialize_w_params(
        BaseSensor* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!Common::IdentifierType_t_initialize_w_params(&sample->sourceId,
        allocParams)) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            sample->sensorTypeName = DDS_String_alloc(((Common::MIN_LEN)));
            RTICdrType_copyStringEx(
                &sample->sensorTypeName,
                "",
                ((Common::MIN_LEN)),
                RTI_FALSE);
            if (sample->sensorTypeName == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->sensorTypeName != NULL) {
                RTICdrType_copyStringEx(
                    &sample->sensorTypeName,
                    "",
                    ((Common::MIN_LEN)),
                    RTI_FALSE);
                if (sample->sensorTypeName == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (!Common::MetaData_t_initialize_w_params(&sample->metaData,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool BaseSensor_finalize_w_return(
        BaseSensor* sample)
    {
        Sensor::BaseSensor_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void BaseSensor_finalize(
        BaseSensor* sample)
    {

        Sensor::BaseSensor_finalize_ex(sample,RTI_TRUE);
    }

    void BaseSensor_finalize_ex(
        BaseSensor* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Sensor::BaseSensor_finalize_w_params(
            sample,&deallocParams);
    }

    void BaseSensor_finalize_w_params(
        BaseSensor* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        Common::IdentifierType_t_finalize_w_params(&sample->sourceId,deallocParams);

        if (sample->sensorTypeName != NULL) {
            DDS_String_free(sample->sensorTypeName);
            sample->sensorTypeName=NULL;

        }
        Common::MetaData_t_finalize_w_params(&sample->metaData,deallocParams);

    }

    void BaseSensor_finalize_optional_members(
        BaseSensor* sample, RTIBool deletePointers)
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

    RTIBool BaseSensor_copy(
        BaseSensor* dst,
        const BaseSensor* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!Common::IdentifierType_t_copy(
                &dst->sourceId,(const Common::IdentifierType_t*)&src->sourceId)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyStringEx (
                &dst->sensorTypeName, src->sensorTypeName, 
                ((Common::MIN_LEN)) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!Common::MetaData_t_copy(
                &dst->metaData,(const Common::MetaData_t*)&src->metaData)) {
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
    * Configure and implement 'BaseSensor' sequence class.
    */
    #define T BaseSensor
    #define TSeq BaseSensorSeq

    #define T_initialize_w_params Sensor::BaseSensor_initialize_w_params

    #define T_finalize_w_params   Sensor::BaseSensor_finalize_w_params
    #define T_copy       Sensor::BaseSensor_copy

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
    const char *HumiditySensorTYPENAME = "Sensor::HumiditySensor";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * HumiditySensor_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HumiditySensor_g_tc_members[1]=
        {

            {
                (char *)"relativeHumidity",/* Member name */
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
            }
        };

        static DDS_TypeCode HumiditySensor_g_tc =
        {{
                DDS_TK_VALUE, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Sensor::HumiditySensor", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                1, /* Number of members */
                HumiditySensor_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for HumiditySensor*/

        if (is_initialized) {
            return &HumiditySensor_g_tc;
        }

        HumiditySensor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        HumiditySensor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::Percentage_t_get_typecode();

        /* Initialize the values for member annotations. */
        HumiditySensor_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        HumiditySensor_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
        HumiditySensor_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        HumiditySensor_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        HumiditySensor_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        HumiditySensor_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        HumiditySensor_g_tc._data._typeCode = (RTICdrTypeCode *)Sensor::BaseSensor_get_typecode(); /* Base class */

        HumiditySensor_g_tc._data._sampleAccessInfo =
        HumiditySensor_get_sample_access_info();
        HumiditySensor_g_tc._data._typePlugin =
        HumiditySensor_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &HumiditySensor_g_tc;
    }

    #define TSeq HumiditySensorSeq
    #define T HumiditySensor
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *HumiditySensor_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo HumiditySensor_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(HumiditySensorSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            HumiditySensorSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &HumiditySensor_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *HumiditySensor_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Sensor::HumiditySensor *sample;

        static RTIXCdrMemberAccessInfo HumiditySensor_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo HumiditySensor_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &HumiditySensor_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Sensor::HumiditySensor);
        if (sample == NULL) {
            return NULL;
        }

        HumiditySensor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity - (char *)sample);

        HumiditySensor_g_sampleAccessInfo.memberAccessInfos = 
        HumiditySensor_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(HumiditySensor);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                HumiditySensor_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                HumiditySensor_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        HumiditySensor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        HumiditySensor_g_sampleAccessInfo.getMemberValuePointerFcn = 
        HumiditySensor_get_member_value_pointer;

        HumiditySensor_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &HumiditySensor_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *HumiditySensor_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin HumiditySensor_g_typePlugin = 
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
            Sensor::HumiditySensor_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Sensor::HumiditySensor_finalize_w_return,
            NULL
        };

        return &HumiditySensor_g_typePlugin;
    }
    #endif

    RTIBool HumiditySensor_initialize(
        HumiditySensor* sample) {
        return Sensor::HumiditySensor_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HumiditySensor_initialize_ex(
        HumiditySensor* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Sensor::HumiditySensor_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool HumiditySensor_initialize_w_params(
        HumiditySensor* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        if (!Sensor::BaseSensor_initialize_w_params((Sensor::BaseSensor*)sample,allocParams)) {
            return RTI_FALSE;
        }

        sample->relativeHumidity = 0.0f;

        return RTI_TRUE;
    }

    RTIBool HumiditySensor_finalize_w_return(
        HumiditySensor* sample)
    {
        Sensor::HumiditySensor_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void HumiditySensor_finalize(
        HumiditySensor* sample)
    {

        Sensor::HumiditySensor_finalize_ex(sample,RTI_TRUE);
    }

    void HumiditySensor_finalize_ex(
        HumiditySensor* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Sensor::HumiditySensor_finalize_w_params(
            sample,&deallocParams);
    }

    void HumiditySensor_finalize_w_params(
        HumiditySensor* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }
        Sensor::BaseSensor_finalize_w_params((Sensor::BaseSensor*)sample,deallocParams);

    }

    void HumiditySensor_finalize_optional_members(
        HumiditySensor* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        Sensor::BaseSensor_finalize_optional_members((Sensor::BaseSensor*)sample,deletePointers);

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool HumiditySensor_copy(
        HumiditySensor* dst,
        const HumiditySensor* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if(!Sensor::BaseSensor_copy((Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
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
    * Configure and implement 'HumiditySensor' sequence class.
    */
    #define T HumiditySensor
    #define TSeq HumiditySensorSeq

    #define T_initialize_w_params Sensor::HumiditySensor_initialize_w_params

    #define T_finalize_w_params   Sensor::HumiditySensor_finalize_w_params
    #define T_copy       Sensor::HumiditySensor_copy

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
    const char *PressureSensorTYPENAME = "Sensor::PressureSensor";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * PressureSensor_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member PressureSensor_g_tc_members[1]=
        {

            {
                (char *)"pressure",/* Member name */
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
            }
        };

        static DDS_TypeCode PressureSensor_g_tc =
        {{
                DDS_TK_VALUE, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Sensor::PressureSensor", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                1, /* Number of members */
                PressureSensor_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for PressureSensor*/

        if (is_initialized) {
            return &PressureSensor_g_tc;
        }

        PressureSensor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        PressureSensor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::PressureInPascal_t_get_typecode();

        /* Initialize the values for member annotations. */
        PressureSensor_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        PressureSensor_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
        PressureSensor_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        PressureSensor_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        PressureSensor_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        PressureSensor_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        PressureSensor_g_tc._data._typeCode = (RTICdrTypeCode *)Sensor::BaseSensor_get_typecode(); /* Base class */

        PressureSensor_g_tc._data._sampleAccessInfo =
        PressureSensor_get_sample_access_info();
        PressureSensor_g_tc._data._typePlugin =
        PressureSensor_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &PressureSensor_g_tc;
    }

    #define TSeq PressureSensorSeq
    #define T PressureSensor
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *PressureSensor_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo PressureSensor_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(PressureSensorSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            PressureSensorSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &PressureSensor_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *PressureSensor_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Sensor::PressureSensor *sample;

        static RTIXCdrMemberAccessInfo PressureSensor_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo PressureSensor_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &PressureSensor_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Sensor::PressureSensor);
        if (sample == NULL) {
            return NULL;
        }

        PressureSensor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->pressure - (char *)sample);

        PressureSensor_g_sampleAccessInfo.memberAccessInfos = 
        PressureSensor_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(PressureSensor);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                PressureSensor_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                PressureSensor_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        PressureSensor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        PressureSensor_g_sampleAccessInfo.getMemberValuePointerFcn = 
        PressureSensor_get_member_value_pointer;

        PressureSensor_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &PressureSensor_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *PressureSensor_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin PressureSensor_g_typePlugin = 
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
            Sensor::PressureSensor_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Sensor::PressureSensor_finalize_w_return,
            NULL
        };

        return &PressureSensor_g_typePlugin;
    }
    #endif

    RTIBool PressureSensor_initialize(
        PressureSensor* sample) {
        return Sensor::PressureSensor_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool PressureSensor_initialize_ex(
        PressureSensor* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Sensor::PressureSensor_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool PressureSensor_initialize_w_params(
        PressureSensor* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        if (!Sensor::BaseSensor_initialize_w_params((Sensor::BaseSensor*)sample,allocParams)) {
            return RTI_FALSE;
        }

        sample->pressure = 0.0f;

        return RTI_TRUE;
    }

    RTIBool PressureSensor_finalize_w_return(
        PressureSensor* sample)
    {
        Sensor::PressureSensor_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void PressureSensor_finalize(
        PressureSensor* sample)
    {

        Sensor::PressureSensor_finalize_ex(sample,RTI_TRUE);
    }

    void PressureSensor_finalize_ex(
        PressureSensor* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Sensor::PressureSensor_finalize_w_params(
            sample,&deallocParams);
    }

    void PressureSensor_finalize_w_params(
        PressureSensor* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }
        Sensor::BaseSensor_finalize_w_params((Sensor::BaseSensor*)sample,deallocParams);

    }

    void PressureSensor_finalize_optional_members(
        PressureSensor* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        Sensor::BaseSensor_finalize_optional_members((Sensor::BaseSensor*)sample,deletePointers);

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool PressureSensor_copy(
        PressureSensor* dst,
        const PressureSensor* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if(!Sensor::BaseSensor_copy((Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyFloat (
                &dst->pressure, &src->pressure)) { 
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
    * Configure and implement 'PressureSensor' sequence class.
    */
    #define T PressureSensor
    #define TSeq PressureSensorSeq

    #define T_initialize_w_params Sensor::PressureSensor_initialize_w_params

    #define T_finalize_w_params   Sensor::PressureSensor_finalize_w_params
    #define T_copy       Sensor::PressureSensor_copy

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
    const char *TemperatureSensorTYPENAME = "Sensor::TemperatureSensor";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * TemperatureSensor_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member TemperatureSensor_g_tc_members[1]=
        {

            {
                (char *)"temperature",/* Member name */
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
            }
        };

        static DDS_TypeCode TemperatureSensor_g_tc =
        {{
                DDS_TK_VALUE, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Sensor::TemperatureSensor", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                1, /* Number of members */
                TemperatureSensor_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for TemperatureSensor*/

        if (is_initialized) {
            return &TemperatureSensor_g_tc;
        }

        TemperatureSensor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        TemperatureSensor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::TemperatureInDegreesKelvin_t_get_typecode();

        /* Initialize the values for member annotations. */
        TemperatureSensor_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureSensor_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
        TemperatureSensor_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureSensor_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
        TemperatureSensor_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        TemperatureSensor_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        TemperatureSensor_g_tc._data._typeCode = (RTICdrTypeCode *)Sensor::BaseSensor_get_typecode(); /* Base class */

        TemperatureSensor_g_tc._data._sampleAccessInfo =
        TemperatureSensor_get_sample_access_info();
        TemperatureSensor_g_tc._data._typePlugin =
        TemperatureSensor_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &TemperatureSensor_g_tc;
    }

    #define TSeq TemperatureSensorSeq
    #define T TemperatureSensor
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *TemperatureSensor_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo TemperatureSensor_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(TemperatureSensorSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            TemperatureSensorSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &TemperatureSensor_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *TemperatureSensor_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Sensor::TemperatureSensor *sample;

        static RTIXCdrMemberAccessInfo TemperatureSensor_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo TemperatureSensor_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &TemperatureSensor_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Sensor::TemperatureSensor);
        if (sample == NULL) {
            return NULL;
        }

        TemperatureSensor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->temperature - (char *)sample);

        TemperatureSensor_g_sampleAccessInfo.memberAccessInfos = 
        TemperatureSensor_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(TemperatureSensor);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                TemperatureSensor_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                TemperatureSensor_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        TemperatureSensor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        TemperatureSensor_g_sampleAccessInfo.getMemberValuePointerFcn = 
        TemperatureSensor_get_member_value_pointer;

        TemperatureSensor_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &TemperatureSensor_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *TemperatureSensor_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin TemperatureSensor_g_typePlugin = 
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
            Sensor::TemperatureSensor_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Sensor::TemperatureSensor_finalize_w_return,
            NULL
        };

        return &TemperatureSensor_g_typePlugin;
    }
    #endif

    RTIBool TemperatureSensor_initialize(
        TemperatureSensor* sample) {
        return Sensor::TemperatureSensor_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool TemperatureSensor_initialize_ex(
        TemperatureSensor* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Sensor::TemperatureSensor_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool TemperatureSensor_initialize_w_params(
        TemperatureSensor* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        if (!Sensor::BaseSensor_initialize_w_params((Sensor::BaseSensor*)sample,allocParams)) {
            return RTI_FALSE;
        }

        sample->temperature = 0.0f;

        return RTI_TRUE;
    }

    RTIBool TemperatureSensor_finalize_w_return(
        TemperatureSensor* sample)
    {
        Sensor::TemperatureSensor_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void TemperatureSensor_finalize(
        TemperatureSensor* sample)
    {

        Sensor::TemperatureSensor_finalize_ex(sample,RTI_TRUE);
    }

    void TemperatureSensor_finalize_ex(
        TemperatureSensor* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Sensor::TemperatureSensor_finalize_w_params(
            sample,&deallocParams);
    }

    void TemperatureSensor_finalize_w_params(
        TemperatureSensor* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }
        Sensor::BaseSensor_finalize_w_params((Sensor::BaseSensor*)sample,deallocParams);

    }

    void TemperatureSensor_finalize_optional_members(
        TemperatureSensor* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        Sensor::BaseSensor_finalize_optional_members((Sensor::BaseSensor*)sample,deletePointers);

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool TemperatureSensor_copy(
        TemperatureSensor* dst,
        const TemperatureSensor* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if(!Sensor::BaseSensor_copy((Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyFloat (
                &dst->temperature, &src->temperature)) { 
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
    * Configure and implement 'TemperatureSensor' sequence class.
    */
    #define T TemperatureSensor
    #define TSeq TemperatureSensorSeq

    #define T_initialize_w_params Sensor::TemperatureSensor_initialize_w_params

    #define T_finalize_w_params   Sensor::TemperatureSensor_finalize_w_params
    #define T_copy       Sensor::TemperatureSensor_copy

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
    const char *GasSensorTYPENAME = "Sensor::GasSensor";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode * GasSensor_get_typecode(void)
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member GasSensor_g_tc_members[1]=
        {

            {
                (char *)"concentration",/* Member name */
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
            }
        };

        static DDS_TypeCode GasSensor_g_tc =
        {{
                DDS_TK_VALUE, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Sensor::GasSensor", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                1, /* Number of members */
                GasSensor_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for GasSensor*/

        if (is_initialized) {
            return &GasSensor_g_tc;
        }

        GasSensor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        GasSensor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Common::ConcentrationInMolesPerCubicMetre_t_get_typecode();

        /* Initialize the values for member annotations. */
        GasSensor_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
        GasSensor_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
        GasSensor_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
        GasSensor_g_tc_members[0]._annotations._minValue._u.float_value = 0.0f;
        GasSensor_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
        GasSensor_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

        GasSensor_g_tc._data._typeCode = (RTICdrTypeCode *)Sensor::BaseSensor_get_typecode(); /* Base class */

        GasSensor_g_tc._data._sampleAccessInfo =
        GasSensor_get_sample_access_info();
        GasSensor_g_tc._data._typePlugin =
        GasSensor_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &GasSensor_g_tc;
    }

    #define TSeq GasSensorSeq
    #define T GasSensor
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *GasSensor_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo GasSensor_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(GasSensorSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            GasSensorSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &GasSensor_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *GasSensor_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Sensor::GasSensor *sample;

        static RTIXCdrMemberAccessInfo GasSensor_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo GasSensor_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &GasSensor_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Sensor::GasSensor);
        if (sample == NULL) {
            return NULL;
        }

        GasSensor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->concentration - (char *)sample);

        GasSensor_g_sampleAccessInfo.memberAccessInfos = 
        GasSensor_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(GasSensor);

            if (candidateTypeSize > RTIXCdrLong_MAX) {
                GasSensor_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrLong_MAX;
            } else {
                GasSensor_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        GasSensor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        GasSensor_g_sampleAccessInfo.getMemberValuePointerFcn = 
        GasSensor_get_member_value_pointer;

        GasSensor_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &GasSensor_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *GasSensor_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin GasSensor_g_typePlugin = 
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
            Sensor::GasSensor_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Sensor::GasSensor_finalize_w_return,
            NULL
        };

        return &GasSensor_g_typePlugin;
    }
    #endif

    RTIBool GasSensor_initialize(
        GasSensor* sample) {
        return Sensor::GasSensor_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool GasSensor_initialize_ex(
        GasSensor* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Sensor::GasSensor_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool GasSensor_initialize_w_params(
        GasSensor* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        if (!Sensor::BaseSensor_initialize_w_params((Sensor::BaseSensor*)sample,allocParams)) {
            return RTI_FALSE;
        }

        sample->concentration = 0.0f;

        return RTI_TRUE;
    }

    RTIBool GasSensor_finalize_w_return(
        GasSensor* sample)
    {
        Sensor::GasSensor_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void GasSensor_finalize(
        GasSensor* sample)
    {

        Sensor::GasSensor_finalize_ex(sample,RTI_TRUE);
    }

    void GasSensor_finalize_ex(
        GasSensor* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Sensor::GasSensor_finalize_w_params(
            sample,&deallocParams);
    }

    void GasSensor_finalize_w_params(
        GasSensor* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }
        Sensor::BaseSensor_finalize_w_params((Sensor::BaseSensor*)sample,deallocParams);

    }

    void GasSensor_finalize_optional_members(
        GasSensor* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        Sensor::BaseSensor_finalize_optional_members((Sensor::BaseSensor*)sample,deletePointers);

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool GasSensor_copy(
        GasSensor* dst,
        const GasSensor* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if(!Sensor::BaseSensor_copy((Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyFloat (
                &dst->concentration, &src->concentration)) { 
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
    * Configure and implement 'GasSensor' sequence class.
    */
    #define T GasSensor
    #define TSeq GasSensorSeq

    #define T_initialize_w_params Sensor::GasSensor_initialize_w_params

    #define T_finalize_w_params   Sensor::GasSensor_finalize_w_params
    #define T_copy       Sensor::GasSensor_copy

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

} /* namespace Sensor  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Sensor::BaseSensor>::get() 
        {
            return (const RTIXCdrTypeCode *) Sensor::BaseSensor_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Sensor::HumiditySensor>::get() 
        {
            return (const RTIXCdrTypeCode *) Sensor::HumiditySensor_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Sensor::PressureSensor>::get() 
        {
            return (const RTIXCdrTypeCode *) Sensor::PressureSensor_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Sensor::TemperatureSensor>::get() 
        {
            return (const RTIXCdrTypeCode *) Sensor::TemperatureSensor_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Sensor::GasSensor>::get() 
        {
            return (const RTIXCdrTypeCode *) Sensor::GasSensor_get_typecode();
        }

    } 
}
#endif
