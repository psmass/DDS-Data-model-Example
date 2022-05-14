

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandResp.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommandResp_2073433895_hpp
#define CommandResp_2073433895_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace ExCmdRsp {

    static const std::string MODULE_EX_CMD_RSP = "ExCmdRsp";

    static const std::string TOPIC_CONFIGURE_DEVICE = "ConfigureDevice";

    static const std::string TOPIC_DEVICE_STATE = "DeviceState";

    static const std::string CONTROLLER1_PARTICIPANT = "CmdRspParticipantLibrary::ControllerParticipant1";

    static const std::string DEVICE1_PARTICIPANT = "CmdRspParticipantLibrary::DeviceParticipant1";

    static const std::string DEVICE_STATE_WRITER = "DevicePublisher::DeviceStateWriter";

    static const std::string DEVICE_STATE_READER = "ControllerSubscriber::DeviceStateReader";

    static const std::string CONFIGURE_DEVICE_WRITER = "ControllerPublisher::ConfigureDeviceWriter";

    static const std::string CONFIGURE_DEVICE_READER = "DeviceSubscriber::ConfigureDeviceReader";

    static const uint32_t LEN_DEVICE_ID = 32UL;

    static const uint32_t LEN_STR_FOO = 10UL;

    static const uint32_t LEN_STR_BAR = 16UL;
    enum class DeviceStateEnum {
        UNINITIALIZED, 
        OFF, 
        ON, 
        ERROR
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DeviceStateEnum& sample);

    class NDDSUSERDllExport DeviceId {
      public:
        DeviceId();

        DeviceId(
            int32_t resourceId,
            int32_t id);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DeviceId (DeviceId&&) = default;
        DeviceId& operator=(DeviceId&&) = default;
        DeviceId& operator=(const DeviceId&) = default;
        DeviceId(const DeviceId&) = default;
        #else
        DeviceId(DeviceId&& other_) OMG_NOEXCEPT;  
        DeviceId& operator=(DeviceId&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int32_t& resourceId() OMG_NOEXCEPT {
            return m_resourceId_;
        }

        const int32_t& resourceId() const OMG_NOEXCEPT {
            return m_resourceId_;
        }

        void resourceId(int32_t value) {
            m_resourceId_ = value;
        }

        int32_t& id() OMG_NOEXCEPT {
            return m_id_;
        }

        const int32_t& id() const OMG_NOEXCEPT {
            return m_id_;
        }

        void id(int32_t value) {
            m_id_ = value;
        }

        bool operator == (const DeviceId& other_) const;
        bool operator != (const DeviceId& other_) const;

        void swap(DeviceId& other_) OMG_NOEXCEPT ;

      private:

        int32_t m_resourceId_;
        int32_t m_id_;

    };

    inline void swap(DeviceId& a, DeviceId& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DeviceId& sample);

    class NDDSUSERDllExport DeviceConfigurationStuct {
      public:
        DeviceConfigurationStuct();

        DeviceConfigurationStuct(
            const ExCmdRsp::DeviceStateEnum& stateReq,
            const std::string& fooName,
            int32_t fooValue,
            const std::string& barName,
            uint32_t barValue);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DeviceConfigurationStuct (DeviceConfigurationStuct&&) = default;
        DeviceConfigurationStuct& operator=(DeviceConfigurationStuct&&) = default;
        DeviceConfigurationStuct& operator=(const DeviceConfigurationStuct&) = default;
        DeviceConfigurationStuct(const DeviceConfigurationStuct&) = default;
        #else
        DeviceConfigurationStuct(DeviceConfigurationStuct&& other_) OMG_NOEXCEPT;  
        DeviceConfigurationStuct& operator=(DeviceConfigurationStuct&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        ExCmdRsp::DeviceStateEnum& stateReq() OMG_NOEXCEPT {
            return m_stateReq_;
        }

        const ExCmdRsp::DeviceStateEnum& stateReq() const OMG_NOEXCEPT {
            return m_stateReq_;
        }

        void stateReq(const ExCmdRsp::DeviceStateEnum& value) {
            m_stateReq_ = value;
        }

        void stateReq(ExCmdRsp::DeviceStateEnum&& value) {
            m_stateReq_ = std::move(value);
        }
        std::string& fooName() OMG_NOEXCEPT {
            return m_fooName_;
        }

        const std::string& fooName() const OMG_NOEXCEPT {
            return m_fooName_;
        }

        void fooName(const std::string& value) {
            m_fooName_ = value;
        }

        void fooName(std::string&& value) {
            m_fooName_ = std::move(value);
        }
        int32_t& fooValue() OMG_NOEXCEPT {
            return m_fooValue_;
        }

        const int32_t& fooValue() const OMG_NOEXCEPT {
            return m_fooValue_;
        }

        void fooValue(int32_t value) {
            m_fooValue_ = value;
        }

        std::string& barName() OMG_NOEXCEPT {
            return m_barName_;
        }

        const std::string& barName() const OMG_NOEXCEPT {
            return m_barName_;
        }

        void barName(const std::string& value) {
            m_barName_ = value;
        }

        void barName(std::string&& value) {
            m_barName_ = std::move(value);
        }
        uint32_t& barValue() OMG_NOEXCEPT {
            return m_barValue_;
        }

        const uint32_t& barValue() const OMG_NOEXCEPT {
            return m_barValue_;
        }

        void barValue(uint32_t value) {
            m_barValue_ = value;
        }

        bool operator == (const DeviceConfigurationStuct& other_) const;
        bool operator != (const DeviceConfigurationStuct& other_) const;

        void swap(DeviceConfigurationStuct& other_) OMG_NOEXCEPT ;

      private:

        ExCmdRsp::DeviceStateEnum m_stateReq_;
        std::string m_fooName_;
        int32_t m_fooValue_;
        std::string m_barName_;
        uint32_t m_barValue_;

    };

    inline void swap(DeviceConfigurationStuct& a, DeviceConfigurationStuct& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DeviceConfigurationStuct& sample);

    typedef ExCmdRsp::DeviceConfigurationStuct DeviceConfiguration;
    struct DeviceConfiguration_AliasTag_t {};

    class NDDSUSERDllExport ConfigureDevice {
      public:
        ConfigureDevice();

        ConfigureDevice(
            const ExCmdRsp::DeviceId& targetDeviceId,
            const ExCmdRsp::DeviceConfigurationStuct& deviceConfig);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ConfigureDevice (ConfigureDevice&&) = default;
        ConfigureDevice& operator=(ConfigureDevice&&) = default;
        ConfigureDevice& operator=(const ConfigureDevice&) = default;
        ConfigureDevice(const ConfigureDevice&) = default;
        #else
        ConfigureDevice(ConfigureDevice&& other_) OMG_NOEXCEPT;  
        ConfigureDevice& operator=(ConfigureDevice&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        ExCmdRsp::DeviceId& targetDeviceId() OMG_NOEXCEPT {
            return m_targetDeviceId_;
        }

        const ExCmdRsp::DeviceId& targetDeviceId() const OMG_NOEXCEPT {
            return m_targetDeviceId_;
        }

        void targetDeviceId(const ExCmdRsp::DeviceId& value) {
            m_targetDeviceId_ = value;
        }

        void targetDeviceId(ExCmdRsp::DeviceId&& value) {
            m_targetDeviceId_ = std::move(value);
        }
        ExCmdRsp::DeviceConfigurationStuct& deviceConfig() OMG_NOEXCEPT {
            return m_deviceConfig_;
        }

        const ExCmdRsp::DeviceConfigurationStuct& deviceConfig() const OMG_NOEXCEPT {
            return m_deviceConfig_;
        }

        void deviceConfig(const ExCmdRsp::DeviceConfigurationStuct& value) {
            m_deviceConfig_ = value;
        }

        void deviceConfig(ExCmdRsp::DeviceConfigurationStuct&& value) {
            m_deviceConfig_ = std::move(value);
        }

        bool operator == (const ConfigureDevice& other_) const;
        bool operator != (const ConfigureDevice& other_) const;

        void swap(ConfigureDevice& other_) OMG_NOEXCEPT ;

      private:

        ExCmdRsp::DeviceId m_targetDeviceId_;
        ExCmdRsp::DeviceConfigurationStuct m_deviceConfig_;

    };

    inline void swap(ConfigureDevice& a, ConfigureDevice& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ConfigureDevice& sample);

    class NDDSUSERDllExport DeviceState {
      public:
        DeviceState();

        DeviceState(
            const ExCmdRsp::DeviceId& myDeviceId,
            const ExCmdRsp::DeviceStateEnum& state);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DeviceState (DeviceState&&) = default;
        DeviceState& operator=(DeviceState&&) = default;
        DeviceState& operator=(const DeviceState&) = default;
        DeviceState(const DeviceState&) = default;
        #else
        DeviceState(DeviceState&& other_) OMG_NOEXCEPT;  
        DeviceState& operator=(DeviceState&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        ExCmdRsp::DeviceId& myDeviceId() OMG_NOEXCEPT {
            return m_myDeviceId_;
        }

        const ExCmdRsp::DeviceId& myDeviceId() const OMG_NOEXCEPT {
            return m_myDeviceId_;
        }

        void myDeviceId(const ExCmdRsp::DeviceId& value) {
            m_myDeviceId_ = value;
        }

        void myDeviceId(ExCmdRsp::DeviceId&& value) {
            m_myDeviceId_ = std::move(value);
        }
        ExCmdRsp::DeviceStateEnum& state() OMG_NOEXCEPT {
            return m_state_;
        }

        const ExCmdRsp::DeviceStateEnum& state() const OMG_NOEXCEPT {
            return m_state_;
        }

        void state(const ExCmdRsp::DeviceStateEnum& value) {
            m_state_ = value;
        }

        void state(ExCmdRsp::DeviceStateEnum&& value) {
            m_state_ = std::move(value);
        }

        bool operator == (const DeviceState& other_) const;
        bool operator != (const DeviceState& other_) const;

        void swap(DeviceState& other_) OMG_NOEXCEPT ;

      private:

        ExCmdRsp::DeviceId m_myDeviceId_;
        ExCmdRsp::DeviceStateEnum m_state_;

    };

    inline void swap(DeviceState& a, DeviceState& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DeviceState& sample);

} // namespace ExCmdRsp  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ExCmdRsp::DeviceId > {
            NDDSUSERDllExport static std::string value() {
                return "ExCmdRsp::DeviceId";
            }
        };

        template<>
        struct topic_type_support< ExCmdRsp::DeviceId > {
            NDDSUSERDllExport 
            static void reset_sample(ExCmdRsp::DeviceId& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ExCmdRsp::DeviceId& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< ExCmdRsp::DeviceConfigurationStuct > {
            NDDSUSERDllExport static std::string value() {
                return "ExCmdRsp::DeviceConfigurationStuct";
            }
        };

        template<>
        struct topic_type_support< ExCmdRsp::DeviceConfigurationStuct > {
            NDDSUSERDllExport 
            static void reset_sample(ExCmdRsp::DeviceConfigurationStuct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ExCmdRsp::DeviceConfigurationStuct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< ExCmdRsp::ConfigureDevice > {
            NDDSUSERDllExport static std::string value() {
                return "ExCmdRsp::ConfigureDevice";
            }
        };

        template<>
        struct is_topic_type< ExCmdRsp::ConfigureDevice > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ExCmdRsp::ConfigureDevice > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ExCmdRsp::ConfigureDevice& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(ExCmdRsp::ConfigureDevice& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(ExCmdRsp::ConfigureDevice& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ExCmdRsp::ConfigureDevice& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< ExCmdRsp::DeviceState > {
            NDDSUSERDllExport static std::string value() {
                return "ExCmdRsp::DeviceState";
            }
        };

        template<>
        struct is_topic_type< ExCmdRsp::DeviceState > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ExCmdRsp::DeviceState > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ExCmdRsp::DeviceState& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(ExCmdRsp::DeviceState& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(ExCmdRsp::DeviceState& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ExCmdRsp::DeviceState& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<ExCmdRsp::DeviceStateEnum>
        {
            static const ExCmdRsp::DeviceStateEnum value;
        };
        template<>
        struct dynamic_type< ExCmdRsp::DeviceStateEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< ExCmdRsp::DeviceStateEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< ExCmdRsp::DeviceId > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< ExCmdRsp::DeviceId > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< ExCmdRsp::DeviceConfigurationStuct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< ExCmdRsp::DeviceConfigurationStuct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< ExCmdRsp::DeviceConfiguration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< ExCmdRsp::ConfigureDevice > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< ExCmdRsp::ConfigureDevice > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< ExCmdRsp::DeviceState > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< ExCmdRsp::DeviceState > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // CommandResp_2073433895_hpp

