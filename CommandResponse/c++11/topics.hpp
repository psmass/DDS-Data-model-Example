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
        DeviceStateRdr(const dds::domain::DomainParticipant participant);
        ~DeviceStateRdr(void){};

        void handler(dds::core::xtypes::DynamicData& data);

        int32_t getDeviceResourceId(void) { return this->resourceId; };
        int32_t getDeviceId(void) { return this->id; };

        enum MODULE::DeviceStateEnum getCurrentState(void) {return this->currentState; };
        void setCurrentState(enum MODULE::DeviceStateEnum new_state){
            currentState=new_state; 
        }
        
    private:
        // Controller will track the devices state as well, note if there were more than one
        // device we should keep an array of state per deviceID
        // initialize the same, but something other than UNITITIALIZED as that is the first
        // state sent when a devie announces itself.
        int32_t resourceId;
        int32_t id;
        enum MODULE::DeviceStateEnum currentState {MODULE::DeviceStateEnum::ERROR};

};

class DeviceStateWtr : public Writer {
    public:
        DeviceStateWtr(
            const dds::domain::DomainParticipant participant, 
            dds::core::Duration period =std::chrono::seconds(4));
        ~DeviceStateWtr(void){};

        // void handler();

        // Device State is writen when ever it changes. The writeData member function
        // is provided to allow the main loop of the device to recognize a change in
        // state and to durably publish the updated and latest state.
        void writeData(const enum MODULE::DeviceStateEnum current_state); 
        enum MODULE::DeviceStateEnum getPrevState(void) {return previousState; };
        enum MODULE::DeviceStateEnum getCurrentState(void) {return currentState; };
        void setPrevState(enum MODULE::DeviceStateEnum new_state){
            previousState=new_state; 
        }
        void setCurrentState(enum MODULE::DeviceStateEnum new_state){
            if (new_state == MODULE::DeviceStateEnum::ON)
                std::cout << "Controller set Device state ON" << std::endl;

            currentState=new_state; 
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
        ConfigDevRdr(const dds::domain::DomainParticipant participant, const std::string filter_name);
        ~ConfigDevRdr(void){};

        void handler(dds::core::xtypes::DynamicData& data);
        void setDevStateWtr (DeviceStateWtr * dev_state_writer) 
            { this->devicesDevStateWtr = dev_state_writer; };

    private:
        // will need the associated devStateWtr when receive a new config command and have
        // to change the state of the device as it gets updated
        DeviceStateWtr * devicesDevStateWtr;  
};

class ConfigDevWtr : public Writer {
    public:
        ConfigDevWtr(
            const dds::domain::DomainParticipant participant, 
            dds::core::Duration period = std::chrono::seconds(4));
        ~ConfigDevWtr(void){};

        // void handler(void);

        // Configure Device is writen when by the controller as it demand (i.e. intitial and
        // changing conditions require it). The writeData member function
        // is provided to allow the main loop of the controller reliably publish a configuration
        // change request to the evice.
        void writeData(enum MODULE::DeviceStateEnum configReq); 

        void setDevStateRdr(DeviceStateRdr * device_state_reader) {
            this->deviceDevStateRdr = device_state_reader;
        };

    private:
        // will need the associated devStateRdr since we keep the deviceId and state
        // associated with that topic as the controller reads it in.
        // The ConfigDevWriter needs this information to target the device
        DeviceStateRdr * deviceDevStateRdr; 
};

} // namespace MODULE


#endif // TOPICS_HPP
