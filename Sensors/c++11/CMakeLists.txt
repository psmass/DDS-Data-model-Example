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
add_executable(Publisher
    ${PUBLISHER_CPP_SOURCES}
)

set(SUBSCRIBER_CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/subscriber.cxx"
)

# Main application
add_executable(Subscriber
    ${SUBSCRIBER_CPP_SOURCES}
)

target_link_libraries(Publisher
	RTIConnextDDS::cpp2_api
)

target_link_libraries(Subscriber
	RTIConnextDDS::cpp2_api
)


