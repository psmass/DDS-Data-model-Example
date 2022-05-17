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
        std::string topic_name, 
        std::string writer_name) {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic " <<  writer_name << " Created." <<std::endl;
        this->topicParticipant = participant;
        this->topicName = topic_name;
        this->writerName = writer_name;
    }

    void * Writer::WriterThread() {
        // Lookup the specific topic DeviceState as defined in the xml file.
        // This will be needed to create samples of the correct type
        std::cout <<  "Writer Thread " << this->writerName << " running " << std::endl;

        // ERROR_CHECK
        this->topicWriter= DDSDynamicDataWriter::narrow(
                this->topicParticipant->lookup_datawriter_by_name(this->writerName.c_str()));
        
        this->topicSample = topicWriter->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);

        this->Handler(); // call the topic specific Handler (Virtual) - does not return until ^C

        std::cout << this->topicName << "Writer thread shutting down" << std::endl;  
        
        return NULL;

    } // end Writer::WriterThread

    void Writer::RunThread(){
        pthread_create(&this->tid, NULL, &Writer::WriterThreadHelper, this);
    }


    Reader::Reader( 
        DDSDomainParticipant * participant, 
        std::string topic_name, 
        std::string reader_name) {

        std::cout << "Reader for topic " << topic_name << " created." << std::endl;
        this->topicParticipant=participant;
        this->topicName = topic_name;
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

        // Find the DataReader defined in the xml by using the participant and the
        // subscriber::reader pair as the datareader name.
        // Lookup reader handles and put them in myReaders[this_topic_enum]
        this->topicReader = DDSDynamicDataReader::narrow(
            this->topicParticipant->lookup_datareader_by_name(this->readerName.c_str()));

        // Create read condition
        read_condition = this->topicReader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);

        //  Get & Set status conditions
        status_condition = this->topicReader->get_statuscondition();
        retcode = status_condition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);  

        /* Attach Read Conditions */
        retcode = waitset->attach_condition(read_condition);

        /* Attach Status Conditions */
        retcode = waitset->attach_condition(status_condition);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "Reader thread: attach_condition error" << std::endl;
            goto end_reader_thread;
        }

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


