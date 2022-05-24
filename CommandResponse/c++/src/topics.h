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

#ifndef TOPICS_H
#define TOPICS_H

#include <iostream>
#include "ddsEntities.h"
#include "CommandResp.h"
#include "CommandRespSupport.h"
#include "topics_T.h"


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
        DeviceStateRdr(DDSDomainParticipant * participant, DDSSubscriber * subscriber);
        ~DeviceStateRdr(void){};

        void Handler(void);
        void process_data(MODULE::DeviceState * data); // specific topic to process

        enum MODULE::DeviceStateEnum getPrevState(void) { return previousState; };
        enum MODULE::DeviceStateEnum getCurrentState(void) { return currentState; };
        void setPrevState(enum MODULE::DeviceStateEnum new_state){
            previousState=new_state; 
        }
        void setCurrentState(enum MODULE::DeviceStateEnum new_state){
            currentState=new_state; 
        }

        void setTopicReader(MODULE::DeviceStateDataReader* topic_reader)
            { this->topicReader=topic_reader; };
        MODULE::DeviceStateDataReader* getTopicReader(void) { return this->topicReader; };
        
        
    private:
        MODULE::DeviceStateDataReader * topicReader;


        // Controller will track the devices state as well, note if there were more than one
        // device we should keep an array of state per deviceID
        // initialize the same, but something other than UNITITIALIZED as that is the first
        // state sent when a devie announces itself.
        enum MODULE::DeviceStateEnum previousState;
        enum MODULE::DeviceStateEnum currentState; 
};

class DeviceStateWtr : public Writer {
    public:
        DeviceStateWtr(DDSDomainParticipant * participant, DDSPublisher * publisher);
        ~DeviceStateWtr(void){};

        void Handler(void);
        void WriterEventHandler(DDSConditionSeq active_conditions_seq);

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
            if (new_state == ON) // c++98 does allow  MODULE::DeviceStateEnum::ON
                std::cout << "Controller set Device state ON" << std::endl;

            currentState=new_state; 
        }

        void setTopicWriter(MODULE::DeviceStateDataWriter* topic_writer)
            { this->topicWriter=topic_writer; };
        MODULE::DeviceStateDataWriter* getTopicWriter(void) { return this->topicWriter; }; 
        void setTopicSample(MODULE::DeviceState* topic_sample)
            { this->topicSample=topic_sample; };
        MODULE::DeviceState * getTopicSample(void) { return this->topicSample; };
        
    private:
        // Save previous state since we send a state update any time there is a difference
        // initialize current as UNITIALIZED and ensure previous state is something different
        // so we will immedately send a state update to the controller (durabley), this
        // also 'Announces' ouselves to the controller.
        MODULE::DeviceStateDataWriter * topicWriter;
        MODULE::DeviceState * topicSample; 
        enum MODULE::DeviceStateEnum previousState; 
        enum MODULE::DeviceStateEnum currentState; 
};


class ConfigDevRdr : public Reader {
    public:
        ConfigDevRdr(
            DDSDomainParticipant * participant,
            DDSSubscriber * subscriber,
            const std::string filter_name);
        ~ConfigDevRdr(void){};

        void Handler(void);
        void process_data(MODULE::ConfigureDevice * data); // specific topic to process

        void setDevStateWtr (DeviceStateWtr * dev_state_writer_ptr) 
            { devicesDevStateWtrPtr = dev_state_writer_ptr; };

        void setTopicReader(MODULE::ConfigureDeviceDataReader* topic_reader)
            { this->topicReader=topic_reader; };
        MODULE::ConfigureDeviceDataReader* getTopicReader(void) { return this->topicReader; };
        

    private:
        // will need the associated devStateWtr when receive a new config command and have
        // to change the state of the device
        DeviceStateWtr * devicesDevStateWtrPtr;  // holds the currentState of the device

        MODULE::ConfigureDeviceDataReader * topicReader;

};

class ConfigDevWtr : public TopicWtr<MODULE::ConfigureDevice, MODULE::ConfigureDeviceTypeSupport, MODULE::ConfigureDeviceDataWriter> {
    public:
        ConfigDevWtr(DDSDomainParticipant * participant, DDSPublisher * publisher) :
            TopicWtr(
                participant, 
                publisher, 
                MODULE::CONFIG_DEV_TOPIC_QOS_PROFILE,
                MODULE::TOPIC_CONFIGURE_DEVICE,
                MODULE::CONFIGURE_DEVICE_WRITER
                )
            {};
        ~ConfigDevWtr(void){};

        void WriteData(MODULE::ConfigureDevice configDevReq);

        void Handler(void);
        // void WriterEventHandler(DDSConditionSeq active_conditions_seq); // default is ok

};


} // namespace MODULE


#endif // TOPICS_H
