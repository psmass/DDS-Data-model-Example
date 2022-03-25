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

#include <algorithm>
#include <iostream>
#include <dds/dds.hpp>
#include "application.hpp" // for ctrl-c
#include "CommandResp.hpp" // rti generated file from idl to use model const Topics

const std::string QOS_FILE = "../../model/CommandProject.xml";
const std::string PARTICIPANT_NAME = "CmdRspParticipantLibrary::ControllerParticipant1";
const std::string DEVICE_STATE_READER_NAME = "ControllerSubscriber::DeviceStateReader";
const std::string CONFIGURE_DEVICE_WRITER_NAME = "ControllerPublisher::ConfigureDeviceWriter";

void  process_data(dds::sub::DataReader<dds::core::xtypes::DynamicData> reader)
{
    // Take all samples
    dds::sub::LoanedSamples<dds::core::xtypes::DynamicData> samples = reader.take();
    for (const auto &sample : samples)
    {
        if (sample.info().valid())
        {
            std::cout << sample.data() << std::endl;
        }
        else
        {
            std::cout << "  Received metadata" << std::endl;
        }
    }
} // The LoanedSamples destructor returns the loan

void run_controller_application()
{
    rti::core::QosProviderParams provider_params;
    // Configure the default QosProvider to load the configuration
    // config_file == "/the/path/to/your/xml/configuration.xml"
    provider_params.url_profile({QOS_FILE});
    rti::core::default_qos_provider_params(provider_params);

    // Create the participant
    auto qos_provider = dds::core::QosProvider::Default();
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(PARTICIPANT_NAME);

    // Lookup the specific Topic Type DeviceState as defined in the xml file.
    // This will be needed to read/take samples of the correct type
    const dds::core::xtypes::DynamicType &deviceStateType =
        qos_provider->type(ExCmdRsp::TOPIC_DEVICE_STATE);

    // Find the DataReader defined in the xml by using the participant and the
    // subscriber::reader pair as the datareader name.
    dds::sub::DataReader<dds::core::xtypes::DynamicData> reader =
        rti::sub::find_datareader_by_name<
	  dds::sub::DataReader<dds::core::xtypes::DynamicData>>(
            participant,
            DEVICE_STATE_READER_NAME);

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;

    // Create a ReadCondition for any data on this reader, and add to WaitSet
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [reader]()
        {
            // If we wake up, process data
            process_data(reader);
        });

    waitset += read_condition;

    while (!application::shutdown_requested)
    {
        // Wait 4 seconds for data 
        waitset.dispatch(dds::core::Duration(4));
    }
}

int main(int argc, char *argv[])
{

    using namespace application;

    setup_signal_handlers();

    try
    {
        run_controller_application();
    }
    catch (const std::exception &ex)
    {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_controller_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
