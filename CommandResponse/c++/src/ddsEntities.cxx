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

        DDS_ReturnCode_t retcode;
        
        // Use the topic name to register the Topic Type, create the Topic 
        // Create the Writer and create the data sample
        std::cout <<  "Writer Thread " << this->writerName << " running " << std::endl;
 
        this->Handler(); // call the topic specific Handler (Virtual) - does not return until ^C

        end_writer_thread:
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
 
    }


    void * Reader::ReaderThread(void) {
        DDSReadCondition * read_condition = NULL;
        DDSStatusCondition * status_condition =  NULL;
        DDSWaitSet *waitset = new DDSWaitSet();
        DDSConditionSeq active_conditions_seq;
	    DDS_DynamicDataSeq data_seq;
	    DDS_SampleInfoSeq info_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {4,0};

        std::cout <<  "Reader Thread " << this->readerName << " running " << std::endl;


        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            retcode = waitset->wait(active_conditions_seq, wait_duration);
            // waitset.wait(dds::core::Duration(4));
            if (retcode == DDS_RETCODE_TIMEOUT) {  
            // std::cout << "Reader thread: Wait timed out!! No conditions were triggered" << std::endl;
            continue;
            } else if (retcode != DDS_RETCODE_OK) {
                std::cerr << "Reader thread:  wait returned error: " << retcode << std::endl; 
                goto end_reader_thread;
            }

            int active_conditions = active_conditions_seq.length();

            for (int i = 0; i < active_conditions; ++i) {
                if (active_conditions_seq[i] == status_condition) {
                    /* Get the status changes so we can check which status
                    * condition triggered. */
                    DDS_StatusMask triggeredmask =
                            this->topicReader->get_status_changes();

                    /* Subscription matched */
                    if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                        DDS_SubscriptionMatchedStatus st;
                        this->topicReader->get_subscription_matched_status(st);
                        std::cout << this->topicName << "Reader Pubs: " 
                        << st.current_count << "  " << st.current_count_change << std::endl;
                    }
                } else if (active_conditions_seq[i] == read_condition) { 
                    // Get the latest samples
                    retcode = this->topicReader->take(
                                data_seq, info_seq, DDS_LENGTH_UNLIMITED,
                                DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

                    if (retcode == DDS_RETCODE_OK) {
                        // we've got some data for what ever topic we recieved, figure that out, make an
                        // internal variable change as a result (if that's the case) and respond accordingly 
                        // (with a RequestResponse not an On Change Topic. On Change topics trigger from the 
                        // main loop as you peruse through internal variables that you see have changed as a
                        // result of a request or other internal event.
                        for (int i = 0; i < data_seq.length(); ++i) {
                            if (info_seq[i].valid_data) {  
                                if (retcode != DDS_RETCODE_OK) goto end_reader_thread;

                                // *******  Dispatch out to the topic handler ******** 
 
                                //myReaderThreadInfo->dataSeqIndx = i;
                                // std::cout << "Recieved: " << MY_READER_TOPIC_NAME << std::endl; // announce oneself in handler
                                this->Handler(data_seq[i]); // call the topic specific Handler (Virtual)
                            }
                        }
                    } else if (retcode == DDS_RETCODE_NO_DATA) {
                        continue;
                    } else {
                        std::cerr << "Reader thread: read data error " << retcode << std::endl; 
                        goto end_reader_thread;
                    }
                    retcode = this->topicReader->return_loan(data_seq, info_seq);
                    if (retcode != DDS_RETCODE_OK) {
                        std::cerr << "Reader thread:return_loan error " << retcode << std::endl; 
                        goto end_reader_thread;
                    }  
                }
            }
        } //while

        end_reader_thread:
        std::cout << this->topicName << "Reader thread shutting down" << std::endl;  
        return NULL;
    }

    void Reader::RunThread(){
        pthread_create(&this->tid, NULL, &Reader::ReaderThreadHelper, this);
    }


} // NAMESPACE MODULE


