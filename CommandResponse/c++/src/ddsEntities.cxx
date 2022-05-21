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

namespace MODULE
{
    Writer::Writer(
        DDSDomainParticipant * participant,
        DDSPublisher * publisher,
        const char* topic_name, 
        const char* writer_name) {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic " <<  writer_name << " Created." <<std::endl;
        this->topicParticipant = participant;
        this->topicPublisher = publisher;
        this->topicName = (char *) topic_name;
        this->writerName = writer_name;
        this->waitset = new DDSWaitSet();;
    }

    void * Writer::WriterThread() {
        
        // Use the topic name to register the Topic Type, create the Topic 
        // Create the Writer and create the data sample
        std::cout <<  "Writer Thread " << this->writerName << " running " << std::endl;
 
        this->Handler(); // call the topic specific Handler (Virtual) - does not return until ^C

        std::cout << this->topicName << "Writer thread shutting down" << std::endl;  
        
        return NULL;

    } // end Writer::WriterThread

    void Writer::RunThread(){
        pthread_create(&this->tid, NULL, &Writer::WriterThreadHelper, this);
    }


    Reader::Reader( 
        DDSDomainParticipant * participant,
        DDSSubscriber * subscriber,
        const char* topic_name, 
        const char* reader_name) {

        std::cout << "Reader for topic " << topic_name << " created." << std::endl;
        this->topicParticipant=participant;
        this->topicSubscriber=subscriber;
        this->topicName = (char *) topic_name;
        this->readerName = reader_name;
        this->waitset = new DDSWaitSet();;
 
    }


    void * Reader::ReaderThread(void) {

        std::cout <<  "Reader Thread " << this->readerName << " running " << std::endl;

        this->Handler(); // call the topic specific Handler (Virtual) - does not return until ^C

        std::cout << this->topicName << "Reader thread shutting down" << std::endl;  
        return NULL;
    }

    void Reader::RunThread(){
        pthread_create(&this->tid, NULL, &Reader::ReaderThreadHelper, this);
    }


} // NAMESPACE MODULE


