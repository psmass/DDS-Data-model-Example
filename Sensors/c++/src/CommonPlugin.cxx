
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Common.idl
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

#include "CommonPlugin.h"

namespace Common {

    /* ----------------------------------------------------------------------------
    *  Type LargeString_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    LargeString_t*
    LargeString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        LargeString_t *sample = NULL;

        sample = new (std::nothrow) LargeString_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::LargeString_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    LargeString_t *
    LargeString_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        LargeString_t *sample = NULL;

        sample = new (std::nothrow) LargeString_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::LargeString_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    LargeString_t *
    LargeString_tPluginSupport_create_data(void)
    {
        return Common::LargeString_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    LargeString_tPluginSupport_destroy_data_w_params(
        LargeString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::LargeString_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    LargeString_tPluginSupport_destroy_data_ex(
        LargeString_t *sample,RTIBool deallocate_pointers) {
        Common::LargeString_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    LargeString_tPluginSupport_destroy_data(
        LargeString_t *sample) {

        Common::LargeString_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    LargeString_tPluginSupport_copy_data(
        LargeString_t *dst,
        const LargeString_t *src)
    {
        return Common::LargeString_t_copy(dst,(const LargeString_t*) src);
    }

    void 
    LargeString_tPluginSupport_print_data(
        const LargeString_t *sample,
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

        if ((*sample)==NULL) {
            RTICdrType_printString(
                NULL,"", indent_level + 1);
        } else {
            RTICdrType_printString(
                (*sample),"", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    LargeString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LargeString_t *dst,
        const LargeString_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::LargeString_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    LargeString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    LargeString_tPlugin_get_serialized_sample_max_size(
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
    LargeString_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    LargeString_tPlugin_get_serialized_key_max_size(
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
    LargeString_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type MediumString_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    MediumString_t*
    MediumString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        MediumString_t *sample = NULL;

        sample = new (std::nothrow) MediumString_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::MediumString_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    MediumString_t *
    MediumString_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        MediumString_t *sample = NULL;

        sample = new (std::nothrow) MediumString_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::MediumString_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    MediumString_t *
    MediumString_tPluginSupport_create_data(void)
    {
        return Common::MediumString_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    MediumString_tPluginSupport_destroy_data_w_params(
        MediumString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::MediumString_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    MediumString_tPluginSupport_destroy_data_ex(
        MediumString_t *sample,RTIBool deallocate_pointers) {
        Common::MediumString_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    MediumString_tPluginSupport_destroy_data(
        MediumString_t *sample) {

        Common::MediumString_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    MediumString_tPluginSupport_copy_data(
        MediumString_t *dst,
        const MediumString_t *src)
    {
        return Common::MediumString_t_copy(dst,(const MediumString_t*) src);
    }

    void 
    MediumString_tPluginSupport_print_data(
        const MediumString_t *sample,
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

        if ((*sample)==NULL) {
            RTICdrType_printString(
                NULL,"", indent_level + 1);
        } else {
            RTICdrType_printString(
                (*sample),"", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    MediumString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MediumString_t *dst,
        const MediumString_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::MediumString_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    MediumString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    MediumString_tPlugin_get_serialized_sample_max_size(
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
    MediumString_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    MediumString_tPlugin_get_serialized_key_max_size(
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
    MediumString_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type ShortString_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    ShortString_t*
    ShortString_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        ShortString_t *sample = NULL;

        sample = new (std::nothrow) ShortString_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::ShortString_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    ShortString_t *
    ShortString_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        ShortString_t *sample = NULL;

        sample = new (std::nothrow) ShortString_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::ShortString_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    ShortString_t *
    ShortString_tPluginSupport_create_data(void)
    {
        return Common::ShortString_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    ShortString_tPluginSupport_destroy_data_w_params(
        ShortString_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::ShortString_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    ShortString_tPluginSupport_destroy_data_ex(
        ShortString_t *sample,RTIBool deallocate_pointers) {
        Common::ShortString_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    ShortString_tPluginSupport_destroy_data(
        ShortString_t *sample) {

        Common::ShortString_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    ShortString_tPluginSupport_copy_data(
        ShortString_t *dst,
        const ShortString_t *src)
    {
        return Common::ShortString_t_copy(dst,(const ShortString_t*) src);
    }

    void 
    ShortString_tPluginSupport_print_data(
        const ShortString_t *sample,
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

        if ((*sample)==NULL) {
            RTICdrType_printString(
                NULL,"", indent_level + 1);
        } else {
            RTICdrType_printString(
                (*sample),"", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    ShortString_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShortString_t *dst,
        const ShortString_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::ShortString_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    ShortString_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    ShortString_tPlugin_get_serialized_sample_max_size(
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
    ShortString_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    ShortString_tPlugin_get_serialized_key_max_size(
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
    ShortString_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type Descriptor_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Descriptor_t*
    Descriptor_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        Descriptor_t *sample = NULL;

        sample = new (std::nothrow) Descriptor_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::Descriptor_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    Descriptor_t *
    Descriptor_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        Descriptor_t *sample = NULL;

        sample = new (std::nothrow) Descriptor_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::Descriptor_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    Descriptor_t *
    Descriptor_tPluginSupport_create_data(void)
    {
        return Common::Descriptor_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    Descriptor_tPluginSupport_destroy_data_w_params(
        Descriptor_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::Descriptor_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    Descriptor_tPluginSupport_destroy_data_ex(
        Descriptor_t *sample,RTIBool deallocate_pointers) {
        Common::Descriptor_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    Descriptor_tPluginSupport_destroy_data(
        Descriptor_t *sample) {

        Common::Descriptor_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    Descriptor_tPluginSupport_copy_data(
        Descriptor_t *dst,
        const Descriptor_t *src)
    {
        return Common::Descriptor_t_copy(dst,(const Descriptor_t*) src);
    }

    void 
    Descriptor_tPluginSupport_print_data(
        const Descriptor_t *sample,
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

        if ((*sample)==NULL) {
            RTICdrType_printString(
                NULL,"", indent_level + 1);
        } else {
            RTICdrType_printString(
                (*sample),"", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    Descriptor_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Descriptor_t *dst,
        const Descriptor_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::Descriptor_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    Descriptor_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    Descriptor_tPlugin_get_serialized_sample_max_size(
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
    Descriptor_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    Descriptor_tPlugin_get_serialized_key_max_size(
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
    Descriptor_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type Percentage_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Percentage_t*
    Percentage_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        Percentage_t *sample = NULL;

        sample = new (std::nothrow) Percentage_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::Percentage_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    Percentage_t *
    Percentage_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        Percentage_t *sample = NULL;

        sample = new (std::nothrow) Percentage_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::Percentage_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    Percentage_t *
    Percentage_tPluginSupport_create_data(void)
    {
        return Common::Percentage_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    Percentage_tPluginSupport_destroy_data_w_params(
        Percentage_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::Percentage_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    Percentage_tPluginSupport_destroy_data_ex(
        Percentage_t *sample,RTIBool deallocate_pointers) {
        Common::Percentage_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    Percentage_tPluginSupport_destroy_data(
        Percentage_t *sample) {

        Common::Percentage_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    Percentage_tPluginSupport_copy_data(
        Percentage_t *dst,
        const Percentage_t *src)
    {
        return Common::Percentage_t_copy(dst,(const Percentage_t*) src);
    }

    void 
    Percentage_tPluginSupport_print_data(
        const Percentage_t *sample,
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

        RTICdrType_printFloat(
            sample, "", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    Percentage_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Percentage_t *dst,
        const Percentage_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::Percentage_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    Percentage_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    Percentage_tPlugin_get_serialized_sample_max_size(
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
    Percentage_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    Percentage_tPlugin_get_serialized_key_max_size(
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
    Percentage_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type PressureInPascal_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    PressureInPascal_t*
    PressureInPascal_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        PressureInPascal_t *sample = NULL;

        sample = new (std::nothrow) PressureInPascal_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::PressureInPascal_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    PressureInPascal_t *
    PressureInPascal_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        PressureInPascal_t *sample = NULL;

        sample = new (std::nothrow) PressureInPascal_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::PressureInPascal_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    PressureInPascal_t *
    PressureInPascal_tPluginSupport_create_data(void)
    {
        return Common::PressureInPascal_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    PressureInPascal_tPluginSupport_destroy_data_w_params(
        PressureInPascal_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::PressureInPascal_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    PressureInPascal_tPluginSupport_destroy_data_ex(
        PressureInPascal_t *sample,RTIBool deallocate_pointers) {
        Common::PressureInPascal_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    PressureInPascal_tPluginSupport_destroy_data(
        PressureInPascal_t *sample) {

        Common::PressureInPascal_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    PressureInPascal_tPluginSupport_copy_data(
        PressureInPascal_t *dst,
        const PressureInPascal_t *src)
    {
        return Common::PressureInPascal_t_copy(dst,(const PressureInPascal_t*) src);
    }

    void 
    PressureInPascal_tPluginSupport_print_data(
        const PressureInPascal_t *sample,
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

        RTICdrType_printFloat(
            sample, "", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    PressureInPascal_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PressureInPascal_t *dst,
        const PressureInPascal_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::PressureInPascal_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    PressureInPascal_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    PressureInPascal_tPlugin_get_serialized_sample_max_size(
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
    PressureInPascal_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    PressureInPascal_tPlugin_get_serialized_key_max_size(
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
    PressureInPascal_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type TemperatureInDegreesKelvin_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    TemperatureInDegreesKelvin_t*
    TemperatureInDegreesKelvin_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        TemperatureInDegreesKelvin_t *sample = NULL;

        sample = new (std::nothrow) TemperatureInDegreesKelvin_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::TemperatureInDegreesKelvin_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    TemperatureInDegreesKelvin_t *
    TemperatureInDegreesKelvin_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        TemperatureInDegreesKelvin_t *sample = NULL;

        sample = new (std::nothrow) TemperatureInDegreesKelvin_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::TemperatureInDegreesKelvin_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    TemperatureInDegreesKelvin_t *
    TemperatureInDegreesKelvin_tPluginSupport_create_data(void)
    {
        return Common::TemperatureInDegreesKelvin_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data_w_params(
        TemperatureInDegreesKelvin_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::TemperatureInDegreesKelvin_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data_ex(
        TemperatureInDegreesKelvin_t *sample,RTIBool deallocate_pointers) {
        Common::TemperatureInDegreesKelvin_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    TemperatureInDegreesKelvin_tPluginSupport_destroy_data(
        TemperatureInDegreesKelvin_t *sample) {

        Common::TemperatureInDegreesKelvin_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    TemperatureInDegreesKelvin_tPluginSupport_copy_data(
        TemperatureInDegreesKelvin_t *dst,
        const TemperatureInDegreesKelvin_t *src)
    {
        return Common::TemperatureInDegreesKelvin_t_copy(dst,(const TemperatureInDegreesKelvin_t*) src);
    }

    void 
    TemperatureInDegreesKelvin_tPluginSupport_print_data(
        const TemperatureInDegreesKelvin_t *sample,
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

        RTICdrType_printFloat(
            sample, "", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    TemperatureInDegreesKelvin_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TemperatureInDegreesKelvin_t *dst,
        const TemperatureInDegreesKelvin_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::TemperatureInDegreesKelvin_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    TemperatureInDegreesKelvin_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    TemperatureInDegreesKelvin_tPlugin_get_serialized_sample_max_size(
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
    TemperatureInDegreesKelvin_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size(
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
    TemperatureInDegreesKelvin_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type ConcentrationInMolesPerCubicMetre_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    ConcentrationInMolesPerCubicMetre_t*
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        ConcentrationInMolesPerCubicMetre_t *sample = NULL;

        sample = new (std::nothrow) ConcentrationInMolesPerCubicMetre_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::ConcentrationInMolesPerCubicMetre_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    ConcentrationInMolesPerCubicMetre_t *
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        ConcentrationInMolesPerCubicMetre_t *sample = NULL;

        sample = new (std::nothrow) ConcentrationInMolesPerCubicMetre_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::ConcentrationInMolesPerCubicMetre_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    ConcentrationInMolesPerCubicMetre_t *
    ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data(void)
    {
        return Common::ConcentrationInMolesPerCubicMetre_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_w_params(
        ConcentrationInMolesPerCubicMetre_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::ConcentrationInMolesPerCubicMetre_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_ex(
        ConcentrationInMolesPerCubicMetre_t *sample,RTIBool deallocate_pointers) {
        Common::ConcentrationInMolesPerCubicMetre_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data(
        ConcentrationInMolesPerCubicMetre_t *sample) {

        Common::ConcentrationInMolesPerCubicMetre_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_copy_data(
        ConcentrationInMolesPerCubicMetre_t *dst,
        const ConcentrationInMolesPerCubicMetre_t *src)
    {
        return Common::ConcentrationInMolesPerCubicMetre_t_copy(dst,(const ConcentrationInMolesPerCubicMetre_t*) src);
    }

    void 
    ConcentrationInMolesPerCubicMetre_tPluginSupport_print_data(
        const ConcentrationInMolesPerCubicMetre_t *sample,
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

        RTICdrType_printFloat(
            sample, "", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    ConcentrationInMolesPerCubicMetre_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConcentrationInMolesPerCubicMetre_t *dst,
        const ConcentrationInMolesPerCubicMetre_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::ConcentrationInMolesPerCubicMetre_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_sample_max_size(
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
    ConcentrationInMolesPerCubicMetre_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size(
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
    ConcentrationInMolesPerCubicMetre_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type BinaryData_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    BinaryData_t*
    BinaryData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        BinaryData_t *sample = NULL;

        sample = new (std::nothrow) BinaryData_t [1];
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::BinaryData_t_initialize_w_params(sample,alloc_params)) {
            delete [] sample;
            sample=NULL;
        }
        return sample;
    } 

    BinaryData_t *
    BinaryData_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        BinaryData_t *sample = NULL;

        sample = new (std::nothrow) BinaryData_t [1];

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::BinaryData_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete [] sample;
            sample=NULL;
        }

        return sample;
    }

    BinaryData_t *
    BinaryData_tPluginSupport_create_data(void)
    {
        return Common::BinaryData_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    BinaryData_tPluginSupport_destroy_data_w_params(
        BinaryData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::BinaryData_t_finalize_w_params(sample,dealloc_params);

        delete [] sample;
    }

    void 
    BinaryData_tPluginSupport_destroy_data_ex(
        BinaryData_t *sample,RTIBool deallocate_pointers) {
        Common::BinaryData_t_finalize_ex(sample,deallocate_pointers);

        delete [] sample;
    }

    void 
    BinaryData_tPluginSupport_destroy_data(
        BinaryData_t *sample) {

        Common::BinaryData_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    BinaryData_tPluginSupport_copy_data(
        BinaryData_t *dst,
        const BinaryData_t *src)
    {
        return Common::BinaryData_t_copy(dst,(const BinaryData_t*) src);
    }

    void 
    BinaryData_tPluginSupport_print_data(
        const BinaryData_t *sample,
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

        RTICdrType_printArray(
            (*sample), ((Common::MAX_LEN)), RTI_CDR_SHORT_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printShort, 
            "", indent_level + 1);        

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    BinaryData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BinaryData_t *dst,
        const BinaryData_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::BinaryData_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    BinaryData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    BinaryData_tPlugin_get_serialized_sample_max_size(
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
    BinaryData_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    BinaryData_tPlugin_get_serialized_key_max_size(
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
    BinaryData_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type IdentifierType_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    IdentifierType_t*
    IdentifierType_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        IdentifierType_t *sample = NULL;

        sample = new (std::nothrow) IdentifierType_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::IdentifierType_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    IdentifierType_t *
    IdentifierType_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        IdentifierType_t *sample = NULL;

        sample = new (std::nothrow) IdentifierType_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::IdentifierType_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    IdentifierType_t *
    IdentifierType_tPluginSupport_create_data(void)
    {
        return Common::IdentifierType_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    IdentifierType_tPluginSupport_destroy_data_w_params(
        IdentifierType_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::IdentifierType_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    IdentifierType_tPluginSupport_destroy_data_ex(
        IdentifierType_t *sample,RTIBool deallocate_pointers) {
        Common::IdentifierType_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    IdentifierType_tPluginSupport_destroy_data(
        IdentifierType_t *sample) {

        Common::IdentifierType_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    IdentifierType_tPluginSupport_copy_data(
        IdentifierType_t *dst,
        const IdentifierType_t *src)
    {
        return Common::IdentifierType_t_copy(dst,(const IdentifierType_t*) src);
    }

    void 
    IdentifierType_tPluginSupport_print_data(
        const IdentifierType_t *sample,
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

    PRESTypePluginParticipantData 
    IdentifierType_tPlugin_on_participant_attached(
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
            IdentifierType_t_get_typecode(),
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
    IdentifierType_tPlugin_on_participant_detached(
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
    IdentifierType_tPlugin_on_endpoint_attached(
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
            Common::IdentifierType_tPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Common::IdentifierType_tPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Common::IdentifierType_tPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Common::IdentifierType_tPlugin_get_serialized_sample_max_size, epd,
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
    IdentifierType_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    IdentifierType_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t *sample,
        void *handle)
    {
        IdentifierType_t_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    IdentifierType_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t *dst,
        const IdentifierType_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::IdentifierType_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    IdentifierType_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    IdentifierType_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const IdentifierType_t *sample,
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
        IdentifierType_t_get_typecode();
        pd.programs = IdentifierType_tPlugin_get_programs();
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
        IdentifierType_tPlugin_get_serialized_sample_max_size(
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
    IdentifierType_tPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const IdentifierType_t *sample)
    {
        return IdentifierType_tPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    IdentifierType_tPlugin_deserialize_from_cdr_buffer(
        IdentifierType_t *sample,
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
        IdentifierType_t_get_typecode();
        pd.programs = IdentifierType_tPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        IdentifierType_t_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    IdentifierType_tPlugin_data_to_string(
        const IdentifierType_t *sample,
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
        if (!IdentifierType_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!IdentifierType_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            IdentifierType_t_get_typecode(), 
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
    IdentifierType_tPlugin_get_serialized_sample_max_size(
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
    IdentifierType_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool IdentifierType_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierType_t **sample, 
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
    IdentifierType_tPlugin_get_serialized_key_max_size(
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
    IdentifierType_tPlugin_get_serialized_key_max_size_for_keyhash(
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

    struct RTIXCdrInterpreterPrograms * IdentifierType_tPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        IdentifierType_t, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *IdentifierType_tPlugin_new(void) 
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
        Common::IdentifierType_tPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Common::IdentifierType_tPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Common::IdentifierType_tPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Common::IdentifierType_tPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Common::IdentifierType_tPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        IdentifierType_tPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        IdentifierType_tPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        IdentifierType_t_finalize_optional_members;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Common::IdentifierType_tPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        IdentifierType_tPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        IdentifierType_tPlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Common::IdentifierType_tPlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)Common::IdentifierType_t_get_typecode();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        IdentifierType_tPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        IdentifierType_tPlugin_return_buffer;
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

        plugin->endpointTypeName = IdentifierType_tTYPENAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    IdentifierType_tPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type IdentifierList_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    IdentifierList_t*
    IdentifierList_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        IdentifierList_t *sample = NULL;

        sample = new (std::nothrow) IdentifierList_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::IdentifierList_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    IdentifierList_t *
    IdentifierList_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        IdentifierList_t *sample = NULL;

        sample = new (std::nothrow) IdentifierList_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::IdentifierList_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    IdentifierList_t *
    IdentifierList_tPluginSupport_create_data(void)
    {
        return Common::IdentifierList_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    IdentifierList_tPluginSupport_destroy_data_w_params(
        IdentifierList_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::IdentifierList_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    IdentifierList_tPluginSupport_destroy_data_ex(
        IdentifierList_t *sample,RTIBool deallocate_pointers) {
        Common::IdentifierList_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    IdentifierList_tPluginSupport_destroy_data(
        IdentifierList_t *sample) {

        Common::IdentifierList_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    IdentifierList_tPluginSupport_copy_data(
        IdentifierList_t *dst,
        const IdentifierList_t *src)
    {
        return Common::IdentifierList_t_copy(dst,(const IdentifierList_t*) src);
    }

    void 
    IdentifierList_tPluginSupport_print_data(
        const IdentifierList_t *sample,
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

        if (Common::IdentifierType_tSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                Common::IdentifierType_tSeq_get_contiguous_bufferI(sample), 
                Common::IdentifierType_tSeq_get_length(sample),
                sizeof(Common::IdentifierType_t),
                (RTICdrTypePrintFunction)Common::IdentifierType_tPluginSupport_print_data,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                Common::IdentifierType_tSeq_get_discontiguous_bufferI(sample), 
                Common::IdentifierType_tSeq_get_length(sample),
                (RTICdrTypePrintFunction)Common::IdentifierType_tPluginSupport_print_data,
                "", indent_level + 1);
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    IdentifierList_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentifierList_t *dst,
        const IdentifierList_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::IdentifierList_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    IdentifierList_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    unsigned int 
    IdentifierList_tPlugin_get_serialized_sample_max_size(
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
    IdentifierList_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    unsigned int
    IdentifierList_tPlugin_get_serialized_key_max_size(
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
    IdentifierList_tPlugin_get_serialized_key_max_size_for_keyhash(
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
    *  Type DateTime_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    DateTime_t*
    DateTime_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        DateTime_t *sample = NULL;

        sample = new (std::nothrow) DateTime_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::DateTime_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    DateTime_t *
    DateTime_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        DateTime_t *sample = NULL;

        sample = new (std::nothrow) DateTime_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::DateTime_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    DateTime_t *
    DateTime_tPluginSupport_create_data(void)
    {
        return Common::DateTime_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    DateTime_tPluginSupport_destroy_data_w_params(
        DateTime_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::DateTime_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    DateTime_tPluginSupport_destroy_data_ex(
        DateTime_t *sample,RTIBool deallocate_pointers) {
        Common::DateTime_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    DateTime_tPluginSupport_destroy_data(
        DateTime_t *sample) {

        Common::DateTime_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    DateTime_tPluginSupport_copy_data(
        DateTime_t *dst,
        const DateTime_t *src)
    {
        return Common::DateTime_t_copy(dst,(const DateTime_t*) src);
    }

    void 
    DateTime_tPluginSupport_print_data(
        const DateTime_t *sample,
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

        RTICdrType_printLongLong(
            &sample->secs, "secs", indent_level + 1);    

        RTICdrType_printLongLong(
            &sample->nsecs, "nsecs", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    DateTime_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DateTime_t *dst,
        const DateTime_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::DateTime_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    DateTime_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    DateTime_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DateTime_t *sample,
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
        DateTime_t_get_typecode();
        pd.programs = DateTime_tPlugin_get_programs();
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
        DateTime_tPlugin_get_serialized_sample_max_size(
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
    DateTime_tPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const DateTime_t *sample)
    {
        return DateTime_tPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    DateTime_tPlugin_deserialize_from_cdr_buffer(
        DateTime_t *sample,
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
        DateTime_t_get_typecode();
        pd.programs = DateTime_tPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        DateTime_t_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    DateTime_tPlugin_data_to_string(
        const DateTime_t *sample,
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
        if (!DateTime_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!DateTime_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            DateTime_t_get_typecode(), 
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
    DateTime_tPlugin_get_serialized_sample_max_size(
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
    DateTime_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool DateTime_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DateTime_t **sample, 
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
    DateTime_tPlugin_get_serialized_key_max_size(
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
    DateTime_tPlugin_get_serialized_key_max_size_for_keyhash(
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

    struct RTIXCdrInterpreterPrograms * DateTime_tPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        DateTime_t, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type MetaData_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    MetaData_t*
    MetaData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        MetaData_t *sample = NULL;

        sample = new (std::nothrow) MetaData_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Common::MetaData_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample;
    } 

    MetaData_t *
    MetaData_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        MetaData_t *sample = NULL;

        sample = new (std::nothrow) MetaData_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Common::MetaData_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample;
    }

    MetaData_t *
    MetaData_tPluginSupport_create_data(void)
    {
        return Common::MetaData_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    MetaData_tPluginSupport_destroy_data_w_params(
        MetaData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {
        Common::MetaData_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
    }

    void 
    MetaData_tPluginSupport_destroy_data_ex(
        MetaData_t *sample,RTIBool deallocate_pointers) {
        Common::MetaData_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
    }

    void 
    MetaData_tPluginSupport_destroy_data(
        MetaData_t *sample) {

        Common::MetaData_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    MetaData_tPluginSupport_copy_data(
        MetaData_t *dst,
        const MetaData_t *src)
    {
        return Common::MetaData_t_copy(dst,(const MetaData_t*) src);
    }

    void 
    MetaData_tPluginSupport_print_data(
        const MetaData_t *sample,
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

        Common::DateTime_tPluginSupport_print_data(
            (const Common::DateTime_t*) &sample->timeOfGeneration, "timeOfGeneration", indent_level + 1);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    MetaData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MetaData_t *dst,
        const MetaData_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Common::MetaData_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    MetaData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    MetaData_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MetaData_t *sample,
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
        MetaData_t_get_typecode();
        pd.programs = MetaData_tPlugin_get_programs();
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
        MetaData_tPlugin_get_serialized_sample_max_size(
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
    MetaData_tPlugin_serialize_to_cdr_buffer(
        char *buffer,
        unsigned int *length,
        const MetaData_t *sample)
    {
        return MetaData_tPlugin_serialize_to_cdr_buffer_ex(
            buffer,
            length,
            sample,
            DDS_AUTO_DATA_REPRESENTATION);
    }

    RTIBool
    MetaData_tPlugin_deserialize_from_cdr_buffer(
        MetaData_t *sample,
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
        MetaData_t_get_typecode();
        pd.programs = MetaData_tPlugin_get_programs();
        if (pd.programs == NULL) {
            return RTI_FALSE;
        }

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        MetaData_t_finalize_optional_members(sample, RTI_TRUE);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    #ifndef NDDS_STANDALONE_TYPE
    DDS_ReturnCode_t
    MetaData_tPlugin_data_to_string(
        const MetaData_t *sample,
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
        if (!MetaData_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!MetaData_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }
        data = DDS_DynamicData_new(
            MetaData_t_get_typecode(), 
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
    MetaData_tPlugin_get_serialized_sample_max_size(
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
    MetaData_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool MetaData_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MetaData_t **sample, 
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
    MetaData_tPlugin_get_serialized_key_max_size(
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
    MetaData_tPlugin_get_serialized_key_max_size_for_keyhash(
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

    struct RTIXCdrInterpreterPrograms * MetaData_tPlugin_get_programs(void)
    {
        return ::rti::xcdr::get_cdr_serialization_programs<
        MetaData_t, 
        true, true, true>();
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
} /* namespace Common  */
#undef RTI_CDR_CURRENT_SUBMODULE 
