/*
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#ifndef TOPICS_HPP
#define TOPICS_HPP

#include <iostream>
#include "ddsEntities.hpp"

namespace MODULE
{
class DeviceStateRdr : public Reader {
    public:
        DeviceStateRdr(dds::domain::DomainParticipant participant);
        ~DeviceStateRdr(void){};

        void Handler(void);

    private:
};

class DeviceStateWtr : public Writer {
    public:
        DeviceStateWtr(dds::domain::DomainParticipant participant);
        ~DeviceStateWtr(void){};

        void Handler(
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> deviceStateWriter,
            dds::core::xtypes::DynamicData deviceStateSample);

    private:
};


class ConfigDevRdr : public Reader {
    public:
        ConfigDevRdr(dds::domain::DomainParticipant participant);
        ~ConfigDevRdr(void){};

        void Handler(void);

    private:
};

class ConfigDevWtr : public Writer {
    public:
        ConfigDevWtr(dds::domain::DomainParticipant participant);
        ~ConfigDevWtr(void){};

        void Handler(
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> configDevWriter,
            dds::core::xtypes::DynamicData configDevSample);

    private:
};

} // namespace MODULE


#endif // TOPICS_HPP
