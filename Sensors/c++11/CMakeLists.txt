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
    "${CMAKE_CURRENT_SOURCE_DIR}/sensor_publisher.cxx"
)

# Main application
add_executable(sensor_publisher
    ${PUBLISHER_CPP_SOURCES}
)

set(SUBSCRIBER_CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/sensor_subscriber.cxx"
)

# Main application
add_executable(sensor_subscriber
    ${SUBSCRIBER_CPP_SOURCES}
)

target_link_libraries(sensor_publisher
	RTIConnextDDS::cpp2_api
)

target_link_libraries(sensor_subscriber
	RTIConnextDDS::cpp2_api
)

# The COMPILE_FLAGS property sets additional compiler flags used to build sources within the target.
if(CMAKE_SYSTEM_NAME MATCHES "Darwin" AND CMAKE_C_COMPILER_ID MATCHES "Clang")
    set_target_properties(sensor_publisher PROPERTIES COMPILE_FLAGS -std=c++11)
    set_target_properties(sensor_subscriber PROPERTIES COMPILE_FLAGS -std=c++11)
endif()


