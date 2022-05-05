

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Alarms_1053329249_hpp
#define Alarms_1053329249_hpp

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

// Common Data Types
namespace Common {

    static const uint16_t MIN_LEN = 100U;

    static const uint16_t MED_LEN = 200U;

    static const uint16_t MAX_LEN = 500U;

    typedef std::string LargeString_t;
    struct LargeString_t_AliasTag_t {};

    typedef std::string MediumString_t;
    struct MediumString_t_AliasTag_t {};

    typedef std::string ShortString_t;
    struct ShortString_t_AliasTag_t {};

    typedef std::string Descriptor_t;
    struct Descriptor_t_AliasTag_t {};

    typedef float Percentage_t;
    struct Percentage_t_AliasTag_t {};

    typedef float PressureInPascal_t;
    struct PressureInPascal_t_AliasTag_t {};

    typedef float TemperatureInDegreesKelvin_t;
    struct TemperatureInDegreesKelvin_t_AliasTag_t {};

    typedef float ConcentrationInMolesPerCubicMetre_t;
    struct ConcentrationInMolesPerCubicMetre_t_AliasTag_t {};
    // Identifies a resource

    class NDDSUSERDllExport IdentifierType_t {
      public:
        IdentifierType_t();

        IdentifierType_t(
            uint32_t resourceId,
            int32_t id);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        IdentifierType_t (IdentifierType_t&&) = default;
        IdentifierType_t& operator=(IdentifierType_t&&) = default;
        IdentifierType_t& operator=(const IdentifierType_t&) = default;
        IdentifierType_t(const IdentifierType_t&) = default;
        #else
        IdentifierType_t(IdentifierType_t&& other_) OMG_NOEXCEPT;  
        IdentifierType_t& operator=(IdentifierType_t&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint32_t& resourceId() OMG_NOEXCEPT {
            return m_resourceId_;
        }

        const uint32_t& resourceId() const OMG_NOEXCEPT {
            return m_resourceId_;
        }

        void resourceId(uint32_t value) {
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

        bool operator == (const IdentifierType_t& other_) const;
        bool operator != (const IdentifierType_t& other_) const;

        void swap(IdentifierType_t& other_) OMG_NOEXCEPT ;

      private:

        uint32_t m_resourceId_;
        int32_t m_id_;

    };

    inline void swap(IdentifierType_t& a, IdentifierType_t& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IdentifierType_t& sample);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    // On Windows, dll-export template instantiations of standard types used by
    // other dll-exported types
    template class NDDSUSERDllExport std::allocator< Common::IdentifierType_t >;
    template class NDDSUSERDllExport std::vector< Common::IdentifierType_t >;
    #endif
    typedef ::rti::core::bounded_sequence< Common::IdentifierType_t, (Common::MAX_LEN) > IdentifierList_t;
    struct IdentifierList_t_AliasTag_t {};
    enum class ResponseCode_t {
        Invalid, 
        Success, 
        Pending, 
        Error
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ResponseCode_t& sample);
    // Time

    class NDDSUSERDllExport DateTime_t {
      public:
        DateTime_t();

        DateTime_t(
            int64_t secs,
            int64_t nsecs);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DateTime_t (DateTime_t&&) = default;
        DateTime_t& operator=(DateTime_t&&) = default;
        DateTime_t& operator=(const DateTime_t&) = default;
        DateTime_t(const DateTime_t&) = default;
        #else
        DateTime_t(DateTime_t&& other_) OMG_NOEXCEPT;  
        DateTime_t& operator=(DateTime_t&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int64_t& secs() OMG_NOEXCEPT {
            return m_secs_;
        }

        const int64_t& secs() const OMG_NOEXCEPT {
            return m_secs_;
        }

        void secs(int64_t value) {
            m_secs_ = value;
        }

        int64_t& nsecs() OMG_NOEXCEPT {
            return m_nsecs_;
        }

        const int64_t& nsecs() const OMG_NOEXCEPT {
            return m_nsecs_;
        }

        void nsecs(int64_t value) {
            m_nsecs_ = value;
        }

        bool operator == (const DateTime_t& other_) const;
        bool operator != (const DateTime_t& other_) const;

        void swap(DateTime_t& other_) OMG_NOEXCEPT ;

      private:

        int64_t m_secs_;
        int64_t m_nsecs_;

    };

    inline void swap(DateTime_t& a, DateTime_t& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DateTime_t& sample);

    class NDDSUSERDllExport MetaData_t {
      public:
        MetaData_t();

        explicit MetaData_t(
            const Common::DateTime_t& timeOfGeneration);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        MetaData_t (MetaData_t&&) = default;
        MetaData_t& operator=(MetaData_t&&) = default;
        MetaData_t& operator=(const MetaData_t&) = default;
        MetaData_t(const MetaData_t&) = default;
        #else
        MetaData_t(MetaData_t&& other_) OMG_NOEXCEPT;  
        MetaData_t& operator=(MetaData_t&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        Common::DateTime_t& timeOfGeneration() OMG_NOEXCEPT {
            return m_timeOfGeneration_;
        }

        const Common::DateTime_t& timeOfGeneration() const OMG_NOEXCEPT {
            return m_timeOfGeneration_;
        }

        void timeOfGeneration(const Common::DateTime_t& value) {
            m_timeOfGeneration_ = value;
        }

        void timeOfGeneration(Common::DateTime_t&& value) {
            m_timeOfGeneration_ = std::move(value);
        }

        bool operator == (const MetaData_t& other_) const;
        bool operator != (const MetaData_t& other_) const;

        void swap(MetaData_t& other_) OMG_NOEXCEPT ;

      private:

        Common::DateTime_t m_timeOfGeneration_;

    };

    inline void swap(MetaData_t& a, MetaData_t& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MetaData_t& sample);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    // On Windows, dll-export template instantiations of standard types used by
    // other dll-exported types
    template class NDDSUSERDllExport ::dds::core::detail::shared_ptr< int16_t >;
    #endif
    typedef ::dds::core::array< ::dds::core::external< int16_t >, (Common::MAX_LEN)> BinaryData_t;
    struct BinaryData_t_AliasTag_t {};
    enum class UnitType {
        Farenheit, 
        Celcius, 
        Percent
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const UnitType& sample);

    class NDDSUSERDllExport MeasurementCoordinate_t {
      public:
        MeasurementCoordinate_t();

        MeasurementCoordinate_t(
            double latitude,
            double longitude);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        MeasurementCoordinate_t (MeasurementCoordinate_t&&) = default;
        MeasurementCoordinate_t& operator=(MeasurementCoordinate_t&&) = default;
        MeasurementCoordinate_t& operator=(const MeasurementCoordinate_t&) = default;
        MeasurementCoordinate_t(const MeasurementCoordinate_t&) = default;
        #else
        MeasurementCoordinate_t(MeasurementCoordinate_t&& other_) OMG_NOEXCEPT;  
        MeasurementCoordinate_t& operator=(MeasurementCoordinate_t&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double& latitude() OMG_NOEXCEPT {
            return m_latitude_;
        }

        const double& latitude() const OMG_NOEXCEPT {
            return m_latitude_;
        }

        void latitude(double value) {
            m_latitude_ = value;
        }

        double& longitude() OMG_NOEXCEPT {
            return m_longitude_;
        }

        const double& longitude() const OMG_NOEXCEPT {
            return m_longitude_;
        }

        void longitude(double value) {
            m_longitude_ = value;
        }

        bool operator == (const MeasurementCoordinate_t& other_) const;
        bool operator != (const MeasurementCoordinate_t& other_) const;

        void swap(MeasurementCoordinate_t& other_) OMG_NOEXCEPT ;

      private:

        double m_latitude_;
        double m_longitude_;

    };

    inline void swap(MeasurementCoordinate_t& a, MeasurementCoordinate_t& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MeasurementCoordinate_t& sample);

} // namespace Common  
namespace Alarms {
    enum class Severities {
        Critical, 
        Major, 
        Minor, 
        Informational
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Severities& sample);
    enum class State {
        Open, 
        Closed
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const State& sample);

    class NDDSUSERDllExport ValueDefinition {
      public:
        ValueDefinition();

        ValueDefinition(
            const ::dds::core::optional< float >& number,
            const Common::UnitType& Units);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ValueDefinition (ValueDefinition&&) = default;
        ValueDefinition& operator=(ValueDefinition&&) = default;
        ValueDefinition& operator=(const ValueDefinition&) = default;
        ValueDefinition(const ValueDefinition&) = default;
        #else
        ValueDefinition(ValueDefinition&& other_) OMG_NOEXCEPT;  
        ValueDefinition& operator=(ValueDefinition&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        ::dds::core::optional< float >& number() OMG_NOEXCEPT {
            return m_number_;
        }

        const ::dds::core::optional< float >& number() const OMG_NOEXCEPT {
            return m_number_;
        }

        void number(const ::dds::core::optional< float >& value) {
            m_number_ = value;
        }

        void number(::dds::core::optional< float >&& value) {
            m_number_ = std::move(value);
        }
        Common::UnitType& Units() OMG_NOEXCEPT {
            return m_Units_;
        }

        const Common::UnitType& Units() const OMG_NOEXCEPT {
            return m_Units_;
        }

        void Units(const Common::UnitType& value) {
            m_Units_ = value;
        }

        void Units(Common::UnitType&& value) {
            m_Units_ = std::move(value);
        }

        bool operator == (const ValueDefinition& other_) const;
        bool operator != (const ValueDefinition& other_) const;

        void swap(ValueDefinition& other_) OMG_NOEXCEPT ;

      private:

        ::dds::core::optional< float > m_number_;
        Common::UnitType m_Units_;

    };

    inline void swap(ValueDefinition& a, ValueDefinition& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ValueDefinition& sample);

    class NDDSUSERDllExport Alarm {
      public:
        Alarm();

        Alarm(
            const Common::IdentifierType_t& sourceId,
            const std::string& alarmTypeName,
            const Alarms::Severities& severity,
            const Alarms::State& null,
            const Alarms::ValueDefinition& numericValue);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        Alarm (Alarm&&) = default;
        Alarm& operator=(Alarm&&) = default;
        Alarm& operator=(const Alarm&) = default;
        Alarm(const Alarm&) = default;
        #else
        Alarm(Alarm&& other_) OMG_NOEXCEPT;  
        Alarm& operator=(Alarm&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        Common::IdentifierType_t& sourceId() OMG_NOEXCEPT {
            return m_sourceId_;
        }

        const Common::IdentifierType_t& sourceId() const OMG_NOEXCEPT {
            return m_sourceId_;
        }

        void sourceId(const Common::IdentifierType_t& value) {
            m_sourceId_ = value;
        }

        void sourceId(Common::IdentifierType_t&& value) {
            m_sourceId_ = std::move(value);
        }
        std::string& alarmTypeName() OMG_NOEXCEPT {
            return m_alarmTypeName_;
        }

        const std::string& alarmTypeName() const OMG_NOEXCEPT {
            return m_alarmTypeName_;
        }

        void alarmTypeName(const std::string& value) {
            m_alarmTypeName_ = value;
        }

        void alarmTypeName(std::string&& value) {
            m_alarmTypeName_ = std::move(value);
        }
        Alarms::Severities& severity() OMG_NOEXCEPT {
            return m_severity_;
        }

        const Alarms::Severities& severity() const OMG_NOEXCEPT {
            return m_severity_;
        }

        void severity(const Alarms::Severities& value) {
            m_severity_ = value;
        }

        void severity(Alarms::Severities&& value) {
            m_severity_ = std::move(value);
        }
        Alarms::State& null() OMG_NOEXCEPT {
            return m_null_;
        }

        const Alarms::State& null() const OMG_NOEXCEPT {
            return m_null_;
        }

        void null(const Alarms::State& value) {
            m_null_ = value;
        }

        void null(Alarms::State&& value) {
            m_null_ = std::move(value);
        }
        Alarms::ValueDefinition& numericValue() OMG_NOEXCEPT {
            return m_numericValue_;
        }

        const Alarms::ValueDefinition& numericValue() const OMG_NOEXCEPT {
            return m_numericValue_;
        }

        void numericValue(const Alarms::ValueDefinition& value) {
            m_numericValue_ = value;
        }

        void numericValue(Alarms::ValueDefinition&& value) {
            m_numericValue_ = std::move(value);
        }

        bool operator == (const Alarm& other_) const;
        bool operator != (const Alarm& other_) const;

        void swap(Alarm& other_) OMG_NOEXCEPT ;

      private:

        Common::IdentifierType_t m_sourceId_;
        std::string m_alarmTypeName_;
        Alarms::Severities m_severity_;
        Alarms::State m_null_;
        Alarms::ValueDefinition m_numericValue_;

    };

    inline void swap(Alarm& a, Alarm& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Alarm& sample);

    class NDDSUSERDllExport HumidityAlarm
    : public Alarms::Alarm {
      public:
        HumidityAlarm();

        explicit HumidityAlarm(
            const Common::IdentifierType_t& sourceId,
            const std::string& alarmTypeName,
            const Alarms::Severities& severity,
            const Alarms::State& null,
            const Alarms::ValueDefinition& numericValue,
            float relativeHumidity);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        HumidityAlarm (HumidityAlarm&&) = default;
        HumidityAlarm& operator=(HumidityAlarm&&) = default;
        HumidityAlarm& operator=(const HumidityAlarm&) = default;
        HumidityAlarm(const HumidityAlarm&) = default;
        #else
        HumidityAlarm(HumidityAlarm&& other_) OMG_NOEXCEPT;  
        HumidityAlarm& operator=(HumidityAlarm&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        float& relativeHumidity() OMG_NOEXCEPT {
            return m_relativeHumidity_;
        }

        const float& relativeHumidity() const OMG_NOEXCEPT {
            return m_relativeHumidity_;
        }

        void relativeHumidity(float value) {
            m_relativeHumidity_ = value;
        }

        bool operator == (const HumidityAlarm& other_) const;
        bool operator != (const HumidityAlarm& other_) const;

        void swap(HumidityAlarm& other_) OMG_NOEXCEPT ;

      private:

        float m_relativeHumidity_;

    };

    inline void swap(HumidityAlarm& a, HumidityAlarm& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HumidityAlarm& sample);

    class NDDSUSERDllExport MotionAlarm
    : public Alarms::Alarm {
      public:
        MotionAlarm();

        explicit MotionAlarm(
            const Common::IdentifierType_t& sourceId,
            const std::string& alarmTypeName,
            const Alarms::Severities& severity,
            const Alarms::State& null,
            const Alarms::ValueDefinition& numericValue,
            const Common::MeasurementCoordinate_t& coordinate);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        MotionAlarm (MotionAlarm&&) = default;
        MotionAlarm& operator=(MotionAlarm&&) = default;
        MotionAlarm& operator=(const MotionAlarm&) = default;
        MotionAlarm(const MotionAlarm&) = default;
        #else
        MotionAlarm(MotionAlarm&& other_) OMG_NOEXCEPT;  
        MotionAlarm& operator=(MotionAlarm&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        Common::MeasurementCoordinate_t& coordinate() OMG_NOEXCEPT {
            return m_coordinate_;
        }

        const Common::MeasurementCoordinate_t& coordinate() const OMG_NOEXCEPT {
            return m_coordinate_;
        }

        void coordinate(const Common::MeasurementCoordinate_t& value) {
            m_coordinate_ = value;
        }

        void coordinate(Common::MeasurementCoordinate_t&& value) {
            m_coordinate_ = std::move(value);
        }

        bool operator == (const MotionAlarm& other_) const;
        bool operator != (const MotionAlarm& other_) const;

        void swap(MotionAlarm& other_) OMG_NOEXCEPT ;

      private:

        Common::MeasurementCoordinate_t m_coordinate_;

    };

    inline void swap(MotionAlarm& a, MotionAlarm& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MotionAlarm& sample);

    class NDDSUSERDllExport FireAlarm
    : public Alarms::Alarm {
      public:
        FireAlarm();

        FireAlarm(
            const Common::IdentifierType_t& sourceId,
            const std::string& alarmTypeName,
            const Alarms::Severities& severity,
            const Alarms::State& null,
            const Alarms::ValueDefinition& numericValue,
            float temperature,
            const Common::UnitType& units);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        FireAlarm (FireAlarm&&) = default;
        FireAlarm& operator=(FireAlarm&&) = default;
        FireAlarm& operator=(const FireAlarm&) = default;
        FireAlarm(const FireAlarm&) = default;
        #else
        FireAlarm(FireAlarm&& other_) OMG_NOEXCEPT;  
        FireAlarm& operator=(FireAlarm&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        float& temperature() OMG_NOEXCEPT {
            return m_temperature_;
        }

        const float& temperature() const OMG_NOEXCEPT {
            return m_temperature_;
        }

        void temperature(float value) {
            m_temperature_ = value;
        }

        Common::UnitType& units() OMG_NOEXCEPT {
            return m_units_;
        }

        const Common::UnitType& units() const OMG_NOEXCEPT {
            return m_units_;
        }

        void units(const Common::UnitType& value) {
            m_units_ = value;
        }

        void units(Common::UnitType&& value) {
            m_units_ = std::move(value);
        }

        bool operator == (const FireAlarm& other_) const;
        bool operator != (const FireAlarm& other_) const;

        void swap(FireAlarm& other_) OMG_NOEXCEPT ;

      private:

        float m_temperature_;
        Common::UnitType m_units_;

    };

    inline void swap(FireAlarm& a, FireAlarm& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FireAlarm& sample);

    class NDDSUSERDllExport IntrusionAlarm
    : public Alarms::Alarm {
      public:
        IntrusionAlarm();

        explicit IntrusionAlarm(
            const Common::IdentifierType_t& sourceId,
            const std::string& alarmTypeName,
            const Alarms::Severities& severity,
            const Alarms::State& null,
            const Alarms::ValueDefinition& numericValue,
            const Common::MeasurementCoordinate_t& coordinate);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        IntrusionAlarm (IntrusionAlarm&&) = default;
        IntrusionAlarm& operator=(IntrusionAlarm&&) = default;
        IntrusionAlarm& operator=(const IntrusionAlarm&) = default;
        IntrusionAlarm(const IntrusionAlarm&) = default;
        #else
        IntrusionAlarm(IntrusionAlarm&& other_) OMG_NOEXCEPT;  
        IntrusionAlarm& operator=(IntrusionAlarm&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        Common::MeasurementCoordinate_t& coordinate() OMG_NOEXCEPT {
            return m_coordinate_;
        }

        const Common::MeasurementCoordinate_t& coordinate() const OMG_NOEXCEPT {
            return m_coordinate_;
        }

        void coordinate(const Common::MeasurementCoordinate_t& value) {
            m_coordinate_ = value;
        }

        void coordinate(Common::MeasurementCoordinate_t&& value) {
            m_coordinate_ = std::move(value);
        }

        bool operator == (const IntrusionAlarm& other_) const;
        bool operator != (const IntrusionAlarm& other_) const;

        void swap(IntrusionAlarm& other_) OMG_NOEXCEPT ;

      private:

        Common::MeasurementCoordinate_t m_coordinate_;

    };

    inline void swap(IntrusionAlarm& a, IntrusionAlarm& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IntrusionAlarm& sample);

} // namespace Alarms  

namespace rti {
    namespace flat {
        namespace topic {
            // Common Data Types
            // Identifies a resource
            // Time
        }
    }
}
namespace dds {
    namespace topic {

        // Common Data Types
        // Identifies a resource

        template<>
        struct topic_type_name< Common::IdentifierType_t > {
            NDDSUSERDllExport static std::string value() {
                return "Common::IdentifierType_t";
            }
        };

        template<>
        struct topic_type_support< Common::IdentifierType_t > {
            NDDSUSERDllExport 
            static void reset_sample(Common::IdentifierType_t& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Common::IdentifierType_t& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        // Time

        template<>
        struct topic_type_name< Common::DateTime_t > {
            NDDSUSERDllExport static std::string value() {
                return "Common::DateTime_t";
            }
        };

        template<>
        struct topic_type_support< Common::DateTime_t > {
            NDDSUSERDllExport 
            static void reset_sample(Common::DateTime_t& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Common::DateTime_t& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Common::MetaData_t > {
            NDDSUSERDllExport static std::string value() {
                return "Common::MetaData_t";
            }
        };

        template<>
        struct topic_type_support< Common::MetaData_t > {
            NDDSUSERDllExport 
            static void reset_sample(Common::MetaData_t& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Common::MetaData_t& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Common::MeasurementCoordinate_t > {
            NDDSUSERDllExport static std::string value() {
                return "Common::MeasurementCoordinate_t";
            }
        };

        template<>
        struct topic_type_support< Common::MeasurementCoordinate_t > {
            NDDSUSERDllExport 
            static void reset_sample(Common::MeasurementCoordinate_t& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Common::MeasurementCoordinate_t& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::ValueDefinition > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::ValueDefinition";
            }
        };

        template<>
        struct topic_type_support< Alarms::ValueDefinition > {
            NDDSUSERDllExport 
            static void reset_sample(Alarms::ValueDefinition& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::ValueDefinition& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::Alarm > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::Alarm";
            }
        };

        template<>
        struct is_topic_type< Alarms::Alarm > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Alarms::Alarm > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Alarms::Alarm& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Alarms::Alarm& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Alarms::Alarm& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::Alarm& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::HumidityAlarm > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::HumidityAlarm";
            }
        };

        template<>
        struct is_topic_type< Alarms::HumidityAlarm > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Alarms::HumidityAlarm > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Alarms::HumidityAlarm& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Alarms::HumidityAlarm& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Alarms::HumidityAlarm& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::HumidityAlarm& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::MotionAlarm > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::MotionAlarm";
            }
        };

        template<>
        struct is_topic_type< Alarms::MotionAlarm > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Alarms::MotionAlarm > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Alarms::MotionAlarm& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Alarms::MotionAlarm& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Alarms::MotionAlarm& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::MotionAlarm& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::FireAlarm > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::FireAlarm";
            }
        };

        template<>
        struct is_topic_type< Alarms::FireAlarm > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Alarms::FireAlarm > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Alarms::FireAlarm& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Alarms::FireAlarm& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Alarms::FireAlarm& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::FireAlarm& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< Alarms::IntrusionAlarm > {
            NDDSUSERDllExport static std::string value() {
                return "Alarms::IntrusionAlarm";
            }
        };

        template<>
        struct is_topic_type< Alarms::IntrusionAlarm > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Alarms::IntrusionAlarm > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Alarms::IntrusionAlarm& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Alarms::IntrusionAlarm& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Alarms::IntrusionAlarm& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Alarms::IntrusionAlarm& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        // Common Data Types

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::LargeString_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::MediumString_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::ShortString_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::Descriptor_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::Percentage_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::PressureInPascal_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::TemperatureInDegreesKelvin_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::ConcentrationInMolesPerCubicMetre_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        // Identifies a resource

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::IdentifierType_t > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Common::IdentifierType_t > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::IdentifierList_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<Common::ResponseCode_t>
        {
            static const Common::ResponseCode_t value;
        };
        template<>
        struct dynamic_type< Common::ResponseCode_t > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< Common::ResponseCode_t > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        // Time

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::DateTime_t > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Common::DateTime_t > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::MetaData_t > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Common::MetaData_t > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::MUTABLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::BinaryData_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<Common::UnitType>
        {
            static const Common::UnitType value;
        };
        template<>
        struct dynamic_type< Common::UnitType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< Common::UnitType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Common::MeasurementCoordinate_t > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Common::MeasurementCoordinate_t > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<Alarms::Severities>
        {
            static const Alarms::Severities value;
        };
        template<>
        struct dynamic_type< Alarms::Severities > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::Severities > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<Alarms::State>
        {
            static const Alarms::State value;
        };
        template<>
        struct dynamic_type< Alarms::State > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::State > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::ValueDefinition > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::ValueDefinition > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::Alarm > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::Alarm > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::HumidityAlarm > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::HumidityAlarm > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::MotionAlarm > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::MotionAlarm > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::FireAlarm > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::FireAlarm > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Alarms::IntrusionAlarm > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Alarms::IntrusionAlarm > {
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

#endif // Alarms_1053329249_hpp

