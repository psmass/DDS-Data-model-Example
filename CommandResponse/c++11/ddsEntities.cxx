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

#include "ddsEntities.hpp"

namespace MODULE
{

    Writer::Writer(
        const dds::domain::DomainParticipant * participant, 
        const std::string topic_type, 
        const std::string writer_name,
        dds::core::Duration period) {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic " <<  writer_name << " Created." <<std::endl;
        this->participant = (dds::domain::DomainParticipant *) &(*participant);
        this->topicType = topic_type;
        this->writerName = writer_name;
        this->period = period;// default is 4 sec, if a periodic writer set to send-period 

        // Create one sample from the specified type and populate the id field.
        // This sample will be used repeatedly in the loop below.
        dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });
        const dds::core::xtypes::DynamicType &thisTopicType =
            qos_provider->type(this->topicType);
        // rti::core::xtypes::print_idl(thisTopcType);
        this->topicSample = new dds::core::xtypes::DynamicData(thisTopicType);
    }

    Writer::~Writer() {
        delete this->topicSample;
    }

    void Writer::writerThread() {
        // Lookup the specific topic as defined in the xml file.
        // This will be needed to create samples of the correct type
        std::cout <<  "Writer Thread " << this->writerName << " running " << std::endl;

        // Find the DataWriter defined in the xml by using the participant and the
        // publisher::writer pair as the datawriter name.
        dds::pub::DataWriter<dds::core::xtypes::DynamicData> writer =
            rti::pub::find_datawriter_by_name<
                dds::pub::DataWriter<dds::core::xtypes::DynamicData>>(
                *(this->participant),
                this->writerName);

        this->topicWriter=&writer; 

        // WaitSet will be woken when the attached condition is triggered
        dds::core::cond::WaitSet waitset;

        dds::core::cond::StatusCondition status_condition (*this->topicWriter);

        status_condition.enabled_statuses (
            dds::core::status::StatusMask::publication_matched());

        // attatch the status condition to the topic's waitset
        waitset += status_condition;

        while (!application::shutdown_requested)
        {
            // writers sit waiting for events (defaut 4 sec or period to send data)
            dds::core::cond::WaitSet::ConditionSeq active_conditions = waitset.wait(this->period);

            dds::core::status::StatusMask triggered_mask; // declare outside for loop

            for (uint32_t i = 0; i < active_conditions.size(); i++) {
                //if (active_conditions[i] == guard_cond) {
                //    std::cout << "guard_cond was triggered\n";
                if (active_conditions[i] == status_condition) {
                    // only one status condition set so we don't really need to d'mux
                    triggered_mask = this->topicWriter->status_changes();

                    if ((triggered_mask & dds::core::status::StatusMask::publication_matched()).any()){
                        dds::core::status::PublicationMatchedStatus st =
                            this->topicWriter->publication_matched_status();
                        std::cout << "Writer Subs: " << st.current_count()
                        << " " << st.current_count_change() << std::endl;
                    }
                }
            }

            // User may Override default and process topic specific Handler for any periodic 
            // topic or specific event handling
            this->handler(triggered_mask); 
        }

        std::cout << this->topicType << "Writer thread shutting down" << std::endl;  

    } // end Writer::WriterThread

    void Writer::runThread(){
        this->myWtrThread = std::thread(&Writer::writerThread, this);
    }

    Reader::Reader( 
        const dds::domain::DomainParticipant * participant, 
        const std::string topic_type, 
        const std::string reader_name) {

        std::cout << "Reader for topic " << topic_type << " created." << std::endl;
        this->participant = (dds::domain::DomainParticipant *) &(*participant);
        topicType = topic_type;
        readerName = reader_name;
 
    }


    void Reader::readerThread() {

        std::cout <<  "Reader Thread " << this->readerName << " running " << std::endl;

        // Find the DataReader defined in the xml by using the participant and the
        // subscriber::reader pair as the datareader name.
        dds::sub::DataReader<dds::core::xtypes::DynamicData> reader =
            rti::sub::find_datareader_by_name<
                dds::sub::DataReader<dds::core::xtypes::DynamicData>>(
                *(this->participant),
                this->readerName);

        // WaitSet will be woken when the attached condition is triggered
        dds::core::cond::WaitSet waitset;
        
        // Create a ReadCondition for any data on this reader, and add to WaitSet
        dds::sub::cond::ReadCondition read_condition (
            reader,
            dds::sub::status::DataState::any()
         );

        dds::core::cond::StatusCondition status_condition (reader);

        status_condition.enabled_statuses (
            dds::core::status::StatusMask::subscription_matched());

        // attatch conditions to this topics waitset
        waitset += read_condition;
        waitset += status_condition;

        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            // waitset.dispatch(dds::core::Duration(4));
            dds::core::cond::WaitSet::ConditionSeq active_conditions = waitset.wait(dds::core::Duration(4));

            for (uint32_t i = 0; i < active_conditions.size(); i++) {
                //if (active_conditions[i] == guard_cond) {
                //    std::cout << "guard_cond was triggered\n";
                if (active_conditions[i] == status_condition) {
                    // only one status condition set so we don't really need to d'mux
                    dds::core::status::StatusMask triggered_mask = reader.status_changes();

                    if ((triggered_mask & dds::core::status::StatusMask::subscription_matched()).any()){
                        dds::core::status::SubscriptionMatchedStatus st =
                            reader.subscription_matched_status();
                        std::cout << "Reader Pubs: " << st.current_count()
                        << " " << st.current_count_change() << std::endl;
                    }

                } else if (active_conditions[i] == read_condition) {
                    // Take all samples            
                    dds::sub::LoanedSamples<dds::core::xtypes::DynamicData> samples = reader.take();
                    for (const auto sample : samples) {

                        if (sample.info().valid()) {
                            std::cout << "Read sample for topic: " << this->topicType << std::endl;
                            std::cout << sample.data() << std::endl;

                            // map the sample to the specific dynamic data type
                            dds::core::xtypes::DynamicData& data = const_cast<dds::core::xtypes::DynamicData&>(sample.data());
                            this->handler(data); // call the topic specific Handler (Virtual) 

                            std::cout << std::endl;

                        }
                        else {
                            std::cout << "Received metadata" << std::endl;
                        }
                    }
                }
            }
        }
        
        std::cout << this->topicType << "Reader thread shutting down" << std::endl;   
    }

   void Reader::runThread(){
        this->myRdrThread = std::thread(&Reader::readerThread, this);
    }

} // NAMESPACE MODULE
