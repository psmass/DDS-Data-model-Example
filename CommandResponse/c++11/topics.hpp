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
#include "CommandResp.hpp"

namespace MODULE
{

    /* How to use specific topic Readers and Writers:

    The Topic specific Reader Constructor -  can be used to update Topic Specific Content filters 
     - e.g. in the case of a device Reader, it should register for myTopic - i.e.
     commands directed specifically to it from a controller.

    The controller readers likely would not want to filter for a specific deviceID,
    as generally controllers handle all the data sent to them. Controllers typically
    are not a specific target ID either.

    The Topic specific Writer member functions. 

    Specific Writer Handlers have two parts, the Initial Setup and the Handler Loop.
    The user may want add code  in the Initial Setup (prior to the Handler Loop) to
    statically set the source ID (in the case of a device) or any other static data. 
    This is done once and is topic specific.

    Code can be added in the loop write the topic periodically. If non periodic, the loop
    can be used for writer event status and sleep periodically with no write operation.
    A separate writeData(data) member funcstion can be added to the specific topic class to
    allow the main program to set data and write at will.

*/

class DeviceStateRdr : public Reader {
    public:
        DeviceStateRdr(dds::domain::DomainParticipant participant);
        ~DeviceStateRdr(void){};

        void Handler(dds::sub::LoanedSamples<dds::core::xtypes::DynamicData> * sample);

    private:
};

class DeviceStateWtr : public Writer {
    public:
        DeviceStateWtr(dds::domain::DomainParticipant participant);
        ~DeviceStateWtr(void){};

        void Handler(
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> deviceStateWriter,
            dds::core::xtypes::DynamicData deviceStateSample);

        // Device State is writen when ever it changes. The writeData member function
        // is provided to allow the main loop of the device to recognize a change in
        // state and to durably publish the updated and latest state.
        void writeData(enum MODULE::DeviceStateEnum current_state); 
        enum MODULE::DeviceStateEnum getPrevState(void) {return previousState; };
        enum MODULE::DeviceStateEnum getCurrentState(void) {return currentState; };
        void setPrevState(enum MODULE::DeviceStateEnum new_state){
            previousState=new_state; 
        }

    private:
        // Save previous state since we send a state update any time there is a difference
        // initialize current as UNITIALIZED and ensure previous state is something different
        // so we will immedately send a state update to the controller (durabley), this
        // also 'Announces' ouselves to the controller.
        enum MODULE::DeviceStateEnum previousState {MODULE::DeviceStateEnum::ERROR}; 
        enum MODULE::DeviceStateEnum currentState {MODULE::DeviceStateEnum::UNINITIALIZED}; 
};


class ConfigDevRdr : public Reader {
    public:
        ConfigDevRdr(dds::domain::DomainParticipant participant);
        ~ConfigDevRdr(void){};

        void Handler(dds::sub::LoanedSamples<dds::core::xtypes::DynamicData> * sample);

    private:
};

class ConfigDevWtr : public Writer {
    public:
        ConfigDevWtr(dds::domain::DomainParticipant participant);
        ~ConfigDevWtr(void){};

        void Handler(
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> configDevWriter,
            dds::core::xtypes::DynamicData configDevSample);

        // Configure Device is writen when by the controller as it demand (i.e. intitial and
        // changing conditions require it). The writeData member function
        // is provided to allow the main loop of the controller reliably publish a configuration
        // change request to the evice.
        void writeData(void) {}; 

    private:
};

} // namespace MODULE


#endif // TOPICS_HPP
