
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "CommandRespSupport.h"
#include "CommandRespPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace ExCmdRsp {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ConfigureDevice' support classes.

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
    #define TTYPENAME   ConfigureDeviceTYPENAME

    /* Defines */
    #define TDataWriter ConfigureDeviceDataWriter
    #define TData       ExCmdRsp::ConfigureDevice

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
    #define TTYPENAME   ConfigureDeviceTYPENAME

    /* Defines */
    #define TDataReader ConfigureDeviceDataReader
    #define TDataSeq    ConfigureDeviceSeq
    #define TData       ExCmdRsp::ConfigureDevice

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
    #define TTYPENAME    ConfigureDeviceTYPENAME
    #define TPlugin_new  ExCmdRsp::ConfigureDevicePlugin_new
    #define TPlugin_delete  ExCmdRsp::ConfigureDevicePlugin_delete

    /* Defines */
    #define TTypeSupport ConfigureDeviceTypeSupport
    #define TData        ExCmdRsp::ConfigureDevice
    #define TDataReader  ConfigureDeviceDataReader
    #define TDataWriter  ConfigureDeviceDataWriter
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

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'DeviceState' support classes.

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
    #define TTYPENAME   DeviceStateTYPENAME

    /* Defines */
    #define TDataWriter DeviceStateDataWriter
    #define TData       ExCmdRsp::DeviceState

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
    #define TTYPENAME   DeviceStateTYPENAME

    /* Defines */
    #define TDataReader DeviceStateDataReader
    #define TDataSeq    DeviceStateSeq
    #define TData       ExCmdRsp::DeviceState

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
    #define TTYPENAME    DeviceStateTYPENAME
    #define TPlugin_new  ExCmdRsp::DeviceStatePlugin_new
    #define TPlugin_delete  ExCmdRsp::DeviceStatePlugin_delete

    /* Defines */
    #define TTypeSupport DeviceStateTypeSupport
    #define TData        ExCmdRsp::DeviceState
    #define TDataReader  DeviceStateDataReader
    #define TDataWriter  DeviceStateDataWriter
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

} /* namespace ExCmdRsp  */

