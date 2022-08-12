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

#include <iostream>
#include <chrono>
#include <dds/dds.hpp>
#include <rti/util/util.hpp> // for sleep()
#include "rti/domain/DomainParticipantConfigParams.hpp"
#include "application.hpp"   // for ctrl-c

const std::string QOS_FILE = "../../model/SensorInfo.xml";
const std::string PARTICIPANT_NAME = "EnvironmentParticipantLibrary::PubParticipant";
const std::string WRITER_NAME = "SensorsPublisher::HumidityWriter";
const std::string SENSOR_TYPE_NAME = "Sensor::HumiditySensor";

void run_publisher_application()
{
    rti::core::QosProviderParams provider_params;
    // Configure the default QosProvider to load the configuration
    // config_file == "/the/path/to/your/xml/configuration.xml"
    provider_params.url_profile({ QOS_FILE });
    rti::core::default_qos_provider_params(provider_params);

    // Create the participant
    auto qos_provider = dds::core::QosProvider::Default();
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(PARTICIPANT_NAME);

    std::cout << "*** Starting Sensor Publisher on Domain " << participant.domain_id() << ". CTRL-C to exit. ***" << std::endl;

    // Lookup the specific Sensor type as defined in the xml file.
    // This will be needed to create samples of the correct type
    const dds::core::xtypes::DynamicType& sensorType =
        qos_provider->type(SENSOR_TYPE_NAME);

    // Find the DataWriter defined in the xml by using the participant and the
    // publisher::writer pair as the datawriter name.
    dds::pub::DataWriter<dds::core::xtypes::DynamicData> writer =
        rti::pub::find_datawriter_by_name<
        dds::pub::DataWriter<dds::core::xtypes::DynamicData>>(
            participant,
            WRITER_NAME);

    // Create one sample from the specified type and populate the id field.
    // This sample will be used repeatedly in the loop below.
    dds::core::xtypes::DynamicData sample(sensorType);
    sample.value<int32_t>("sourceId.id", 20);           // needed to register_instance
    sample.value<int32_t>("sourceId.resourceId", 2);    // needed to register_instance
    sample.value<std::string>("sensorTypeName", "FlexSensor Humidity Sensor Model hl7c32a");

    // register_instance() states the intent of the DataWriter to write values of the 
    // data - instance that matches a specified key. Improves the performance of 
    // subsequent writes to the instance. (Useful for keyed data types only.)
    // sourceId is the key which is needed to 
    dds::core::InstanceHandle s_handle = writer.register_instance(sample);

    while (!application::shutdown_requested)
    {
        std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
        auto duration = now.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

        auto percent = 35.23f;
        // Modify the data to be written here
        sample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
        sample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
        sample.value<float_t>("relativeHumidity", percent);
        writer.write(sample, s_handle);

        std::cout << sample << std::endl;

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }

    // Relinquishes the ownership of the instance. (Useful for keyed data types only.)
    // Informs DataReaders that the DataWriter is no longer updating the instance.
    // Tells Connext DDS that the DataWriter has no more information on this instance; 
    // thus, it does not intend to modify that instance anymore, allowing Connext DDS 
    // to recover any resources it allocated for the instance.
    writer.unregister_instance(s_handle);
}

int main(int argc, char *argv[])
{

    using namespace application;

    setup_signal_handlers();

    try
    {
        run_publisher_application();
    }
    catch (const std::exception &ex)
    {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_publisher_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
