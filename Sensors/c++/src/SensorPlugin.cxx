
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensor.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
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

#include "SensorPlugin.h"

namespace Sensor {
    namespace Constants {
    } /* namespace Constants  */

    /* ----------------------------------------------------------------------------
    *  Type BaseSensor
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    BaseSensor*
    BaseSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        BaseSensor *sample = NULL;

        sample = new (std::nothrow) BaseSensor ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Sensor::BaseSensor_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    BaseSensor *
    BaseSensorPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        BaseSensor *sample = NULL;

        sample = new (std::nothrow) BaseSensor ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Sensor::BaseSensor_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    BaseSensor *
    BaseSensorPluginSupport_create_data(void)
    {
        return Sensor::BaseSensorPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    BaseSensorPluginSupport_destroy_data_w_params(
        BaseSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Sensor::BaseSensor_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    BaseSensorPluginSupport_destroy_data_ex(
        BaseSensor *sample,RTIBool deallocate_pointers) {
        Sensor::BaseSensor_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    BaseSensorPluginSupport_destroy_data(
        BaseSensor *sample) {

        Sensor::BaseSensorPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    BaseSensorPluginSupport_copy_data(
        BaseSensor *dst,
        const BaseSensor *src)
    {
        return Sensor::BaseSensor_copy(dst,(const BaseSensor*) src);
    }

    void 
    BaseSensorPluginSupport_print_data(
        const BaseSensor *sample,
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

        Common::IdentifierType_tPluginSupport_print_data(
            (const Common::IdentifierType_t*) &sample->sourceId, "sourceId", indent_level + 1);

        if (sample->sensorTypeName==NULL) {
            RTICdrType_printString(
                NULL,"sensorTypeName", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->sensorTypeName,"sensorTypeName", indent_level + 1);    
        }

        Common::MetaData_tPluginSupport_print_data(
            (const Common::MetaData_t*) &sample->metaData, "metaData", indent_level + 1);

    }

    BaseSensor *
    BaseSensorPluginSupport_create_key_ex(RTIBool allocate_pointers){
        BaseSensor *key = NULL;

        key = new (std::nothrow) BaseSensorKeyHolder ;

        Sensor::BaseSensor_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    BaseSensor *
    BaseSensorPluginSupport_create_key(void)
    {
        return  Sensor::BaseSensorPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    BaseSensorPluginSupport_destroy_key_ex(
        BaseSensorKeyHolder *key,RTIBool deallocate_pointers)
    {
        Sensor::BaseSensor_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    BaseSensorPluginSupport_destroy_key(
        BaseSensorKeyHolder *key) {

        Sensor::BaseSensorPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    BaseSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor *dst,
        const BaseSensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Sensor::BaseSensorPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    BaseSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    BaseSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const BaseSensor *sample,
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
        BaseSensor_get_typecode();
        pd.programs = BaseSensorPlugin_get_programs();
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
        BaseSensorPlugin_get_serialized_sample_max_size(
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
    BaseSensorPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const BaseSensor *sample)
    {
        return BaseSensorPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    BaseSensorPlugin_deserialize_from_cdr_buffer(
        BaseSensor *sample,
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
        BaseSensor_get_typecode();
        pd.programs = BaseSensorPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        BaseSensor_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    BaseSensorPlugin_data_to_string(
        const BaseSensor *sample,
        char *str,
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
        if (!BaseSensorPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!BaseSensorPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            BaseSensor_get_typecode(), 
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
            str,
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
    BaseSensorPlugin_get_serialized_sample_max_size(
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
    BaseSensorPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool BaseSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor **sample, 
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
    BaseSensorPlugin_get_serialized_key_max_size(
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
    BaseSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
    BaseSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensorKeyHolder *dst, 
        const BaseSensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */   

        if (!Common::IdentifierType_t_copy(
            &dst->sourceId,(const Common::IdentifierType_t*)&src->sourceId)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    BaseSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        BaseSensor *dst, const
        BaseSensorKeyHolder *src)
    {
        if (endpoint_data) {} /* To avoid warnings */   
        if (!Common::IdentifierType_t_copy(
            &dst->sourceId,(const Common::IdentifierType_t*)&src->sourceId)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    BaseSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        BaseSensor * sample = NULL;
        sample = (BaseSensor *)
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

    struct RTIXCdrInterpreterPrograms * BaseSensorPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        BaseSensor, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type HumiditySensor
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HumiditySensor*
    HumiditySensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        HumiditySensor *sample = NULL;

        sample = new (std::nothrow) HumiditySensor ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Sensor::HumiditySensor_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    HumiditySensor *
    HumiditySensorPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        HumiditySensor *sample = NULL;

        sample = new (std::nothrow) HumiditySensor ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Sensor::HumiditySensor_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    HumiditySensor *
    HumiditySensorPluginSupport_create_data(void)
    {
        return Sensor::HumiditySensorPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HumiditySensorPluginSupport_destroy_data_w_params(
        HumiditySensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Sensor::HumiditySensor_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    HumiditySensorPluginSupport_destroy_data_ex(
        HumiditySensor *sample,RTIBool deallocate_pointers) {
        Sensor::HumiditySensor_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    HumiditySensorPluginSupport_destroy_data(
        HumiditySensor *sample) {

        Sensor::HumiditySensorPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HumiditySensorPluginSupport_copy_data(
        HumiditySensor *dst,
        const HumiditySensor *src)
    {
        return Sensor::HumiditySensor_copy(dst,(const HumiditySensor*) src);
    }

    void 
    HumiditySensorPluginSupport_print_data(
        const HumiditySensor *sample,
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

        Sensor::BaseSensorPluginSupport_print_data((const Sensor::BaseSensor*)sample,"",indent_level);

        RTICdrType_printFloat(
            &sample->relativeHumidity, "relativeHumidity", indent_level + 1);    

    }

    HumiditySensor *
    HumiditySensorPluginSupport_create_key_ex(RTIBool allocate_pointers){
        HumiditySensor *key = NULL;

        key = new (std::nothrow) HumiditySensorKeyHolder ;

        Sensor::HumiditySensor_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    HumiditySensor *
    HumiditySensorPluginSupport_create_key(void)
    {
        return  Sensor::HumiditySensorPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HumiditySensorPluginSupport_destroy_key_ex(
        HumiditySensorKeyHolder *key,RTIBool deallocate_pointers)
    {
        Sensor::HumiditySensor_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    HumiditySensorPluginSupport_destroy_key(
        HumiditySensorKeyHolder *key) {

        Sensor::HumiditySensorPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HumiditySensorPlugin_on_participant_attached(
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
            HumiditySensor_get_typecode(),
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
    HumiditySensorPlugin_on_participant_detached(
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
    HumiditySensorPlugin_on_endpoint_attached(
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
            Sensor::HumiditySensorPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Sensor::HumiditySensorPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            Sensor::HumiditySensorPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            Sensor::HumiditySensorPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  Sensor::HumiditySensorPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 =  HumiditySensorPlugin_get_serialized_key_max_size_for_keyhash(
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
            serializedSampleMaxSize = Sensor::HumiditySensorPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Sensor::HumiditySensorPlugin_get_serialized_sample_max_size, epd,
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
    HumiditySensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HumiditySensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *sample,
        void *handle)
    {
        HumiditySensor_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HumiditySensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *dst,
        const HumiditySensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Sensor::HumiditySensorPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HumiditySensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    HumiditySensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const HumiditySensor *sample,
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
        HumiditySensor_get_typecode();
        pd.programs = HumiditySensorPlugin_get_programs();
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
        HumiditySensorPlugin_get_serialized_sample_max_size(
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
    HumiditySensorPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const HumiditySensor *sample)
    {
        return HumiditySensorPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    HumiditySensorPlugin_deserialize_from_cdr_buffer(
        HumiditySensor *sample,
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
        HumiditySensor_get_typecode();
        pd.programs = HumiditySensorPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        HumiditySensor_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    HumiditySensorPlugin_data_to_string(
        const HumiditySensor *sample,
        char *str,
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
        if (!HumiditySensorPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!HumiditySensorPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            HumiditySensor_get_typecode(), 
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
            str,
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
    HumiditySensorPlugin_get_serialized_sample_max_size(
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
    HumiditySensorPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool HumiditySensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor **sample, 
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
    HumiditySensorPlugin_get_serialized_key_max_size(
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
    HumiditySensorPlugin_get_serialized_key_max_size_for_keyhash(
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
    HumiditySensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensorKeyHolder *dst, 
        const HumiditySensor *src)
    {
        if (!Sensor::BaseSensorPlugin_instance_to_key(endpoint_data,(Sensor::BaseSensor *)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    RTIBool 
    HumiditySensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HumiditySensor *dst, const
        HumiditySensorKeyHolder *src)
    {
        if (!Sensor::BaseSensorPlugin_key_to_instance(endpoint_data,(Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    HumiditySensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        HumiditySensor * sample = NULL;
        sample = (HumiditySensor *)
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

    struct RTIXCdrInterpreterPrograms * HumiditySensorPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        HumiditySensor, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HumiditySensorPlugin_new(void) 
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
        Sensor::HumiditySensorPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Sensor::HumiditySensorPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Sensor::HumiditySensorPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Sensor::HumiditySensorPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Sensor::HumiditySensorPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HumiditySensorPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HumiditySensorPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        HumiditySensor_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Sensor::HumiditySensorPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HumiditySensorPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HumiditySensorPlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Sensor::HumiditySensorPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        Sensor::HumiditySensorPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        Sensor::HumiditySensorPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        Sensor::HumiditySensorPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HumiditySensorPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HumiditySensorPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        Sensor::HumiditySensorPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        Sensor::HumiditySensorPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)Sensor::HumiditySensor_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HumiditySensorPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HumiditySensorPlugin_return_buffer;
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

        plugin->endpointTypeName = HumiditySensorTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    HumiditySensorPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type PressureSensor
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    PressureSensor*
    PressureSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        PressureSensor *sample = NULL;

        sample = new (std::nothrow) PressureSensor ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Sensor::PressureSensor_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    PressureSensor *
    PressureSensorPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        PressureSensor *sample = NULL;

        sample = new (std::nothrow) PressureSensor ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Sensor::PressureSensor_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    PressureSensor *
    PressureSensorPluginSupport_create_data(void)
    {
        return Sensor::PressureSensorPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    PressureSensorPluginSupport_destroy_data_w_params(
        PressureSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Sensor::PressureSensor_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    PressureSensorPluginSupport_destroy_data_ex(
        PressureSensor *sample,RTIBool deallocate_pointers) {
        Sensor::PressureSensor_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    PressureSensorPluginSupport_destroy_data(
        PressureSensor *sample) {

        Sensor::PressureSensorPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    PressureSensorPluginSupport_copy_data(
        PressureSensor *dst,
        const PressureSensor *src)
    {
        return Sensor::PressureSensor_copy(dst,(const PressureSensor*) src);
    }

    void 
    PressureSensorPluginSupport_print_data(
        const PressureSensor *sample,
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

        Sensor::BaseSensorPluginSupport_print_data((const Sensor::BaseSensor*)sample,"",indent_level);

        RTICdrType_printFloat(
            &sample->pressure, "pressure", indent_level + 1);    

    }

    PressureSensor *
    PressureSensorPluginSupport_create_key_ex(RTIBool allocate_pointers){
        PressureSensor *key = NULL;

        key = new (std::nothrow) PressureSensorKeyHolder ;

        Sensor::PressureSensor_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    PressureSensor *
    PressureSensorPluginSupport_create_key(void)
    {
        return  Sensor::PressureSensorPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    PressureSensorPluginSupport_destroy_key_ex(
        PressureSensorKeyHolder *key,RTIBool deallocate_pointers)
    {
        Sensor::PressureSensor_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    PressureSensorPluginSupport_destroy_key(
        PressureSensorKeyHolder *key) {

        Sensor::PressureSensorPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    PressureSensorPlugin_on_participant_attached(
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
            PressureSensor_get_typecode(),
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
    PressureSensorPlugin_on_participant_detached(
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
    PressureSensorPlugin_on_endpoint_attached(
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
            Sensor::PressureSensorPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Sensor::PressureSensorPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            Sensor::PressureSensorPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            Sensor::PressureSensorPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  Sensor::PressureSensorPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 =  PressureSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
            serializedSampleMaxSize = Sensor::PressureSensorPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Sensor::PressureSensorPlugin_get_serialized_sample_max_size, epd,
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
    PressureSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    PressureSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *sample,
        void *handle)
    {
        PressureSensor_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    PressureSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *dst,
        const PressureSensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Sensor::PressureSensorPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    PressureSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    PressureSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PressureSensor *sample,
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
        PressureSensor_get_typecode();
        pd.programs = PressureSensorPlugin_get_programs();
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
        PressureSensorPlugin_get_serialized_sample_max_size(
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
    PressureSensorPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const PressureSensor *sample)
    {
        return PressureSensorPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    PressureSensorPlugin_deserialize_from_cdr_buffer(
        PressureSensor *sample,
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
        PressureSensor_get_typecode();
        pd.programs = PressureSensorPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        PressureSensor_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    PressureSensorPlugin_data_to_string(
        const PressureSensor *sample,
        char *str,
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
        if (!PressureSensorPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!PressureSensorPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            PressureSensor_get_typecode(), 
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
            str,
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
    PressureSensorPlugin_get_serialized_sample_max_size(
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
    PressureSensorPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool PressureSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor **sample, 
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
    PressureSensorPlugin_get_serialized_key_max_size(
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
    PressureSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
    PressureSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensorKeyHolder *dst, 
        const PressureSensor *src)
    {
        if (!Sensor::BaseSensorPlugin_instance_to_key(endpoint_data,(Sensor::BaseSensor *)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    RTIBool 
    PressureSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PressureSensor *dst, const
        PressureSensorKeyHolder *src)
    {
        if (!Sensor::BaseSensorPlugin_key_to_instance(endpoint_data,(Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    PressureSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        PressureSensor * sample = NULL;
        sample = (PressureSensor *)
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

    struct RTIXCdrInterpreterPrograms * PressureSensorPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        PressureSensor, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *PressureSensorPlugin_new(void) 
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
        Sensor::PressureSensorPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Sensor::PressureSensorPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Sensor::PressureSensorPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Sensor::PressureSensorPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Sensor::PressureSensorPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        PressureSensorPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        PressureSensorPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        PressureSensor_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Sensor::PressureSensorPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        PressureSensorPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        PressureSensorPlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Sensor::PressureSensorPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        Sensor::PressureSensorPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        Sensor::PressureSensorPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        Sensor::PressureSensorPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        PressureSensorPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        PressureSensorPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        Sensor::PressureSensorPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        Sensor::PressureSensorPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)Sensor::PressureSensor_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        PressureSensorPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        PressureSensorPlugin_return_buffer;
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

        plugin->endpointTypeName = PressureSensorTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    PressureSensorPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type TemperatureSensor
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    TemperatureSensor*
    TemperatureSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        TemperatureSensor *sample = NULL;

        sample = new (std::nothrow) TemperatureSensor ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Sensor::TemperatureSensor_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    TemperatureSensor *
    TemperatureSensorPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        TemperatureSensor *sample = NULL;

        sample = new (std::nothrow) TemperatureSensor ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Sensor::TemperatureSensor_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    TemperatureSensor *
    TemperatureSensorPluginSupport_create_data(void)
    {
        return Sensor::TemperatureSensorPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    TemperatureSensorPluginSupport_destroy_data_w_params(
        TemperatureSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Sensor::TemperatureSensor_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    TemperatureSensorPluginSupport_destroy_data_ex(
        TemperatureSensor *sample,RTIBool deallocate_pointers) {
        Sensor::TemperatureSensor_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    TemperatureSensorPluginSupport_destroy_data(
        TemperatureSensor *sample) {

        Sensor::TemperatureSensorPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    TemperatureSensorPluginSupport_copy_data(
        TemperatureSensor *dst,
        const TemperatureSensor *src)
    {
        return Sensor::TemperatureSensor_copy(dst,(const TemperatureSensor*) src);
    }

    void 
    TemperatureSensorPluginSupport_print_data(
        const TemperatureSensor *sample,
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

        Sensor::BaseSensorPluginSupport_print_data((const Sensor::BaseSensor*)sample,"",indent_level);

        RTICdrType_printFloat(
            &sample->temperature, "temperature", indent_level + 1);    

    }

    TemperatureSensor *
    TemperatureSensorPluginSupport_create_key_ex(RTIBool allocate_pointers){
        TemperatureSensor *key = NULL;

        key = new (std::nothrow) TemperatureSensorKeyHolder ;

        Sensor::TemperatureSensor_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    TemperatureSensor *
    TemperatureSensorPluginSupport_create_key(void)
    {
        return  Sensor::TemperatureSensorPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    TemperatureSensorPluginSupport_destroy_key_ex(
        TemperatureSensorKeyHolder *key,RTIBool deallocate_pointers)
    {
        Sensor::TemperatureSensor_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    TemperatureSensorPluginSupport_destroy_key(
        TemperatureSensorKeyHolder *key) {

        Sensor::TemperatureSensorPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    TemperatureSensorPlugin_on_participant_attached(
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
            TemperatureSensor_get_typecode(),
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
    TemperatureSensorPlugin_on_participant_detached(
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
    TemperatureSensorPlugin_on_endpoint_attached(
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
            Sensor::TemperatureSensorPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Sensor::TemperatureSensorPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            Sensor::TemperatureSensorPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            Sensor::TemperatureSensorPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  Sensor::TemperatureSensorPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 =  TemperatureSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
            serializedSampleMaxSize = Sensor::TemperatureSensorPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Sensor::TemperatureSensorPlugin_get_serialized_sample_max_size, epd,
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
    TemperatureSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    TemperatureSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *sample,
        void *handle)
    {
        TemperatureSensor_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    TemperatureSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *dst,
        const TemperatureSensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Sensor::TemperatureSensorPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    TemperatureSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    TemperatureSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TemperatureSensor *sample,
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
        TemperatureSensor_get_typecode();
        pd.programs = TemperatureSensorPlugin_get_programs();
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
        TemperatureSensorPlugin_get_serialized_sample_max_size(
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
    TemperatureSensorPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const TemperatureSensor *sample)
    {
        return TemperatureSensorPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    TemperatureSensorPlugin_deserialize_from_cdr_buffer(
        TemperatureSensor *sample,
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
        TemperatureSensor_get_typecode();
        pd.programs = TemperatureSensorPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        TemperatureSensor_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    TemperatureSensorPlugin_data_to_string(
        const TemperatureSensor *sample,
        char *str,
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
        if (!TemperatureSensorPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!TemperatureSensorPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            TemperatureSensor_get_typecode(), 
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
            str,
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
    TemperatureSensorPlugin_get_serialized_sample_max_size(
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
    TemperatureSensorPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool TemperatureSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor **sample, 
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
    TemperatureSensorPlugin_get_serialized_key_max_size(
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
    TemperatureSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
    TemperatureSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensorKeyHolder *dst, 
        const TemperatureSensor *src)
    {
        if (!Sensor::BaseSensorPlugin_instance_to_key(endpoint_data,(Sensor::BaseSensor *)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    RTIBool 
    TemperatureSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureSensor *dst, const
        TemperatureSensorKeyHolder *src)
    {
        if (!Sensor::BaseSensorPlugin_key_to_instance(endpoint_data,(Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    TemperatureSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        TemperatureSensor * sample = NULL;
        sample = (TemperatureSensor *)
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

    struct RTIXCdrInterpreterPrograms * TemperatureSensorPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        TemperatureSensor, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *TemperatureSensorPlugin_new(void) 
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
        Sensor::TemperatureSensorPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Sensor::TemperatureSensorPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Sensor::TemperatureSensorPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Sensor::TemperatureSensorPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Sensor::TemperatureSensorPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        TemperatureSensorPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        TemperatureSensorPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        TemperatureSensor_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Sensor::TemperatureSensorPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        TemperatureSensorPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        TemperatureSensorPlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Sensor::TemperatureSensorPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        Sensor::TemperatureSensorPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        Sensor::TemperatureSensorPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        Sensor::TemperatureSensorPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        TemperatureSensorPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        TemperatureSensorPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        Sensor::TemperatureSensorPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        Sensor::TemperatureSensorPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)Sensor::TemperatureSensor_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        TemperatureSensorPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        TemperatureSensorPlugin_return_buffer;
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

        plugin->endpointTypeName = TemperatureSensorTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    TemperatureSensorPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type GasSensor
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    GasSensor*
    GasSensorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        GasSensor *sample = NULL;

        sample = new (std::nothrow) GasSensor ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Sensor::GasSensor_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    GasSensor *
    GasSensorPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        GasSensor *sample = NULL;

        sample = new (std::nothrow) GasSensor ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Sensor::GasSensor_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    GasSensor *
    GasSensorPluginSupport_create_data(void)
    {
        return Sensor::GasSensorPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    GasSensorPluginSupport_destroy_data_w_params(
        GasSensor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Sensor::GasSensor_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    GasSensorPluginSupport_destroy_data_ex(
        GasSensor *sample,RTIBool deallocate_pointers) {
        Sensor::GasSensor_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    GasSensorPluginSupport_destroy_data(
        GasSensor *sample) {

        Sensor::GasSensorPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    GasSensorPluginSupport_copy_data(
        GasSensor *dst,
        const GasSensor *src)
    {
        return Sensor::GasSensor_copy(dst,(const GasSensor*) src);
    }

    void 
    GasSensorPluginSupport_print_data(
        const GasSensor *sample,
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

        Sensor::BaseSensorPluginSupport_print_data((const Sensor::BaseSensor*)sample,"",indent_level);

        RTICdrType_printFloat(
            &sample->concentration, "concentration", indent_level + 1);    

    }

    GasSensor *
    GasSensorPluginSupport_create_key_ex(RTIBool allocate_pointers){
        GasSensor *key = NULL;

        key = new (std::nothrow) GasSensorKeyHolder ;

        Sensor::GasSensor_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    GasSensor *
    GasSensorPluginSupport_create_key(void)
    {
        return  Sensor::GasSensorPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    GasSensorPluginSupport_destroy_key_ex(
        GasSensorKeyHolder *key,RTIBool deallocate_pointers)
    {
        Sensor::GasSensor_finalize_ex(key,deallocate_pointers);

        delete  key;
    }

    void 
    GasSensorPluginSupport_destroy_key(
        GasSensorKeyHolder *key) {

        Sensor::GasSensorPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    GasSensorPlugin_on_participant_attached(
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
            GasSensor_get_typecode(),
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
    GasSensorPlugin_on_participant_detached(
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
    GasSensorPlugin_on_endpoint_attached(
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
            Sensor::GasSensorPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Sensor::GasSensorPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            Sensor::GasSensorPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            Sensor::GasSensorPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  Sensor::GasSensorPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 =  GasSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
            serializedSampleMaxSize = Sensor::GasSensorPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Sensor::GasSensorPlugin_get_serialized_sample_max_size, epd,
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
    GasSensorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    GasSensorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *sample,
        void *handle)
    {
        GasSensor_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    GasSensorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *dst,
        const GasSensor *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Sensor::GasSensorPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    GasSensorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    GasSensorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GasSensor *sample,
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
        GasSensor_get_typecode();
        pd.programs = GasSensorPlugin_get_programs();
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
        GasSensorPlugin_get_serialized_sample_max_size(
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
    GasSensorPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const GasSensor *sample)
    {
        return GasSensorPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    GasSensorPlugin_deserialize_from_cdr_buffer(
        GasSensor *sample,
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
        GasSensor_get_typecode();
        pd.programs = GasSensorPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        GasSensor_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    GasSensorPlugin_data_to_string(
        const GasSensor *sample,
        char *str,
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
        if (!GasSensorPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!GasSensorPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            GasSensor_get_typecode(), 
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
            str,
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
    GasSensorPlugin_get_serialized_sample_max_size(
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
    GasSensorPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool GasSensorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor **sample, 
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
    GasSensorPlugin_get_serialized_key_max_size(
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
    GasSensorPlugin_get_serialized_key_max_size_for_keyhash(
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
    GasSensorPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GasSensorKeyHolder *dst, 
        const GasSensor *src)
    {
        if (!Sensor::BaseSensorPlugin_instance_to_key(endpoint_data,(Sensor::BaseSensor *)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    RTIBool 
    GasSensorPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GasSensor *dst, const
        GasSensorKeyHolder *src)
    {
        if (!Sensor::BaseSensorPlugin_key_to_instance(endpoint_data,(Sensor::BaseSensor*)dst,(const Sensor::BaseSensor*)src)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    GasSensorPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        GasSensor * sample = NULL;
        sample = (GasSensor *)
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

    struct RTIXCdrInterpreterPrograms * GasSensorPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        GasSensor, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *GasSensorPlugin_new(void) 
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
        Sensor::GasSensorPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Sensor::GasSensorPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Sensor::GasSensorPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Sensor::GasSensorPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Sensor::GasSensorPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        GasSensorPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        GasSensorPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        GasSensor_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Sensor::GasSensorPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        GasSensorPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        GasSensorPlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Sensor::GasSensorPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        Sensor::GasSensorPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        Sensor::GasSensorPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        Sensor::GasSensorPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        GasSensorPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        GasSensorPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        Sensor::GasSensorPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        Sensor::GasSensorPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode =  (struct RTICdrTypeCode *)Sensor::GasSensor_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        GasSensorPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        GasSensorPlugin_return_buffer;
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

        plugin->endpointTypeName = GasSensorTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    GasSensorPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace Sensor  */
#undef RTI_CDR_CURRENT_SUBMODULE 
