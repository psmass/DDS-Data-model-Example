

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Alarms.hpp"
#include "AlarmsPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// Common Data Types

namespace Common {

    // Identifies a resource

    // ---- IdentifierType_t: 

    IdentifierType_t::IdentifierType_t() :
        m_resourceId_ (0u) ,
        m_id_ (0)  {
    }   

    IdentifierType_t::IdentifierType_t (
        uint32_t resourceId,
        int32_t id)
        :
            m_resourceId_( resourceId ),
            m_id_( id ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    IdentifierType_t::IdentifierType_t(IdentifierType_t&& other_) OMG_NOEXCEPT  :m_resourceId_ (std::move(other_.m_resourceId_))
    ,
    m_id_ (std::move(other_.m_id_))
    {
    } 

    IdentifierType_t& IdentifierType_t::operator=(IdentifierType_t&&  other_) OMG_NOEXCEPT {
        IdentifierType_t tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void IdentifierType_t::swap(IdentifierType_t& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_resourceId_, other_.m_resourceId_);
        swap(m_id_, other_.m_id_);
    }  

    bool IdentifierType_t::operator == (const IdentifierType_t& other_) const {
        if (m_resourceId_ != other_.m_resourceId_) {
            return false;
        }
        if (m_id_ != other_.m_id_) {
            return false;
        }
        return true;
    }
    bool IdentifierType_t::operator != (const IdentifierType_t& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const IdentifierType_t& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "resourceId: " << sample.resourceId()<<", ";
        o << "id: " << sample.id() ;
        o <<"]";
        return o;
    }

    std::ostream& operator << (std::ostream& o,const ResponseCode_t& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case ResponseCode_t::Invalid:
            o << "ResponseCode_t::Invalid" << " ";
            break;
            case ResponseCode_t::Success:
            o << "ResponseCode_t::Success" << " ";
            break;
            case ResponseCode_t::Pending:
            o << "ResponseCode_t::Pending" << " ";
            break;
            case ResponseCode_t::Error:
            o << "ResponseCode_t::Error" << " ";
            break;
        }
        return o;
    }

    // Time

    // ---- DateTime_t: 

    DateTime_t::DateTime_t() :
        m_secs_ (0ll) ,
        m_nsecs_ (0ll)  {
    }   

    DateTime_t::DateTime_t (
        int64_t secs,
        int64_t nsecs)
        :
            m_secs_( secs ),
            m_nsecs_( nsecs ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DateTime_t::DateTime_t(DateTime_t&& other_) OMG_NOEXCEPT  :m_secs_ (std::move(other_.m_secs_))
    ,
    m_nsecs_ (std::move(other_.m_nsecs_))
    {
    } 

    DateTime_t& DateTime_t::operator=(DateTime_t&&  other_) OMG_NOEXCEPT {
        DateTime_t tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void DateTime_t::swap(DateTime_t& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_secs_, other_.m_secs_);
        swap(m_nsecs_, other_.m_nsecs_);
    }  

    bool DateTime_t::operator == (const DateTime_t& other_) const {
        if (m_secs_ != other_.m_secs_) {
            return false;
        }
        if (m_nsecs_ != other_.m_nsecs_) {
            return false;
        }
        return true;
    }
    bool DateTime_t::operator != (const DateTime_t& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const DateTime_t& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "secs: " << sample.secs()<<", ";
        o << "nsecs: " << sample.nsecs() ;
        o <<"]";
        return o;
    }

    // ---- MetaData_t: 

    MetaData_t::MetaData_t()  {
    }   

    MetaData_t::MetaData_t (
        const Common::DateTime_t& timeOfGeneration)
        :
            m_timeOfGeneration_( timeOfGeneration ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MetaData_t::MetaData_t(MetaData_t&& other_) OMG_NOEXCEPT  :m_timeOfGeneration_ (std::move(other_.m_timeOfGeneration_))
    {
    } 

    MetaData_t& MetaData_t::operator=(MetaData_t&&  other_) OMG_NOEXCEPT {
        MetaData_t tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void MetaData_t::swap(MetaData_t& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_timeOfGeneration_, other_.m_timeOfGeneration_);
    }  

    bool MetaData_t::operator == (const MetaData_t& other_) const {
        if (m_timeOfGeneration_ != other_.m_timeOfGeneration_) {
            return false;
        }
        return true;
    }
    bool MetaData_t::operator != (const MetaData_t& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const MetaData_t& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "timeOfGeneration: " << sample.timeOfGeneration() ;
        o <<"]";
        return o;
    }

    std::ostream& operator << (std::ostream& o,const UnitType& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case UnitType::Farenheit:
            o << "UnitType::Farenheit" << " ";
            break;
            case UnitType::Celcius:
            o << "UnitType::Celcius" << " ";
            break;
            case UnitType::Percent:
            o << "UnitType::Percent" << " ";
            break;
        }
        return o;
    }

    // ---- MeasurementCoordinate_t: 

    MeasurementCoordinate_t::MeasurementCoordinate_t() :
        m_latitude_ (0.0) ,
        m_longitude_ (0.0)  {
    }   

    MeasurementCoordinate_t::MeasurementCoordinate_t (
        double latitude,
        double longitude)
        :
            m_latitude_( latitude ),
            m_longitude_( longitude ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MeasurementCoordinate_t::MeasurementCoordinate_t(MeasurementCoordinate_t&& other_) OMG_NOEXCEPT  :m_latitude_ (std::move(other_.m_latitude_))
    ,
    m_longitude_ (std::move(other_.m_longitude_))
    {
    } 

    MeasurementCoordinate_t& MeasurementCoordinate_t::operator=(MeasurementCoordinate_t&&  other_) OMG_NOEXCEPT {
        MeasurementCoordinate_t tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void MeasurementCoordinate_t::swap(MeasurementCoordinate_t& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_latitude_, other_.m_latitude_);
        swap(m_longitude_, other_.m_longitude_);
    }  

    bool MeasurementCoordinate_t::operator == (const MeasurementCoordinate_t& other_) const {
        if (m_latitude_ != other_.m_latitude_) {
            return false;
        }
        if (m_longitude_ != other_.m_longitude_) {
            return false;
        }
        return true;
    }
    bool MeasurementCoordinate_t::operator != (const MeasurementCoordinate_t& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const MeasurementCoordinate_t& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "latitude: " << std::setprecision(15) <<sample.latitude()<<", ";
        o << "longitude: " << std::setprecision(15) <<sample.longitude() ;
        o <<"]";
        return o;
    }

} // namespace Common  

namespace Alarms {

    std::ostream& operator << (std::ostream& o,const Severities& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case Severities::Critical:
            o << "Severities::Critical" << " ";
            break;
            case Severities::Major:
            o << "Severities::Major" << " ";
            break;
            case Severities::Minor:
            o << "Severities::Minor" << " ";
            break;
            case Severities::Informational:
            o << "Severities::Informational" << " ";
            break;
        }
        return o;
    }

    std::ostream& operator << (std::ostream& o,const State& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case State::Open:
            o << "State::Open" << " ";
            break;
            case State::Closed:
            o << "State::Closed" << " ";
            break;
        }
        return o;
    }

    // ---- ValueDefinition: 

    ValueDefinition::ValueDefinition() :
        m_Units_(Common::UnitType::Farenheit)  {
    }   

    ValueDefinition::ValueDefinition (
        const ::dds::core::optional< float >& number,
        const Common::UnitType& Units)
        :
            m_number_( number ),
            m_Units_( Units ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ValueDefinition::ValueDefinition(ValueDefinition&& other_) OMG_NOEXCEPT  :m_number_ (std::move(other_.m_number_))
    ,
    m_Units_ (std::move(other_.m_Units_))
    {
    } 

    ValueDefinition& ValueDefinition::operator=(ValueDefinition&&  other_) OMG_NOEXCEPT {
        ValueDefinition tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void ValueDefinition::swap(ValueDefinition& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_number_, other_.m_number_);
        swap(m_Units_, other_.m_Units_);
    }  

    bool ValueDefinition::operator == (const ValueDefinition& other_) const {
        if (m_number_ != other_.m_number_) {
            return false;
        }
        if (m_Units_ != other_.m_Units_) {
            return false;
        }
        return true;
    }
    bool ValueDefinition::operator != (const ValueDefinition& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const ValueDefinition& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "number: " << sample.number()<<", ";
        o << "Units: " << sample.Units() ;
        o <<"]";
        return o;
    }

    // ---- Alarm: 

    Alarm::Alarm() :
        m_alarmTypeName_ ("") ,
        m_severity_(Alarms::Severities::Critical) ,
        m_null_(Alarms::State::Open)  {
    }   

    Alarm::Alarm (
        const Common::IdentifierType_t& sourceId,
        const std::string& alarmTypeName,
        const Alarms::Severities& severity,
        const Alarms::State& null,
        const Alarms::ValueDefinition& numericValue)
        :
            m_sourceId_( sourceId ),
            m_alarmTypeName_( alarmTypeName ),
            m_severity_( severity ),
            m_null_( null ),
            m_numericValue_( numericValue ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Alarm::Alarm(Alarm&& other_) OMG_NOEXCEPT  :m_sourceId_ (std::move(other_.m_sourceId_))
    ,
    m_alarmTypeName_ (std::move(other_.m_alarmTypeName_))
    ,
    m_severity_ (std::move(other_.m_severity_))
    ,
    m_null_ (std::move(other_.m_null_))
    ,
    m_numericValue_ (std::move(other_.m_numericValue_))
    {
    } 

    Alarm& Alarm::operator=(Alarm&&  other_) OMG_NOEXCEPT {
        Alarm tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void Alarm::swap(Alarm& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_sourceId_, other_.m_sourceId_);
        swap(m_alarmTypeName_, other_.m_alarmTypeName_);
        swap(m_severity_, other_.m_severity_);
        swap(m_null_, other_.m_null_);
        swap(m_numericValue_, other_.m_numericValue_);
    }  

    bool Alarm::operator == (const Alarm& other_) const {
        if (m_sourceId_ != other_.m_sourceId_) {
            return false;
        }
        if (m_alarmTypeName_ != other_.m_alarmTypeName_) {
            return false;
        }
        if (m_severity_ != other_.m_severity_) {
            return false;
        }
        if (m_null_ != other_.m_null_) {
            return false;
        }
        if (m_numericValue_ != other_.m_numericValue_) {
            return false;
        }
        return true;
    }
    bool Alarm::operator != (const Alarm& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const Alarm& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "sourceId: " << sample.sourceId()<<", ";
        o << "alarmTypeName: " << sample.alarmTypeName()<<", ";
        o << "severity: " << sample.severity()<<", ";
        o << "null: " << sample.null()<<", ";
        o << "numericValue: " << sample.numericValue() ;
        o <<"]";
        return o;
    }

    // ---- HumidityAlarm: 

    HumidityAlarm::HumidityAlarm() :
        m_relativeHumidity_ (0.0f)  {
    }   

    HumidityAlarm::HumidityAlarm (
        const Common::IdentifierType_t& sourceId,
        const std::string& alarmTypeName,
        const Alarms::Severities& severity,
        const Alarms::State& null,
        const Alarms::ValueDefinition& numericValue,
        float relativeHumidity)
        :
            Alarms::Alarm(sourceId,alarmTypeName,severity,null,numericValue ),
            m_relativeHumidity_( relativeHumidity ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HumidityAlarm::HumidityAlarm(HumidityAlarm&& other_) OMG_NOEXCEPT  : 
    Alarms::Alarm(std::move(other_)),
    m_relativeHumidity_ (std::move(other_.m_relativeHumidity_))
    {
    } 

    HumidityAlarm& HumidityAlarm::operator=(HumidityAlarm&&  other_) OMG_NOEXCEPT {
        HumidityAlarm tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void HumidityAlarm::swap(HumidityAlarm& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        Alarms::Alarm::swap(other_);
        swap(m_relativeHumidity_, other_.m_relativeHumidity_);
    }  

    bool HumidityAlarm::operator == (const HumidityAlarm& other_) const {
        if (!Alarms::Alarm::operator == (other_)){
            return false;
        }
        if (m_relativeHumidity_ != other_.m_relativeHumidity_) {
            return false;
        }
        return true;
    }
    bool HumidityAlarm::operator != (const HumidityAlarm& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const HumidityAlarm& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << static_cast<const Alarms::Alarm &>(sample);
        o << "relativeHumidity: " << std::setprecision(9) <<sample.relativeHumidity() ;
        o <<"]";
        return o;
    }

    // ---- MotionAlarm: 

    MotionAlarm::MotionAlarm()  {
    }   

    MotionAlarm::MotionAlarm (
        const Common::IdentifierType_t& sourceId,
        const std::string& alarmTypeName,
        const Alarms::Severities& severity,
        const Alarms::State& null,
        const Alarms::ValueDefinition& numericValue,
        const Common::MeasurementCoordinate_t& coordinate)
        :
            Alarms::Alarm(sourceId,alarmTypeName,severity,null,numericValue ),
            m_coordinate_( coordinate ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MotionAlarm::MotionAlarm(MotionAlarm&& other_) OMG_NOEXCEPT  : 
    Alarms::Alarm(std::move(other_)),
    m_coordinate_ (std::move(other_.m_coordinate_))
    {
    } 

    MotionAlarm& MotionAlarm::operator=(MotionAlarm&&  other_) OMG_NOEXCEPT {
        MotionAlarm tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void MotionAlarm::swap(MotionAlarm& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        Alarms::Alarm::swap(other_);
        swap(m_coordinate_, other_.m_coordinate_);
    }  

    bool MotionAlarm::operator == (const MotionAlarm& other_) const {
        if (!Alarms::Alarm::operator == (other_)){
            return false;
        }
        if (m_coordinate_ != other_.m_coordinate_) {
            return false;
        }
        return true;
    }
    bool MotionAlarm::operator != (const MotionAlarm& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const MotionAlarm& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << static_cast<const Alarms::Alarm &>(sample);
        o << "coordinate: " << sample.coordinate() ;
        o <<"]";
        return o;
    }

    // ---- FireAlarm: 

    FireAlarm::FireAlarm() :
        m_temperature_ (0.0f) ,
        m_units_(Common::UnitType::Farenheit)  {
    }   

    FireAlarm::FireAlarm (
        const Common::IdentifierType_t& sourceId,
        const std::string& alarmTypeName,
        const Alarms::Severities& severity,
        const Alarms::State& null,
        const Alarms::ValueDefinition& numericValue,
        float temperature,
        const Common::UnitType& units)
        :
            Alarms::Alarm(sourceId,alarmTypeName,severity,null,numericValue ),
            m_temperature_( temperature ),
            m_units_( units ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    FireAlarm::FireAlarm(FireAlarm&& other_) OMG_NOEXCEPT  : 
    Alarms::Alarm(std::move(other_)),
    m_temperature_ (std::move(other_.m_temperature_))
    ,
    m_units_ (std::move(other_.m_units_))
    {
    } 

    FireAlarm& FireAlarm::operator=(FireAlarm&&  other_) OMG_NOEXCEPT {
        FireAlarm tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void FireAlarm::swap(FireAlarm& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        Alarms::Alarm::swap(other_);
        swap(m_temperature_, other_.m_temperature_);
        swap(m_units_, other_.m_units_);
    }  

    bool FireAlarm::operator == (const FireAlarm& other_) const {
        if (!Alarms::Alarm::operator == (other_)){
            return false;
        }
        if (m_temperature_ != other_.m_temperature_) {
            return false;
        }
        if (m_units_ != other_.m_units_) {
            return false;
        }
        return true;
    }
    bool FireAlarm::operator != (const FireAlarm& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const FireAlarm& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << static_cast<const Alarms::Alarm &>(sample);
        o << "temperature: " << std::setprecision(9) <<sample.temperature()<<", ";
        o << "units: " << sample.units() ;
        o <<"]";
        return o;
    }

    // ---- IntrusionAlarm: 

    IntrusionAlarm::IntrusionAlarm()  {
    }   

    IntrusionAlarm::IntrusionAlarm (
        const Common::IdentifierType_t& sourceId,
        const std::string& alarmTypeName,
        const Alarms::Severities& severity,
        const Alarms::State& null,
        const Alarms::ValueDefinition& numericValue,
        const Common::MeasurementCoordinate_t& coordinate)
        :
            Alarms::Alarm(sourceId,alarmTypeName,severity,null,numericValue ),
            m_coordinate_( coordinate ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    IntrusionAlarm::IntrusionAlarm(IntrusionAlarm&& other_) OMG_NOEXCEPT  : 
    Alarms::Alarm(std::move(other_)),
    m_coordinate_ (std::move(other_.m_coordinate_))
    {
    } 

    IntrusionAlarm& IntrusionAlarm::operator=(IntrusionAlarm&&  other_) OMG_NOEXCEPT {
        IntrusionAlarm tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void IntrusionAlarm::swap(IntrusionAlarm& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        Alarms::Alarm::swap(other_);
        swap(m_coordinate_, other_.m_coordinate_);
    }  

    bool IntrusionAlarm::operator == (const IntrusionAlarm& other_) const {
        if (!Alarms::Alarm::operator == (other_)){
            return false;
        }
        if (m_coordinate_ != other_.m_coordinate_) {
            return false;
        }
        return true;
    }
    bool IntrusionAlarm::operator != (const IntrusionAlarm& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const IntrusionAlarm& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << static_cast<const Alarms::Alarm &>(sample);
        o << "coordinate: " << sample.coordinate() ;
        o <<"]";
        return o;
    }

} // namespace Alarms  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {
        // Common Data Types

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::LargeString_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LargeString_t_g_tc_string;

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

                LargeString_t_g_tc_string = initialize_string_typecode(((Common::MAX_LEN)));

                LargeString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LargeString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&LargeString_t_g_tc_string;

                /* Initialize the values for member annotations. */
                LargeString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                LargeString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                LargeString_t_g_tc._data._sampleAccessInfo = sample_access_info();
                LargeString_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LargeString_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::LargeString_t);

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
                interpreter::get_aggregation_value_pointer< Common::LargeString_t >;

                LargeString_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LargeString_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &LargeString_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::LargeString_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::LargeString_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::MediumString_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MediumString_t_g_tc_string;

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

                MediumString_t_g_tc_string = initialize_string_typecode(((Common::MED_LEN)));

                MediumString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MediumString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&MediumString_t_g_tc_string;

                /* Initialize the values for member annotations. */
                MediumString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MediumString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MediumString_t_g_tc._data._sampleAccessInfo = sample_access_info();
                MediumString_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MediumString_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::MediumString_t);

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
                interpreter::get_aggregation_value_pointer< Common::MediumString_t >;

                MediumString_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MediumString_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MediumString_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::MediumString_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::MediumString_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::ShortString_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ShortString_t_g_tc_string;

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

                ShortString_t_g_tc_string = initialize_string_typecode(((Common::MIN_LEN)));

                ShortString_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ShortString_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&ShortString_t_g_tc_string;

                /* Initialize the values for member annotations. */
                ShortString_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ShortString_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ShortString_t_g_tc._data._sampleAccessInfo = sample_access_info();
                ShortString_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ShortString_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::ShortString_t);

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
                interpreter::get_aggregation_value_pointer< Common::ShortString_t >;

                ShortString_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ShortString_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ShortString_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::ShortString_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::ShortString_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::Descriptor_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                Descriptor_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::ShortString_t_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Descriptor_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                Descriptor_t_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                Descriptor_t_g_tc._data._sampleAccessInfo = sample_access_info();
                Descriptor_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Descriptor_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::Descriptor_t);

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
                interpreter::get_aggregation_value_pointer< Common::Descriptor_t >;

                Descriptor_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Descriptor_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Descriptor_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::Descriptor_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::Descriptor_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::Percentage_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                Percentage_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                Percentage_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Percentage_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
                Percentage_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Percentage_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Percentage_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Percentage_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                Percentage_t_g_tc._data._sampleAccessInfo = sample_access_info();
                Percentage_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Percentage_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::Percentage_t);

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
                interpreter::get_aggregation_value_pointer< Common::Percentage_t >;

                Percentage_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Percentage_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Percentage_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::Percentage_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::Percentage_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::PressureInPascal_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                PressureInPascal_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                PressureInPascal_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PressureInPascal_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
                PressureInPascal_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PressureInPascal_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PressureInPascal_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PressureInPascal_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                PressureInPascal_t_g_tc._data._sampleAccessInfo = sample_access_info();
                PressureInPascal_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PressureInPascal_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::PressureInPascal_t);

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
                interpreter::get_aggregation_value_pointer< Common::PressureInPascal_t >;

                PressureInPascal_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PressureInPascal_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PressureInPascal_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::PressureInPascal_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::PressureInPascal_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::TemperatureInDegreesKelvin_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                TemperatureInDegreesKelvin_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                TemperatureInDegreesKelvin_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                TemperatureInDegreesKelvin_t_g_tc._data._sampleAccessInfo = sample_access_info();
                TemperatureInDegreesKelvin_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &TemperatureInDegreesKelvin_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::TemperatureInDegreesKelvin_t);

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
                interpreter::get_aggregation_value_pointer< Common::TemperatureInDegreesKelvin_t >;

                TemperatureInDegreesKelvin_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TemperatureInDegreesKelvin_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TemperatureInDegreesKelvin_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::TemperatureInDegreesKelvin_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::TemperatureInDegreesKelvin_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::ConcentrationInMolesPerCubicMetre_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                ConcentrationInMolesPerCubicMetre_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._minValue._u.float_value = 0.0f;
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                ConcentrationInMolesPerCubicMetre_t_g_tc._data._sampleAccessInfo = sample_access_info();
                ConcentrationInMolesPerCubicMetre_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ConcentrationInMolesPerCubicMetre_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::ConcentrationInMolesPerCubicMetre_t);

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
                interpreter::get_aggregation_value_pointer< Common::ConcentrationInMolesPerCubicMetre_t >;

                ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ConcentrationInMolesPerCubicMetre_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ConcentrationInMolesPerCubicMetre_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::ConcentrationInMolesPerCubicMetre_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::ConcentrationInMolesPerCubicMetre_t_AliasTag_t >::get())));
        }

        // Identifies a resource

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::IdentifierType_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                IdentifierType_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                IdentifierType_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                IdentifierType_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                IdentifierType_t_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                IdentifierType_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                IdentifierType_t_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                IdentifierType_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                IdentifierType_t_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                IdentifierType_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                IdentifierType_t_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                IdentifierType_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                IdentifierType_t_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                IdentifierType_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                IdentifierType_t_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                IdentifierType_t_g_tc._data._sampleAccessInfo = sample_access_info();
                IdentifierType_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &IdentifierType_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceId() - (char *)sample);

                IdentifierType_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->id() - (char *)sample);

                IdentifierType_t_g_sampleAccessInfo.memberAccessInfos = 
                IdentifierType_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::IdentifierType_t);

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
                interpreter::get_aggregation_value_pointer< Common::IdentifierType_t >;

                IdentifierType_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IdentifierType_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IdentifierType_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Common::IdentifierType_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::IdentifierType_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::IdentifierList_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IdentifierList_t_g_tc_sequence;

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

                IdentifierList_t_g_tc_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< Common::IdentifierType_t, (Common::MAX_LEN) > >(((Common::MAX_LEN)));

                IdentifierList_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IdentifierList_t_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::IdentifierType_t>::get().native();
                IdentifierList_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& IdentifierList_t_g_tc_sequence;

                /* Initialize the values for member annotations. */

                IdentifierList_t_g_tc._data._sampleAccessInfo = sample_access_info();
                IdentifierList_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &IdentifierList_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::IdentifierList_t);

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
                interpreter::get_aggregation_value_pointer< Common::IdentifierList_t >;

                IdentifierList_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IdentifierList_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IdentifierList_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::IdentifierList_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::IdentifierList_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const Common::ResponseCode_t default_enumerator<Common::ResponseCode_t>::value = Common::ResponseCode_t::Invalid;
        template<>
        struct native_type_code< Common::ResponseCode_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResponseCode_t_g_tc_members[4]=
                {

                    {
                        (char *)"Invalid",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::ResponseCode_t::Invalid), 
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
                        (char *)"Success",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::ResponseCode_t::Success), 
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
                        (char *)"Pending",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::ResponseCode_t::Pending), 
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
                        (char *)"Error",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::ResponseCode_t::Error), 
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

                static DDS_TypeCode ResponseCode_t_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Common::ResponseCode_t", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ResponseCode_t_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResponseCode_t*/

                if (is_initialized) {
                    return &ResponseCode_t_g_tc;
                }

                ResponseCode_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ResponseCode_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ResponseCode_t_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ResponseCode_t_g_tc._data._sampleAccessInfo = sample_access_info();
                ResponseCode_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResponseCode_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ResponseCode_t_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResponseCode_t_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResponseCode_t_g_sampleAccessInfo;
                }

                ResponseCode_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ResponseCode_t_g_sampleAccessInfo.memberAccessInfos = 
                ResponseCode_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::ResponseCode_t);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResponseCode_t_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResponseCode_t_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResponseCode_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResponseCode_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Common::ResponseCode_t >;

                ResponseCode_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResponseCode_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResponseCode_t_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ResponseCode_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< Common::ResponseCode_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::ResponseCode_t >::get())));
        }

        // Time

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::DateTime_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                DateTime_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
                DateTime_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

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

                DateTime_t_g_tc._data._sampleAccessInfo = sample_access_info();
                DateTime_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DateTime_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                (RTIXCdrUnsignedLong) ((char *)&sample->secs() - (char *)sample);

                DateTime_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nsecs() - (char *)sample);

                DateTime_t_g_sampleAccessInfo.memberAccessInfos = 
                DateTime_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::DateTime_t);

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
                interpreter::get_aggregation_value_pointer< Common::DateTime_t >;

                DateTime_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DateTime_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DateTime_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Common::DateTime_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::DateTime_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::MetaData_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

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

                MetaData_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::DateTime_t>::get().native();

                /* Initialize the values for member annotations. */

                MetaData_t_g_tc._data._sampleAccessInfo = sample_access_info();
                MetaData_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MetaData_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                (RTIXCdrUnsignedLong) ((char *)&sample->timeOfGeneration() - (char *)sample);

                MetaData_t_g_sampleAccessInfo.memberAccessInfos = 
                MetaData_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::MetaData_t);

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
                interpreter::get_aggregation_value_pointer< Common::MetaData_t >;

                MetaData_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MetaData_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MetaData_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Common::MetaData_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::MetaData_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::BinaryData_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BinaryData_t_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(Common::MAX_LEN), NULL,NULL);

                static DDS_TypeCode BinaryData_t_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_TRUE,/* Is a pointer? */
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

                BinaryData_t_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;
                BinaryData_t_g_tc._data._typeCode =  (RTICdrTypeCode *)& BinaryData_t_g_tc_array;

                /* Initialize the values for member annotations. */

                BinaryData_t_g_tc._data._sampleAccessInfo = sample_access_info();
                BinaryData_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BinaryData_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
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
                    size_t candidateTypeSize = sizeof(Common::BinaryData_t);

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
                interpreter::get_aggregation_value_pointer< Common::BinaryData_t >;

                BinaryData_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BinaryData_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BinaryData_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Common::BinaryData_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::BinaryData_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const Common::UnitType default_enumerator<Common::UnitType>::value = Common::UnitType::Farenheit;
        template<>
        struct native_type_code< Common::UnitType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UnitType_g_tc_members[3]=
                {

                    {
                        (char *)"Farenheit",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::UnitType::Farenheit), 
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
                        (char *)"Celcius",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::UnitType::Celcius), 
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
                        (char *)"Percent",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Common::UnitType::Percent), 
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

                static DDS_TypeCode UnitType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Common::UnitType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        UnitType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UnitType*/

                if (is_initialized) {
                    return &UnitType_g_tc;
                }

                UnitType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                UnitType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                UnitType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                UnitType_g_tc._data._sampleAccessInfo = sample_access_info();
                UnitType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &UnitType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo UnitType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UnitType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UnitType_g_sampleAccessInfo;
                }

                UnitType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                UnitType_g_sampleAccessInfo.memberAccessInfos = 
                UnitType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::UnitType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UnitType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UnitType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UnitType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UnitType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Common::UnitType >;

                UnitType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UnitType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UnitType_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &UnitType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< Common::UnitType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::UnitType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Common::MeasurementCoordinate_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MeasurementCoordinate_t_g_tc_members[2]=
                {

                    {
                        (char *)"latitude",/* Member name */
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
                        (char *)"longitude",/* Member name */
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

                static DDS_TypeCode MeasurementCoordinate_t_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Common::MeasurementCoordinate_t", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MeasurementCoordinate_t_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MeasurementCoordinate_t*/

                if (is_initialized) {
                    return &MeasurementCoordinate_t_g_tc;
                }

                MeasurementCoordinate_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MeasurementCoordinate_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                MeasurementCoordinate_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                MeasurementCoordinate_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                MeasurementCoordinate_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MeasurementCoordinate_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MeasurementCoordinate_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                MeasurementCoordinate_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                MeasurementCoordinate_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                MeasurementCoordinate_t_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                MeasurementCoordinate_t_g_tc._data._sampleAccessInfo = sample_access_info();
                MeasurementCoordinate_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MeasurementCoordinate_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Common::MeasurementCoordinate_t *sample;

                static RTIXCdrMemberAccessInfo MeasurementCoordinate_t_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MeasurementCoordinate_t_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MeasurementCoordinate_t_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Common::MeasurementCoordinate_t);
                if (sample == NULL) {
                    return NULL;
                }

                MeasurementCoordinate_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->latitude() - (char *)sample);

                MeasurementCoordinate_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->longitude() - (char *)sample);

                MeasurementCoordinate_t_g_sampleAccessInfo.memberAccessInfos = 
                MeasurementCoordinate_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Common::MeasurementCoordinate_t);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MeasurementCoordinate_t_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MeasurementCoordinate_t_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MeasurementCoordinate_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MeasurementCoordinate_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Common::MeasurementCoordinate_t >;

                MeasurementCoordinate_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MeasurementCoordinate_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MeasurementCoordinate_t_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MeasurementCoordinate_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Common::MeasurementCoordinate_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Common::MeasurementCoordinate_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const Alarms::Severities default_enumerator<Alarms::Severities>::value = Alarms::Severities::Critical;
        template<>
        struct native_type_code< Alarms::Severities > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Severities_g_tc_members[4]=
                {

                    {
                        (char *)"Critical",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::Severities::Critical), 
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
                        (char *)"Major",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::Severities::Major), 
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
                        (char *)"Minor",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::Severities::Minor), 
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
                        (char *)"Informational",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::Severities::Informational), 
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

                static DDS_TypeCode Severities_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::Severities", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Severities_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Severities*/

                if (is_initialized) {
                    return &Severities_g_tc;
                }

                Severities_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                Severities_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                Severities_g_tc._data._annotations._defaultValue._u.long_value = 0;

                Severities_g_tc._data._sampleAccessInfo = sample_access_info();
                Severities_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Severities_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Severities_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Severities_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Severities_g_sampleAccessInfo;
                }

                Severities_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Severities_g_sampleAccessInfo.memberAccessInfos = 
                Severities_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::Severities);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Severities_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Severities_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Severities_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Severities_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::Severities >;

                Severities_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Severities_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Severities_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Severities_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< Alarms::Severities >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::Severities >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const Alarms::State default_enumerator<Alarms::State>::value = Alarms::State::Open;
        template<>
        struct native_type_code< Alarms::State > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member State_g_tc_members[2]=
                {

                    {
                        (char *)"Open",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::State::Open), 
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
                        (char *)"Closed",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(Alarms::State::Closed), 
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

                static DDS_TypeCode State_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::State", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        State_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for State*/

                if (is_initialized) {
                    return &State_g_tc;
                }

                State_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                State_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                State_g_tc._data._annotations._defaultValue._u.long_value = 0;

                State_g_tc._data._sampleAccessInfo = sample_access_info();
                State_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &State_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo State_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo State_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &State_g_sampleAccessInfo;
                }

                State_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                State_g_sampleAccessInfo.memberAccessInfos = 
                State_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::State);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        State_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        State_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                State_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                State_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::State >;

                State_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &State_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin State_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &State_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< Alarms::State >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::State >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::ValueDefinition > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ValueDefinition_g_tc_members[2]=
                {

                    {
                        (char *)"number",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Units",/* Member name */
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

                static DDS_TypeCode ValueDefinition_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::ValueDefinition", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ValueDefinition_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ValueDefinition*/

                if (is_initialized) {
                    return &ValueDefinition_g_tc;
                }

                ValueDefinition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ValueDefinition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                ValueDefinition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::UnitType>::get().native();

                /* Initialize the values for member annotations. */
                ValueDefinition_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                ValueDefinition_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                ValueDefinition_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                ValueDefinition_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                ValueDefinition_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ValueDefinition_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ValueDefinition_g_tc._data._sampleAccessInfo = sample_access_info();
                ValueDefinition_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ValueDefinition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::ValueDefinition *sample;

                static RTIXCdrMemberAccessInfo ValueDefinition_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ValueDefinition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ValueDefinition_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::ValueDefinition);
                if (sample == NULL) {
                    return NULL;
                }

                ValueDefinition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->number() - (char *)sample);

                ValueDefinition_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Units() - (char *)sample);

                ValueDefinition_g_sampleAccessInfo.memberAccessInfos = 
                ValueDefinition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::ValueDefinition);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ValueDefinition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ValueDefinition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ValueDefinition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ValueDefinition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::ValueDefinition >;

                ValueDefinition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ValueDefinition_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ValueDefinition_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ValueDefinition_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::ValueDefinition >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::ValueDefinition >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::Alarm > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Alarm_g_tc_members[5]=
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
                        (char *)"alarmTypeName",/* Member name */
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
                        (char *)"severity",/* Member name */
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
                        (char *)"null",/* Member name */
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
                        (char *)"numericValue",/* Member name */
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

                static DDS_TypeCode Alarm_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::Alarm", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        Alarm_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Alarm*/

                if (is_initialized) {
                    return &Alarm_g_tc;
                }

                Alarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Alarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::IdentifierType_t>::get().native();
                Alarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::Descriptor_t_AliasTag_t>::get().native();
                Alarm_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::Severities>::get().native();
                Alarm_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::State>::get().native();
                Alarm_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::ValueDefinition>::get().native();

                /* Initialize the values for member annotations. */

                Alarm_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                Alarm_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                Alarm_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                Alarm_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                Alarm_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                Alarm_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                Alarm_g_tc._data._sampleAccessInfo = sample_access_info();
                Alarm_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Alarm_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::Alarm *sample;

                static RTIXCdrMemberAccessInfo Alarm_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Alarm_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Alarm_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::Alarm);
                if (sample == NULL) {
                    return NULL;
                }

                Alarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sourceId() - (char *)sample);

                Alarm_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alarmTypeName() - (char *)sample);

                Alarm_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->severity() - (char *)sample);

                Alarm_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->null() - (char *)sample);

                Alarm_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numericValue() - (char *)sample);

                Alarm_g_sampleAccessInfo.memberAccessInfos = 
                Alarm_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::Alarm);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Alarm_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Alarm_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Alarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Alarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::Alarm >;

                Alarm_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Alarm_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Alarm_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Alarm_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::Alarm >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::Alarm >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::HumidityAlarm > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HumidityAlarm_g_tc_members[1]=
                {

                    {
                        (char *)"relativeHumidity",/* Member name */
                        {
                            5,/* Representation ID */
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

                static DDS_TypeCode HumidityAlarm_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::HumidityAlarm", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        HumidityAlarm_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HumidityAlarm*/

                if (is_initialized) {
                    return &HumidityAlarm_g_tc;
                }

                HumidityAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HumidityAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::Percentage_t_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                HumidityAlarm_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                HumidityAlarm_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                HumidityAlarm_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                HumidityAlarm_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                HumidityAlarm_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                HumidityAlarm_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                HumidityAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::Alarm >::get().native(); /* Base class */

                HumidityAlarm_g_tc._data._sampleAccessInfo = sample_access_info();
                HumidityAlarm_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HumidityAlarm_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::HumidityAlarm *sample;

                static RTIXCdrMemberAccessInfo HumidityAlarm_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HumidityAlarm_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HumidityAlarm_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::HumidityAlarm);
                if (sample == NULL) {
                    return NULL;
                }

                HumidityAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity() - (char *)sample);

                HumidityAlarm_g_sampleAccessInfo.memberAccessInfos = 
                HumidityAlarm_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::HumidityAlarm);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HumidityAlarm_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HumidityAlarm_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HumidityAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HumidityAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::HumidityAlarm >;

                HumidityAlarm_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HumidityAlarm_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HumidityAlarm_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &HumidityAlarm_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::HumidityAlarm >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::HumidityAlarm >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::MotionAlarm > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MotionAlarm_g_tc_members[1]=
                {

                    {
                        (char *)"coordinate",/* Member name */
                        {
                            5,/* Representation ID */
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

                static DDS_TypeCode MotionAlarm_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::MotionAlarm", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MotionAlarm_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MotionAlarm*/

                if (is_initialized) {
                    return &MotionAlarm_g_tc;
                }

                MotionAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MotionAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::MeasurementCoordinate_t>::get().native();

                /* Initialize the values for member annotations. */

                MotionAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::Alarm >::get().native(); /* Base class */

                MotionAlarm_g_tc._data._sampleAccessInfo = sample_access_info();
                MotionAlarm_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MotionAlarm_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::MotionAlarm *sample;

                static RTIXCdrMemberAccessInfo MotionAlarm_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MotionAlarm_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MotionAlarm_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::MotionAlarm);
                if (sample == NULL) {
                    return NULL;
                }

                MotionAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coordinate() - (char *)sample);

                MotionAlarm_g_sampleAccessInfo.memberAccessInfos = 
                MotionAlarm_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::MotionAlarm);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MotionAlarm_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MotionAlarm_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MotionAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MotionAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::MotionAlarm >;

                MotionAlarm_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MotionAlarm_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MotionAlarm_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MotionAlarm_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::MotionAlarm >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::MotionAlarm >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::FireAlarm > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FireAlarm_g_tc_members[2]=
                {

                    {
                        (char *)"temperature",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"units",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode FireAlarm_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::FireAlarm", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FireAlarm_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FireAlarm*/

                if (is_initialized) {
                    return &FireAlarm_g_tc;
                }

                FireAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FireAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                FireAlarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::UnitType>::get().native();

                /* Initialize the values for member annotations. */
                FireAlarm_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                FireAlarm_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                FireAlarm_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                FireAlarm_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                FireAlarm_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                FireAlarm_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                FireAlarm_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FireAlarm_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                FireAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::Alarm >::get().native(); /* Base class */

                FireAlarm_g_tc._data._sampleAccessInfo = sample_access_info();
                FireAlarm_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &FireAlarm_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::FireAlarm *sample;

                static RTIXCdrMemberAccessInfo FireAlarm_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FireAlarm_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FireAlarm_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::FireAlarm);
                if (sample == NULL) {
                    return NULL;
                }

                FireAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temperature() - (char *)sample);

                FireAlarm_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->units() - (char *)sample);

                FireAlarm_g_sampleAccessInfo.memberAccessInfos = 
                FireAlarm_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::FireAlarm);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FireAlarm_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FireAlarm_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FireAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FireAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::FireAlarm >;

                FireAlarm_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FireAlarm_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FireAlarm_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &FireAlarm_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::FireAlarm >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::FireAlarm >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Alarms::IntrusionAlarm > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IntrusionAlarm_g_tc_members[1]=
                {

                    {
                        (char *)"coordinate",/* Member name */
                        {
                            5,/* Representation ID */
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

                static DDS_TypeCode IntrusionAlarm_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Alarms::IntrusionAlarm", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        IntrusionAlarm_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IntrusionAlarm*/

                if (is_initialized) {
                    return &IntrusionAlarm_g_tc;
                }

                IntrusionAlarm_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IntrusionAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Common::MeasurementCoordinate_t>::get().native();

                /* Initialize the values for member annotations. */

                IntrusionAlarm_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Alarms::Alarm >::get().native(); /* Base class */

                IntrusionAlarm_g_tc._data._sampleAccessInfo = sample_access_info();
                IntrusionAlarm_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &IntrusionAlarm_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Alarms::IntrusionAlarm *sample;

                static RTIXCdrMemberAccessInfo IntrusionAlarm_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IntrusionAlarm_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IntrusionAlarm_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Alarms::IntrusionAlarm);
                if (sample == NULL) {
                    return NULL;
                }

                IntrusionAlarm_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coordinate() - (char *)sample);

                IntrusionAlarm_g_sampleAccessInfo.memberAccessInfos = 
                IntrusionAlarm_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Alarms::IntrusionAlarm);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IntrusionAlarm_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IntrusionAlarm_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IntrusionAlarm_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IntrusionAlarm_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Alarms::IntrusionAlarm >;

                IntrusionAlarm_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IntrusionAlarm_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IntrusionAlarm_g_typePlugin = 
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
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IntrusionAlarm_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Alarms::IntrusionAlarm >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Alarms::IntrusionAlarm >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        // Common Data Types
        // Identifies a resource

        void topic_type_support< Common::IdentifierType_t >::reset_sample(Common::IdentifierType_t& sample) 
        {
            sample.resourceId(0u);
            sample.id(0);
        }

        void topic_type_support< Common::IdentifierType_t >::allocate_sample(Common::IdentifierType_t& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        // Time

        void topic_type_support< Common::DateTime_t >::reset_sample(Common::DateTime_t& sample) 
        {
            sample.secs(0ll);
            sample.nsecs(0ll);
        }

        void topic_type_support< Common::DateTime_t >::allocate_sample(Common::DateTime_t& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< Common::MetaData_t >::reset_sample(Common::MetaData_t& sample) 
        {
            ::rti::topic::reset_sample(sample.timeOfGeneration());
        }

        void topic_type_support< Common::MetaData_t >::allocate_sample(Common::MetaData_t& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeOfGeneration(),  -1, -1);
        }

        void topic_type_support< Common::MeasurementCoordinate_t >::reset_sample(Common::MeasurementCoordinate_t& sample) 
        {
            sample.latitude(0.0);
            sample.longitude(0.0);
        }

        void topic_type_support< Common::MeasurementCoordinate_t >::allocate_sample(Common::MeasurementCoordinate_t& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< Alarms::ValueDefinition >::reset_sample(Alarms::ValueDefinition& sample) 
        {
            ::rti::topic::reset_sample(sample.number());
            sample.Units(Common::UnitType::Farenheit);
        }

        void topic_type_support< Alarms::ValueDefinition >::allocate_sample(Alarms::ValueDefinition& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.Units(),  -1, -1);
        }

        void topic_type_support< Alarms::Alarm >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Alarms::AlarmPlugin_new,
                Alarms::AlarmPlugin_delete);
        }

        std::vector<char>& topic_type_support< Alarms::Alarm >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Alarms::Alarm& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = AlarmPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = AlarmPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Alarms::Alarm >::from_cdr_buffer(Alarms::Alarm& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = AlarmPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Alarms::Alarm from cdr buffer");
        }

        void topic_type_support< Alarms::Alarm >::reset_sample(Alarms::Alarm& sample) 
        {
            ::rti::topic::reset_sample(sample.sourceId());
            sample.alarmTypeName("");
            sample.severity(Alarms::Severities::Critical);
            sample.null(Alarms::State::Open);
            ::rti::topic::reset_sample(sample.numericValue());
        }

        void topic_type_support< Alarms::Alarm >::allocate_sample(Alarms::Alarm& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.sourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.alarmTypeName(),  -1, (Common::MIN_LEN));
            ::rti::topic::allocate_sample(sample.severity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.null(),  -1, -1);
            ::rti::topic::allocate_sample(sample.numericValue(),  -1, -1);
        }

        void topic_type_support< Alarms::HumidityAlarm >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Alarms::HumidityAlarmPlugin_new,
                Alarms::HumidityAlarmPlugin_delete);
        }

        std::vector<char>& topic_type_support< Alarms::HumidityAlarm >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Alarms::HumidityAlarm& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HumidityAlarmPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HumidityAlarmPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Alarms::HumidityAlarm >::from_cdr_buffer(Alarms::HumidityAlarm& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HumidityAlarmPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Alarms::HumidityAlarm from cdr buffer");
        }

        void topic_type_support< Alarms::HumidityAlarm >::reset_sample(Alarms::HumidityAlarm& sample) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::reset_sample(sample);

            sample.relativeHumidity(0.0f);
        }

        void topic_type_support< Alarms::HumidityAlarm >::allocate_sample(Alarms::HumidityAlarm& sample, int, int) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::allocate_sample(sample, -1, -1);

        }

        void topic_type_support< Alarms::MotionAlarm >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Alarms::MotionAlarmPlugin_new,
                Alarms::MotionAlarmPlugin_delete);
        }

        std::vector<char>& topic_type_support< Alarms::MotionAlarm >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Alarms::MotionAlarm& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MotionAlarmPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MotionAlarmPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Alarms::MotionAlarm >::from_cdr_buffer(Alarms::MotionAlarm& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MotionAlarmPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Alarms::MotionAlarm from cdr buffer");
        }

        void topic_type_support< Alarms::MotionAlarm >::reset_sample(Alarms::MotionAlarm& sample) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.coordinate());
        }

        void topic_type_support< Alarms::MotionAlarm >::allocate_sample(Alarms::MotionAlarm& sample, int, int) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.coordinate(),  -1, -1);
        }

        void topic_type_support< Alarms::FireAlarm >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Alarms::FireAlarmPlugin_new,
                Alarms::FireAlarmPlugin_delete);
        }

        std::vector<char>& topic_type_support< Alarms::FireAlarm >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Alarms::FireAlarm& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FireAlarmPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FireAlarmPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Alarms::FireAlarm >::from_cdr_buffer(Alarms::FireAlarm& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FireAlarmPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Alarms::FireAlarm from cdr buffer");
        }

        void topic_type_support< Alarms::FireAlarm >::reset_sample(Alarms::FireAlarm& sample) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::reset_sample(sample);

            sample.temperature(0.0f);
            sample.units(Common::UnitType::Farenheit);
        }

        void topic_type_support< Alarms::FireAlarm >::allocate_sample(Alarms::FireAlarm& sample, int, int) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.units(),  -1, -1);
        }

        void topic_type_support< Alarms::IntrusionAlarm >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Alarms::IntrusionAlarmPlugin_new,
                Alarms::IntrusionAlarmPlugin_delete);
        }

        std::vector<char>& topic_type_support< Alarms::IntrusionAlarm >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Alarms::IntrusionAlarm& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IntrusionAlarmPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IntrusionAlarmPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Alarms::IntrusionAlarm >::from_cdr_buffer(Alarms::IntrusionAlarm& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IntrusionAlarmPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Alarms::IntrusionAlarm from cdr buffer");
        }

        void topic_type_support< Alarms::IntrusionAlarm >::reset_sample(Alarms::IntrusionAlarm& sample) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.coordinate());
        }

        void topic_type_support< Alarms::IntrusionAlarm >::allocate_sample(Alarms::IntrusionAlarm& sample, int, int) 
        {
            // Initialize base
            topic_type_support< Alarms::Alarm >::allocate_sample(sample, -1, -1);

            ::rti::topic::allocate_sample(sample.coordinate(),  -1, -1);
        }

    }
}  

