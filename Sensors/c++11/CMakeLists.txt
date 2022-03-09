# (c) 2020 Copyright, Real-Time Innovations, Inc. All rights reserved.
# No duplications, whole or partial, manual or electronic, may be made
# without express written permission.  Any such copies, or revisions thereof,
# must display this notice unaltered.
# This code contains trade secrets of Real-Time Innovations, Inc.
cmake_minimum_required(VERSION 3.11)
project(sensors-xml-application)

# Find RTI Connext dependencies
set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "$ENV{NDDSHOME}/resource/cmake"
)

find_package(
    RTIConnextDDS "6.1.0"
    REQUIRED
    COMPONENTS
		core
)

set(PUBLISHER_CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/publisher.cxx"
)

# Main application
add_executable(
    Publisher
    ${PUBLISHER_CPP_SOURCES}
)

set(SUBSCRIBER_CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/subscriber.cxx"
)

# Main application
add_executable(
    Subscriber
    ${SUBSCRIBER_CPP_SOURCES}
)

# Set target properties for lang requirement output library name
set_target_properties(Publisher
    PROPERTIES
        OUTPUT_NAME_DEBUG publisher
        LIBRARY_OUTPUT_DIRECTORY "${output_dir}"
        LIBRARY_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        LIBRARY_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
)
# Set target properties for lang requirement output library name
set_target_properties(Subscriber
    PROPERTIES
        OUTPUT_NAME_DEBUG subscriber
        LIBRARY_OUTPUT_DIRECTORY "${output_dir}"
        LIBRARY_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        LIBRARY_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${output_dir}"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${output_dir}"
)

target_link_libraries(Publisher
	RTIConnextDDS::cpp2_api
)

target_link_libraries(Subscriber
	RTIConnextDDS::cpp2_api
)


