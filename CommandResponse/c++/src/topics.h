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
 * 
 * 
 INSTANTIATE YOUR TOPICS IN THIS FILE

 Your topics must inherit either a ddsEntities.Reader or ddsEnities.Writer
 They MUST implement / override the handler() member functions to deal with
 topic specific fields (read/write) and will likely need extended member functions
 and data members to do specific functions based on application and specific
 topic status/state.

 You may also set filters and DDS event conditions as those may be topic dependent.
 Example, the a device application instance only needs concern itself with commands
 directed to it's target device ID. As such, code should be included in the configuration
 command to filter on the targetId fields that match this devices id.

 Filtering on controller bound topics is probably not desired as the controller usually
 needs to see all status and responses from a device unless there are multiple controllers
 where some topic field values are used to load balance.

 If you don't which to run writer threads for event or a periodic topics you may omit
 calling the writer.start(). If you would prefer to use a listener to montior events
 you will need to modify the ddsEntities.py infrastructure file.

 Periodic writers may be created by placing a call to a topic handler while loop.

 */

#ifndef TOPICS_H
#define TOPICS_H

#include <iostream>
#include "ddsEntities.h"
#include "CommandResp.h"
#include "CommandRespSupport.h"
#include "topics_T.h"


namespace MODULE
{

class DeviceStateRdr : public TopicRdr<
    MODULE::DeviceState,
    MODULE::DeviceStateTypeSupport,
    MODULE::DeviceStateDataReader,
    MODULE::DeviceStateSeq> {
    public:
        DeviceStateRdr(const DDSDomainParticipant * participant, const DDSSubscriber * subscriber, const Cft filter) :
            TopicRdr(
                participant, 
                subscriber,
                filter,
                MODULE::DEVICE_STATE_TOPIC_QOS_PROFILE,
                MODULE::TOPIC_DEVICE_STATE,
                MODULE::DEVICE_STATE_READER
                )
            { // Keep state in the DevStateReader for each devie, init to ERROR so we
              // wait until we get the first state from the device before we initialize
              this->read_topic.state = ERROR;
            }
        ~DeviceStateRdr(void){};

        enum MODULE::DeviceStateEnum getCurrentState(void) { return this->read_topic.state; };

        MODULE::DeviceState * getReadDevState(void) { return &read_topic; };

        void process_data(const MODULE::DeviceState * data); 

    private:
        // Controller will track the devices state as well, note if there were more than one
        // device we should keep an array of state per deviceID
        // initialize the same, but something other than UNITITIALIZED as that is the first
        // state sent when a devie announces itself.
        MODULE::DeviceState read_topic; // for this device
};


class DeviceStateWtr : public TopicWtr<MODULE::DeviceState, MODULE::DeviceStateTypeSupport, MODULE::DeviceStateDataWriter> {
    public:
        DeviceStateWtr(const DDSDomainParticipant * participant, 
                    const DDSPublisher * publisher,
                    const DDSDataWriterListener * listener = NULL, 
                    const bool periodic=false, 
                    const int period = 4 ) :
            TopicWtr(
                participant, 
                publisher,
                listener,
                periodic,
                period,
                MODULE::DEVICE_STATE_TOPIC_QOS_PROFILE,
                MODULE::TOPIC_DEVICE_STATE,
                MODULE::DEVICE_STATE_WRITER
                )
            // initialize previousState and current state different so device will publish on startup
            // Set currentState to UNINITIALIZED so Controller will 'see' a new device
            { this->previousState =  ERROR; //aka MODULE::DeviceStateEnum::ERROR
              this->currentState = UNINITIALIZED;
              // not sure why I need to use the get vs. direct access as it's protected
              // crash results if I don't
              this->getTopicSample()->myDeviceId.resourceId=2;
              this->getTopicSample()->myDeviceId.id=20;
            };

        ~DeviceStateWtr(void){};

        // write() is effectively a runtime down cast for periodic data
        void write(void) {
            this->writeData(this->currentState);
        }

       
        void writeData(const enum MODULE::DeviceStateEnum current_state); 

        // Device State is writen when ever it changes. The writeData member function
        // is provided to allow the main loop of the device to recognize a change in
        // state and to durably publish the updated and latest state.
        enum MODULE::DeviceStateEnum getPrevState(void) {return previousState; };
        enum MODULE::DeviceStateEnum getCurrentState(void) {return currentState; };
        void setPrevState(const enum MODULE::DeviceStateEnum new_state){
            previousState=new_state; 
        }
        void setCurrentState(const enum MODULE::DeviceStateEnum new_state){
            if (new_state == ON) // c++98 does allow  MODULE::DeviceStateEnum::ON
                std::cout << "Controller set Device state ON" << std::endl;

            currentState=new_state; 
        }

    private:
        MODULE::DeviceStateDataWriter * topicWriter;
        MODULE::DeviceState * topicSample; 
        enum MODULE::DeviceStateEnum previousState; 
        enum MODULE::DeviceStateEnum currentState; 
};


class ConfigDevRdr : public TopicRdr<
    MODULE::ConfigureDevice,
    MODULE::ConfigureDeviceTypeSupport,
    MODULE::ConfigureDeviceDataReader,
    MODULE::ConfigureDeviceSeq> {
    public:
        ConfigDevRdr(const DDSDomainParticipant * participant, const DDSSubscriber * subscriber, const Cft filter) :
            TopicRdr(
                participant, 
                subscriber,
                filter,
                MODULE::CONFIG_DEV_TOPIC_QOS_PROFILE,
                MODULE::TOPIC_CONFIGURE_DEVICE,
                MODULE::CONFIGURE_DEVICE_READER
                )
            {};
        ~ConfigDevRdr(void){};

    void process_data(const MODULE::ConfigureDevice * data); 

    void setDevStateWtr (const DeviceStateWtr * dev_state_writer_ptr) 
            { devicesDevStateWtrPtr = (DeviceStateWtr *)dev_state_writer_ptr; };
    
    DeviceStateWtr * getDevStateWtr (void) 
            { return this->devicesDevStateWtrPtr; };

    private:
        // will need the associated devStateWtr when receive a new config command and have
        // to change the state of the device
        DeviceStateWtr * devicesDevStateWtrPtr; 
};

class ConfigDevWtr : public TopicWtr<MODULE::ConfigureDevice, MODULE::ConfigureDeviceTypeSupport, MODULE::ConfigureDeviceDataWriter> {
    public:
        ConfigDevWtr(const DDSDomainParticipant * participant,
                    const DDSPublisher * publisher,
                    const DDSDataWriterListener * listener = NULL,
                    const bool periodic=false, 
                    const int period=4) :
            TopicWtr(
                participant, 
                publisher,
                listener, 
                periodic,
                period,
                MODULE::CONFIG_DEV_TOPIC_QOS_PROFILE,
                MODULE::TOPIC_CONFIGURE_DEVICE,
                MODULE::CONFIGURE_DEVICE_WRITER
                )
            { };
        ~ConfigDevWtr(void){};

        // write() is effectively a runtime down cast for periodic data
        void write(void) {
            this->writeData(this->devicesDevStateRdrPtr->getCurrentState());
        }

        void writeData(const enum MODULE::DeviceStateEnum configDevReq);

        void setDevStateRdr (const DeviceStateRdr * dev_state_reader_ptr) 
            { devicesDevStateRdrPtr = (DeviceStateRdr *)dev_state_reader_ptr; };
        DeviceStateRdr * getDevStateRdr(void) { return devicesDevStateRdrPtr; };

        private:
        // will need the associated devStateRdr which holds the device info regarding
        // our request
        DeviceStateRdr * devicesDevStateRdrPtr; 
};

} // namespace MODULE


#endif // TOPICS_H
