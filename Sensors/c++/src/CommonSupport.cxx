
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Common.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "CommonSupport.h"
#include "CommonPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace Common {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'IdentifierType_t' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   IdentifierType_tTYPENAME

    /* Defines */
    #define TDataWriter IdentifierType_tDataWriter
    #define TData       Common::IdentifierType_t

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   IdentifierType_tTYPENAME

    /* Defines */
    #define TDataReader IdentifierType_tDataReader
    #define TDataSeq    IdentifierType_tSeq
    #define TData       Common::IdentifierType_t

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    IdentifierType_tTYPENAME
    #define TPlugin_new  Common::IdentifierType_tPlugin_new
    #define TPlugin_delete  Common::IdentifierType_tPlugin_delete

    /* Defines */
    #define TTypeSupport IdentifierType_tTypeSupport
    #define TData        Common::IdentifierType_t
    #define TDataReader  IdentifierType_tDataReader
    #define TDataWriter  IdentifierType_tDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

} /* namespace Common  */

