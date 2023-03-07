
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "CommandRespPlugin.h"

namespace ExCmdRsp {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    unsigned int 
    DeviceStateEnumPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void DeviceStateEnumPluginSupport_print_data(
        const DeviceStateEnum *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILogParamString_printPlain("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "DeviceStateEnum", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type DeviceId
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    DeviceId*
    DeviceIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        DeviceId *sample = NULL;

        if (alloc_params == NULL) {
            return NULL;
        }

        sample = new (std::nothrow) DeviceId();
        if (sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceId_initialize_w_params(sample,alloc_params)) {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
            deallocParams.delete_pointers = alloc_params->allocate_pointers;
            deallocParams.delete_optional_members = alloc_params->allocate_pointers;
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            allocation fails. But if the allocation fails then sample == null and
            the method will return before reach this point.*/
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceId_finalize_w_params(sample, &deallocParams);
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    DeviceId *
    DeviceIdPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        DeviceId *sample = NULL;

        sample = new (std::nothrow) DeviceId();

        if(sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceId_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            new fails. But if new fails then sample == null and the method will
            return before reach this point. */
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceId_finalize_ex(sample, RTI_TRUE);
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    DeviceId *
    DeviceIdPluginSupport_create_data(void)
    {
        return ExCmdRsp::DeviceIdPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    DeviceIdPluginSupport_destroy_data_w_params(
        DeviceId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        ExCmdRsp::DeviceId_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    DeviceIdPluginSupport_destroy_data_ex(
        DeviceId *sample,RTIBool deallocate_pointers) {
        ExCmdRsp::DeviceId_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    DeviceIdPluginSupport_destroy_data(
        DeviceId *sample) {

        ExCmdRsp::DeviceIdPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    DeviceIdPluginSupport_copy_data(
        DeviceId *dst,
        const DeviceId *src)
    {
        return ExCmdRsp::DeviceId_copy(dst,(const DeviceId*) src);
    }

    void 
    DeviceIdPluginSupport_print_data(
        const DeviceId *sample,
        const char *desc,
        unsigned int indent_level)
    {

        RTICdrType_printIndent(indent_level);

        if (desc != NULL) {
            RTILogParamString_printPlain("%s:\n", desc);
        } else {
            RTILogParamString_printPlain("\n");
        }

        if (sample == NULL) {
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        RTICdrType_printLong(
            &sample->resourceId, "resourceId", indent_level + 1);    

        RTICdrType_printLong(
            &sample->id, "id", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    DeviceIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceId *dst,
        const DeviceId *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return ExCmdRsp::DeviceIdPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    DeviceIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    DeviceIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceId *sample,
        DDS_DataRepresentationId_t representation)
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;

        if (length == NULL) {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceId_get_typecode();
        pd.programs = DeviceIdPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *) plugin.typeCode,
            representation);    
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        DeviceIdPlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            PRESTypePlugin_interpretedGetSerializedSampleSize(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }

    RTIBool
    DeviceIdPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const DeviceId *sample)
    {
        return DeviceIdPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    DeviceIdPlugin_deserialize_from_cdr_buffer(
        DeviceId *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePluginDefaultParticipantData pd;
        struct PRESTypePlugin plugin;

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceId_get_typecode();
        pd.programs = DeviceIdPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        DeviceId_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    DeviceIdPlugin_data_to_string(
        const DeviceId *sample,
        char *_str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property)
    {
        DDS_DynamicData *data = NULL;
        char *buffer = NULL;
        unsigned int length = 0;
        struct DDS_PrintFormat printFormat;
        DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

        if (sample == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (str_size == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (property == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }
        if (!DeviceIdPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!DeviceIdPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            DeviceId_get_typecode(), 
            &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
        if (data == NULL) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_PrintFormatProperty_to_print_format(
            property, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_DynamicDataFormatter_to_string_w_format(
            data, 
            _str,
            str_size, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return DDS_RETCODE_OK;
    }
    #endif

    unsigned int 
    DeviceIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    DeviceIdPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool DeviceIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceId **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        return result;    

    }

    unsigned int
    DeviceIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int
    DeviceIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    struct RTIXCdrInterpreterPrograms * DeviceIdPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        DeviceId, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type DeviceConfigurationStuct
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    DeviceConfigurationStuct*
    DeviceConfigurationStuctPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        DeviceConfigurationStuct *sample = NULL;

        if (alloc_params == NULL) {
            return NULL;
        }

        sample = new (std::nothrow) DeviceConfigurationStuct();
        if (sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceConfigurationStuct_initialize_w_params(sample,alloc_params)) {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
            deallocParams.delete_pointers = alloc_params->allocate_pointers;
            deallocParams.delete_optional_members = alloc_params->allocate_pointers;
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            allocation fails. But if the allocation fails then sample == null and
            the method will return before reach this point.*/
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceConfigurationStuct_finalize_w_params(sample, &deallocParams);
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    DeviceConfigurationStuct *
    DeviceConfigurationStuctPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        DeviceConfigurationStuct *sample = NULL;

        sample = new (std::nothrow) DeviceConfigurationStuct();

        if(sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceConfigurationStuct_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            new fails. But if new fails then sample == null and the method will
            return before reach this point. */
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceConfigurationStuct_finalize_ex(sample, RTI_TRUE);
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    DeviceConfigurationStuct *
    DeviceConfigurationStuctPluginSupport_create_data(void)
    {
        return ExCmdRsp::DeviceConfigurationStuctPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    DeviceConfigurationStuctPluginSupport_destroy_data_w_params(
        DeviceConfigurationStuct *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        ExCmdRsp::DeviceConfigurationStuct_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    DeviceConfigurationStuctPluginSupport_destroy_data_ex(
        DeviceConfigurationStuct *sample,RTIBool deallocate_pointers) {
        ExCmdRsp::DeviceConfigurationStuct_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    DeviceConfigurationStuctPluginSupport_destroy_data(
        DeviceConfigurationStuct *sample) {

        ExCmdRsp::DeviceConfigurationStuctPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    DeviceConfigurationStuctPluginSupport_copy_data(
        DeviceConfigurationStuct *dst,
        const DeviceConfigurationStuct *src)
    {
        return ExCmdRsp::DeviceConfigurationStuct_copy(dst,(const DeviceConfigurationStuct*) src);
    }

    void 
    DeviceConfigurationStuctPluginSupport_print_data(
        const DeviceConfigurationStuct *sample,
        const char *desc,
        unsigned int indent_level)
    {

        RTICdrType_printIndent(indent_level);

        if (desc != NULL) {
            RTILogParamString_printPlain("%s:\n", desc);
        } else {
            RTILogParamString_printPlain("\n");
        }

        if (sample == NULL) {
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        ExCmdRsp::DeviceStateEnumPluginSupport_print_data(
            (const ExCmdRsp::DeviceStateEnum*) &sample->stateReq, "stateReq", indent_level + 1);

        if (sample->fooName==NULL) {
            RTICdrType_printString(
                NULL,"fooName", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->fooName,"fooName", indent_level + 1);    
        }

        RTICdrType_printLong(
            &sample->fooValue, "fooValue", indent_level + 1);    

        if (sample->barName==NULL) {
            RTICdrType_printString(
                NULL,"barName", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->barName,"barName", indent_level + 1);    
        }

        RTICdrType_printUnsignedLong(
            &sample->barValue, "barValue", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    DeviceConfigurationStuctPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigurationStuct *dst,
        const DeviceConfigurationStuct *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return ExCmdRsp::DeviceConfigurationStuctPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    DeviceConfigurationStuctPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceConfigurationStuct *sample,
        DDS_DataRepresentationId_t representation)
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;

        if (length == NULL) {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceConfigurationStuct_get_typecode();
        pd.programs = DeviceConfigurationStuctPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *) plugin.typeCode,
            representation);    
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        DeviceConfigurationStuctPlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            PRESTypePlugin_interpretedGetSerializedSampleSize(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }

    RTIBool
    DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const DeviceConfigurationStuct *sample)
    {
        return DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    DeviceConfigurationStuctPlugin_deserialize_from_cdr_buffer(
        DeviceConfigurationStuct *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePluginDefaultParticipantData pd;
        struct PRESTypePlugin plugin;

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceConfigurationStuct_get_typecode();
        pd.programs = DeviceConfigurationStuctPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        DeviceConfigurationStuct_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    DeviceConfigurationStuctPlugin_data_to_string(
        const DeviceConfigurationStuct *sample,
        char *_str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property)
    {
        DDS_DynamicData *data = NULL;
        char *buffer = NULL;
        unsigned int length = 0;
        struct DDS_PrintFormat printFormat;
        DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

        if (sample == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (str_size == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (property == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }
        if (!DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!DeviceConfigurationStuctPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            DeviceConfigurationStuct_get_typecode(), 
            &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
        if (data == NULL) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_PrintFormatProperty_to_print_format(
            property, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_DynamicDataFormatter_to_string_w_format(
            data, 
            _str,
            str_size, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return DDS_RETCODE_OK;
    }
    #endif

    unsigned int 
    DeviceConfigurationStuctPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    DeviceConfigurationStuctPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool DeviceConfigurationStuctPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigurationStuct **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        return result;    

    }

    unsigned int
    DeviceConfigurationStuctPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int
    DeviceConfigurationStuctPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    struct RTIXCdrInterpreterPrograms * DeviceConfigurationStuctPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        DeviceConfigurationStuct, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type DeviceConfiguration
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    DeviceConfiguration*
    DeviceConfigurationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        DeviceConfiguration *sample = NULL;

        if (alloc_params == NULL) {
            return NULL;
        }

        sample = new (std::nothrow) DeviceConfiguration();
        if (sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceConfiguration_initialize_w_params(sample,alloc_params)) {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
            deallocParams.delete_pointers = alloc_params->allocate_pointers;
            deallocParams.delete_optional_members = alloc_params->allocate_pointers;
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            allocation fails. But if the allocation fails then sample == null and
            the method will return before reach this point.*/
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceConfiguration_finalize_w_params(sample, &deallocParams);
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    DeviceConfiguration *
    DeviceConfigurationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        DeviceConfiguration *sample = NULL;

        sample = new (std::nothrow) DeviceConfiguration();

        if(sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceConfiguration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            new fails. But if new fails then sample == null and the method will
            return before reach this point. */
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceConfiguration_finalize_ex(sample, RTI_TRUE);
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    DeviceConfiguration *
    DeviceConfigurationPluginSupport_create_data(void)
    {
        return ExCmdRsp::DeviceConfigurationPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    DeviceConfigurationPluginSupport_destroy_data_w_params(
        DeviceConfiguration *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        ExCmdRsp::DeviceConfiguration_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    DeviceConfigurationPluginSupport_destroy_data_ex(
        DeviceConfiguration *sample,RTIBool deallocate_pointers) {
        ExCmdRsp::DeviceConfiguration_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    DeviceConfigurationPluginSupport_destroy_data(
        DeviceConfiguration *sample) {

        ExCmdRsp::DeviceConfigurationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    DeviceConfigurationPluginSupport_copy_data(
        DeviceConfiguration *dst,
        const DeviceConfiguration *src)
    {
        return ExCmdRsp::DeviceConfiguration_copy(dst,(const DeviceConfiguration*) src);
    }

    void 
    DeviceConfigurationPluginSupport_print_data(
        const DeviceConfiguration *sample,
        const char *desc,
        unsigned int indent_level)
    {

        RTICdrType_printIndent(indent_level);

        if (desc != NULL) {
            RTILogParamString_printPlain("%s:\n", desc);
        } else {
            RTILogParamString_printPlain("\n");
        }

        if (sample == NULL) {
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        ExCmdRsp::DeviceConfigurationStuctPluginSupport_print_data(
            (const ExCmdRsp::DeviceConfigurationStuct*) sample, "", indent_level + 1);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    DeviceConfigurationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfiguration *dst,
        const DeviceConfiguration *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return ExCmdRsp::DeviceConfigurationPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    DeviceConfigurationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    DeviceConfigurationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    DeviceConfigurationPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    DeviceConfigurationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int
    DeviceConfigurationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type ConfigureDevice
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    ConfigureDevice*
    ConfigureDevicePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        ConfigureDevice *sample = NULL;

        if (alloc_params == NULL) {
            return NULL;
        }

        sample = new (std::nothrow) ConfigureDevice();
        if (sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::ConfigureDevice_initialize_w_params(sample,alloc_params)) {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
            deallocParams.delete_pointers = alloc_params->allocate_pointers;
            deallocParams.delete_optional_members = alloc_params->allocate_pointers;
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            allocation fails. But if the allocation fails then sample == null and
            the method will return before reach this point.*/
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::ConfigureDevice_finalize_w_params(sample, &deallocParams);
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    ConfigureDevice *
    ConfigureDevicePluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        ConfigureDevice *sample = NULL;

        sample = new (std::nothrow) ConfigureDevice();

        if(sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::ConfigureDevice_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            new fails. But if new fails then sample == null and the method will
            return before reach this point. */
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::ConfigureDevice_finalize_ex(sample, RTI_TRUE);
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    ConfigureDevice *
    ConfigureDevicePluginSupport_create_data(void)
    {
        return ExCmdRsp::ConfigureDevicePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    ConfigureDevicePluginSupport_destroy_data_w_params(
        ConfigureDevice *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        ExCmdRsp::ConfigureDevice_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    ConfigureDevicePluginSupport_destroy_data_ex(
        ConfigureDevice *sample,RTIBool deallocate_pointers) {
        ExCmdRsp::ConfigureDevice_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    ConfigureDevicePluginSupport_destroy_data(
        ConfigureDevice *sample) {

        ExCmdRsp::ConfigureDevicePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    ConfigureDevicePluginSupport_copy_data(
        ConfigureDevice *dst,
        const ConfigureDevice *src)
    {
        return ExCmdRsp::ConfigureDevice_copy(dst,(const ConfigureDevice*) src);
    }

    void 
    ConfigureDevicePluginSupport_print_data(
        const ConfigureDevice *sample,
        const char *desc,
        unsigned int indent_level)
    {

        RTICdrType_printIndent(indent_level);

        if (desc != NULL) {
            RTILogParamString_printPlain("%s:\n", desc);
        } else {
            RTILogParamString_printPlain("\n");
        }

        if (sample == NULL) {
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        ExCmdRsp::DeviceIdPluginSupport_print_data(
            (const ExCmdRsp::DeviceId*) &sample->targetDeviceId, "targetDeviceId", indent_level + 1);

        ExCmdRsp::DeviceConfigurationStuctPluginSupport_print_data(
            (const ExCmdRsp::DeviceConfigurationStuct*) &sample->deviceConfig, "deviceConfig", indent_level + 1);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    ConfigureDevicePlugin_on_participant_attached(
        void *registration_data,
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration,
        void *container_plugin_context,
        RTICdrTypeCode *type_code)
    {
        struct RTIXCdrInterpreterPrograms *programs = NULL;
        struct PRESTypePluginDefaultParticipantData *pd = NULL;
        struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

        if (registration_data) {} /* To avoid warnings */
        if (participant_info) {} /* To avoid warnings */
        if (top_level_registration) {} /* To avoid warnings */
        if (container_plugin_context) {} /* To avoid warnings */
        if (type_code) {} /* To avoid warnings */

        pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

        programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
        programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
        programProperty.resolveAlias = RTI_XCDR_TRUE;
        programProperty.inlineStruct = RTI_XCDR_TRUE;
        programProperty.optimizeEnum = RTI_XCDR_TRUE;
        programProperty.unboundedSize = RTIXCdrLong_MAX;

        programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
            DDS_TypeCodeFactory_get_instance(),
            ConfigureDevice_get_typecode(),
            &programProperty,
            RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
        if (programs == NULL) {
            PRESTypePluginDefaultParticipantData_delete(
                (PRESTypePluginParticipantData) pd);
            return NULL;
        }

        pd->programs = programs;
        return (PRESTypePluginParticipantData)pd;
    }

    void 
    ConfigureDevicePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {  		
        if (participant_data != NULL) {
            struct PRESTypePluginDefaultParticipantData *pd = 
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

            if (pd->programs != NULL) {
                DDS_TypeCodeFactory_remove_programs_from_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    pd->programs);
                pd->programs = NULL;
            }
            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }
    }

    PRESTypePluginEndpointData
    ConfigureDevicePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *containerPluginContext)
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration) {} /* To avoid warnings */
        if (containerPluginContext) {} /* To avoid warnings */

        if (participant_data == NULL) {
            return NULL;
        } 

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ExCmdRsp::ConfigureDevicePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ExCmdRsp::ConfigureDevicePluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = ExCmdRsp::ConfigureDevicePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ExCmdRsp::ConfigureDevicePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    ConfigureDevicePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    ConfigureDevicePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice *sample,
        void *handle)
    {
        ConfigureDevice_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    ConfigureDevicePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice *dst,
        const ConfigureDevice *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return ExCmdRsp::ConfigureDevicePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    ConfigureDevicePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    ConfigureDevicePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ConfigureDevice *sample,
        DDS_DataRepresentationId_t representation)
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;

        if (length == NULL) {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        ConfigureDevice_get_typecode();
        pd.programs = ConfigureDevicePlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *) plugin.typeCode,
            representation);    
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        ConfigureDevicePlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            PRESTypePlugin_interpretedGetSerializedSampleSize(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }

    RTIBool
    ConfigureDevicePlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const ConfigureDevice *sample)
    {
        return ConfigureDevicePlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    ConfigureDevicePlugin_deserialize_from_cdr_buffer(
        ConfigureDevice *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePluginDefaultParticipantData pd;
        struct PRESTypePlugin plugin;

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        ConfigureDevice_get_typecode();
        pd.programs = ConfigureDevicePlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        ConfigureDevice_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    ConfigureDevicePlugin_data_to_string(
        const ConfigureDevice *sample,
        char *_str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property)
    {
        DDS_DynamicData *data = NULL;
        char *buffer = NULL;
        unsigned int length = 0;
        struct DDS_PrintFormat printFormat;
        DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

        if (sample == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (str_size == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (property == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }
        if (!ConfigureDevicePlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!ConfigureDevicePlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            ConfigureDevice_get_typecode(), 
            &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
        if (data == NULL) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_PrintFormatProperty_to_print_format(
            property, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_DynamicDataFormatter_to_string_w_format(
            data, 
            _str,
            str_size, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return DDS_RETCODE_OK;
    }
    #endif

    unsigned int 
    ConfigureDevicePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    ConfigureDevicePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool ConfigureDevicePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ConfigureDevice **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        return result;    

    }

    unsigned int
    ConfigureDevicePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int
    ConfigureDevicePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    struct RTIXCdrInterpreterPrograms * ConfigureDevicePlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        ConfigureDevice, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *ConfigureDevicePlugin_new(void) 
    { 
        struct PRESTypePlugin *plugin = NULL;
        const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

        RTIOsapiHeap_allocateStructure(
            &plugin, struct PRESTypePlugin);

        if (plugin == NULL) {
            return NULL;
        }

        plugin->version = PLUGIN_VERSION;

        /* set up parent's function pointers */
        plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ExCmdRsp::ConfigureDevicePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ExCmdRsp::ConfigureDevicePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ExCmdRsp::ConfigureDevicePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ExCmdRsp::ConfigureDevicePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ExCmdRsp::ConfigureDevicePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        ConfigureDevicePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        ConfigureDevicePlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        ConfigureDevice_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ExCmdRsp::ConfigureDevicePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        ConfigureDevicePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        ConfigureDevicePlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ExCmdRsp::ConfigureDevicePlugin_get_key_kind;

        /* These functions are only used for keyed types. As this is not a keyed
        type they are all set to NULL
        */
        plugin->serializeKeyFnc = NULL ;    
        plugin->deserializeKeyFnc = NULL;  
        plugin->getKeyFnc = NULL;
        plugin->returnKeyFnc = NULL;
        plugin->instanceToKeyFnc = NULL;
        plugin->keyToInstanceFnc = NULL;
        plugin->getSerializedKeyMaxSizeFnc = NULL;
        plugin->instanceToKeyHashFnc = NULL;
        plugin->serializedSampleToKeyHashFnc = NULL;
        plugin->serializedKeyToKeyHashFnc = NULL;    
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)ExCmdRsp::ConfigureDevice_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        ConfigureDevicePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        ConfigureDevicePlugin_return_buffer;
        plugin->getBufferWithParams = NULL;
        plugin->returnBufferWithParams = NULL;  
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleSize;

        plugin->getWriterLoanedSampleFnc = NULL; 
        plugin->returnWriterLoanedSampleFnc = NULL;
        plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
        plugin->validateWriterLoanedSampleFnc = NULL;
        plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

        plugin->endpointTypeName = ConfigureDeviceTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    ConfigureDevicePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type DeviceState
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    DeviceState*
    DeviceStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        DeviceState *sample = NULL;

        if (alloc_params == NULL) {
            return NULL;
        }

        sample = new (std::nothrow) DeviceState();
        if (sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceState_initialize_w_params(sample,alloc_params)) {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
            deallocParams.delete_pointers = alloc_params->allocate_pointers;
            deallocParams.delete_optional_members = alloc_params->allocate_pointers;
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            allocation fails. But if the allocation fails then sample == null and
            the method will return before reach this point.*/
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceState_finalize_w_params(sample, &deallocParams);
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    DeviceState *
    DeviceStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        DeviceState *sample = NULL;

        sample = new (std::nothrow) DeviceState();

        if(sample == NULL) {
            return NULL;
        }

        if (!ExCmdRsp::DeviceState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            /* Coverity reports a possible uninit_use_in_call that will happen if the
            new fails. But if new fails then sample == null and the method will
            return before reach this point. */
            /* coverity[uninit_use_in_call : FALSE] */
            ExCmdRsp::DeviceState_finalize_ex(sample, RTI_TRUE);
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    DeviceState *
    DeviceStatePluginSupport_create_data(void)
    {
        return ExCmdRsp::DeviceStatePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    DeviceStatePluginSupport_destroy_data_w_params(
        DeviceState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        ExCmdRsp::DeviceState_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    DeviceStatePluginSupport_destroy_data_ex(
        DeviceState *sample,RTIBool deallocate_pointers) {
        ExCmdRsp::DeviceState_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    DeviceStatePluginSupport_destroy_data(
        DeviceState *sample) {

        ExCmdRsp::DeviceStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    DeviceStatePluginSupport_copy_data(
        DeviceState *dst,
        const DeviceState *src)
    {
        return ExCmdRsp::DeviceState_copy(dst,(const DeviceState*) src);
    }

    void 
    DeviceStatePluginSupport_print_data(
        const DeviceState *sample,
        const char *desc,
        unsigned int indent_level)
    {

        RTICdrType_printIndent(indent_level);

        if (desc != NULL) {
            RTILogParamString_printPlain("%s:\n", desc);
        } else {
            RTILogParamString_printPlain("\n");
        }

        if (sample == NULL) {
            RTILogParamString_printPlain("NULL\n");
            return;
        }

        ExCmdRsp::DeviceIdPluginSupport_print_data(
            (const ExCmdRsp::DeviceId*) &sample->myDeviceId, "myDeviceId", indent_level + 1);

        ExCmdRsp::DeviceStateEnumPluginSupport_print_data(
            (const ExCmdRsp::DeviceStateEnum*) &sample->state, "state", indent_level + 1);

    }

    DeviceState *
    DeviceStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
        DeviceState *key = NULL;

        key = new (std::nothrow) DeviceStateKeyHolder();

        ExCmdRsp::DeviceState_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    DeviceState *
    DeviceStatePluginSupport_create_key(void)
    {
        return  ExCmdRsp::DeviceStatePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    DeviceStatePluginSupport_destroy_key_ex(
        DeviceStateKeyHolder *key,RTIBool deallocate_pointers)
    {
        ExCmdRsp::DeviceState_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    DeviceStatePluginSupport_destroy_key(
        DeviceStateKeyHolder *key) {

        ExCmdRsp::DeviceStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    DeviceStatePlugin_on_participant_attached(
        void *registration_data,
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration,
        void *container_plugin_context,
        RTICdrTypeCode *type_code)
    {
        struct RTIXCdrInterpreterPrograms *programs = NULL;
        struct PRESTypePluginDefaultParticipantData *pd = NULL;
        struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

        if (registration_data) {} /* To avoid warnings */
        if (participant_info) {} /* To avoid warnings */
        if (top_level_registration) {} /* To avoid warnings */
        if (container_plugin_context) {} /* To avoid warnings */
        if (type_code) {} /* To avoid warnings */

        pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

        programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
        programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
        programProperty.resolveAlias = RTI_XCDR_TRUE;
        programProperty.inlineStruct = RTI_XCDR_TRUE;
        programProperty.optimizeEnum = RTI_XCDR_TRUE;
        programProperty.unboundedSize = RTIXCdrLong_MAX;

        programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
            DDS_TypeCodeFactory_get_instance(),
            DeviceState_get_typecode(),
            &programProperty,
            RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
        if (programs == NULL) {
            PRESTypePluginDefaultParticipantData_delete(
                (PRESTypePluginParticipantData) pd);
            return NULL;
        }

        pd->programs = programs;
        return (PRESTypePluginParticipantData)pd;
    }

    void 
    DeviceStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {  		
        if (participant_data != NULL) {
            struct PRESTypePluginDefaultParticipantData *pd = 
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

            if (pd->programs != NULL) {
                DDS_TypeCodeFactory_remove_programs_from_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    pd->programs);
                pd->programs = NULL;
            }
            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }
    }

    PRESTypePluginEndpointData
    DeviceStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *containerPluginContext)
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        unsigned int serializedKeyMaxSize = 0;
        unsigned int serializedKeyMaxSizeV2 = 0;

        if (top_level_registration) {} /* To avoid warnings */
        if (containerPluginContext) {} /* To avoid warnings */

        if (participant_data == NULL) {
            return NULL;
        } 

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ExCmdRsp::DeviceStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ExCmdRsp::DeviceStatePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ExCmdRsp::DeviceStatePluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ExCmdRsp::DeviceStatePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  ExCmdRsp::DeviceStatePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 =  DeviceStatePlugin_get_serialized_key_max_size_for_keyhash(
            epd,
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
            0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,
            endpoint_info,
            serializedKeyMaxSize,
            serializedKeyMaxSizeV2))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = ExCmdRsp::DeviceStatePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ExCmdRsp::DeviceStatePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    DeviceStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    DeviceStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *sample,
        void *handle)
    {
        DeviceState_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    DeviceStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *dst,
        const DeviceState *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return ExCmdRsp::DeviceStatePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    DeviceStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    DeviceStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceState *sample,
        DDS_DataRepresentationId_t representation)
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;

        if (length == NULL) {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceState_get_typecode();
        pd.programs = DeviceStatePlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *) plugin.typeCode,
            representation);    
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        DeviceStatePlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            PRESTypePlugin_interpretedGetSerializedSampleSize(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }

    RTIBool
    DeviceStatePlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const DeviceState *sample)
    {
        return DeviceStatePlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    DeviceStatePlugin_deserialize_from_cdr_buffer(
        DeviceState *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePluginDefaultParticipantData pd;
        struct PRESTypePlugin plugin;

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        DeviceState_get_typecode();
        pd.programs = DeviceStatePlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        DeviceState_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    DeviceStatePlugin_data_to_string(
        const DeviceState *sample,
        char *_str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property)
    {
        DDS_DynamicData *data = NULL;
        char *buffer = NULL;
        unsigned int length = 0;
        struct DDS_PrintFormat printFormat;
        DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

        if (sample == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (str_size == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }

        if (property == NULL) {
            return DDS_RETCODE_BAD_PARAMETER;
        }
        if (!DeviceStatePlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!DeviceStatePlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            DeviceState_get_typecode(), 
            &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
        if (data == NULL) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_PrintFormatProperty_to_print_format(
            property, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        retCode = DDS_DynamicDataFormatter_to_string_w_format(
            data, 
            _str,
            str_size, 
            &printFormat);
        if (retCode != DDS_RETCODE_OK) {
            RTIOsapiHeap_freeBuffer(buffer);
            DDS_DynamicData_delete(data);
            return retCode;
        }

        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return DDS_RETCODE_OK;
    }
    #endif

    unsigned int 
    DeviceStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    DeviceStatePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool DeviceStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        return result;    

    }

    unsigned int
    DeviceStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int
    DeviceStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;
        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    DeviceStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceStateKeyHolder *dst, 
        const DeviceState *src)
    {
        if (endpoint_data) {} /* To avoid warnings */   

        if (!ExCmdRsp::DeviceId_copy(
            &dst->myDeviceId,(const ExCmdRsp::DeviceId*)&src->myDeviceId)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    DeviceStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        DeviceState *dst, const
        DeviceStateKeyHolder *src)
    {
        if (endpoint_data) {} /* To avoid warnings */   
        if (!ExCmdRsp::DeviceId_copy(
            &dst->myDeviceId,(const ExCmdRsp::DeviceId*)&src->myDeviceId)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    DeviceStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        DeviceState * sample = NULL;
        sample = (DeviceState *)
        PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
        if (sample == NULL) {
            return RTI_FALSE;
        }

        if (!PRESTypePlugin_interpretedSerializedSampleToKey(
            endpoint_data,
            sample,
            stream, 
            deserialize_encapsulation, 
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!PRESTypePlugin_interpretedInstanceToKeyHash(
            endpoint_data, 
            keyhash, 
            sample,
            RTICdrStream_getEncapsulationKind(stream))) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    struct RTIXCdrInterpreterPrograms * DeviceStatePlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        DeviceState, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *DeviceStatePlugin_new(void) 
    { 
        struct PRESTypePlugin *plugin = NULL;
        const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

        RTIOsapiHeap_allocateStructure(
            &plugin, struct PRESTypePlugin);

        if (plugin == NULL) {
            return NULL;
        }

        plugin->version = PLUGIN_VERSION;

        /* set up parent's function pointers */
        plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ExCmdRsp::DeviceStatePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ExCmdRsp::DeviceStatePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ExCmdRsp::DeviceStatePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ExCmdRsp::DeviceStatePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ExCmdRsp::DeviceStatePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        DeviceStatePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        DeviceStatePlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        DeviceState_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ExCmdRsp::DeviceStatePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        DeviceStatePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        DeviceStatePlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ExCmdRsp::DeviceStatePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ExCmdRsp::DeviceStatePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ExCmdRsp::DeviceStatePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ExCmdRsp::DeviceStatePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        DeviceStatePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        DeviceStatePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ExCmdRsp::DeviceStatePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ExCmdRsp::DeviceStatePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)ExCmdRsp::DeviceState_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        DeviceStatePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        DeviceStatePlugin_return_buffer;
        plugin->getBufferWithParams = NULL;
        plugin->returnBufferWithParams = NULL;  
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleSize;

        plugin->getWriterLoanedSampleFnc = NULL; 
        plugin->returnWriterLoanedSampleFnc = NULL;
        plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
        plugin->validateWriterLoanedSampleFnc = NULL;
        plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

        plugin->endpointTypeName = DeviceStateTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    DeviceStatePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace ExCmdRsp  */
#undef RTI_CDR_CURRENT_SUBMODULE 
