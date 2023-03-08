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

#include "ddsEntities.h"
#include <pthread.h>

extern bool application::shutdown_requested;
using namespace entities;

    Writer::Writer(
        const DDSDomainParticipant * participant,
        const DDSPublisher * publisher,
        const bool periodic,
        const int period,
        const char* topic_name, 
        const char* writer_name) {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic " <<  writer_name << " Created." <<std::endl;
        this->topicParticipant = (DDSDomainParticipant *)participant;
        this->topicPublisher = (DDSPublisher * )publisher;
        this->periodic = periodic;
        this->period.sec = period;
        this->topicName = (char *) topic_name;
        this->writerName = writer_name;
        this->waitset = new DDSWaitSet();;
    }

    void * Writer::writerThread() {
        
        // Use the topic name to register the Topic Type, create the Topic 
        // Create the Writer and create the data sample
        std::cout <<  "Writer Thread " << this->writerName << " running " << std::endl;

        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;

        while (!application::shutdown_requested) {

                        // Wait for event or timeout, if event call event handler
            retcode = this->waitset->wait(active_conditions_seq, this->period);
            if (retcode == DDS_RETCODE_TIMEOUT) {
                if (this->periodic) 
                    this->write();
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Writer thread: wait returned error ");
            }
            this->handler(active_conditions_seq);

        }

        std::cout << this->topicName << " Writer thread shutting down" << std::endl;  
        
        return NULL;

    } // end Writer::WriterThread

    void Writer::runThread(){
        pthread_create(&this->tid, NULL, &Writer::writerThreadHelper, this);
    }


    Reader::Reader( 
        const DDSDomainParticipant * participant,
        const DDSSubscriber * subscriber,
        const char* topic_name, 
        const char* reader_name) {

        std::cout << "Reader for topic " << topic_name << " created." << std::endl;
        this->topicParticipant=(DDSDomainParticipant *)participant;
        this->topicSubscriber=(DDSSubscriber *)subscriber;
        this->topicName = (char *) topic_name;
        this->readerName = reader_name;
        this->waitset = new DDSWaitSet();;
 
    }


    void * Reader::readerThread(void) {

        std::cout <<  "Reader Thread " << this->readerName << " running " << std::endl;

        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {1,0}; // timeout wait to ensure running

        while (!application::shutdown_requested) {

            // Wait 4 seconds for data 
            retcode = this->waitset->wait(active_conditions_seq, wait_duration);
            // waitset.wait(dds::core::Duration(4));
            if (retcode == DDS_RETCODE_TIMEOUT) {  
                // std::cout << "Reader thread: Wait timed out!! No conditions were triggered" << std::endl;
                // put thead health check here since we verified we are running
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Reader handler: wait returned error ");
            }

            this->process_data(active_conditions_seq); // call the topic specific Handler (Virtual)
        }
        std::cout << this->topicName << " Reader thread shutting down" << std::endl;  
        return NULL;
    }

    void Reader::runThread(){
        pthread_create(&this->tid, NULL, &Reader::readerThreadHelper, this);
    }





