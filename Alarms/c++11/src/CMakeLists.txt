# (c) 2020 Copyright, Real-Time Innovations, Inc. All rights reserved.
# No duplications, whole or partial, manual or electronic, may be made
# without express written permission.  Any such copies, or revisions thereof,
# must display this notice unaltered.
# This code contains trade secrets of Real-Time Innovations, Inc.
cmake_minimum_required(VERSION 3.11)
project(Alarms)

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

# copies ../xml/USER_QOS_PROFILES.xml to ${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml during the build
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml
    COMMAND ${CMAKE_COMMAND} -E copy 
        "${CMAKE_CURRENT_SOURCE_DIR}/../xml/USER_QOS_PROFILES.xml"
        "${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../xml/USER_QOS_PROFILES.xml"
)

add_custom_target(
    copy_config_files
    DEPENDS
        "${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml"
)

# Create the directory that's going to contain the generated code files
add_custom_target(
    generated_code_dir ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

set(ALARMS_IDL_GEN_SOURCES
    "${CMAKE_CURRENT_BINARY_DIR}/gen/Alarms.cxx"
    "${CMAKE_CURRENT_BINARY_DIR}/gen/AlarmsPlugin.cxx"
)

# Generate type plug-in files from the IDL files
add_custom_command(
    OUTPUT ${ALARMS_IDL_GEN_SOURCES}
    MAIN_DEPENDENCY "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Alarms.idl"
    COMMAND ${RTICODEGEN} -language C++11 -update typefiles
            -d "${CMAKE_CURRENT_BINARY_DIR}/gen" 
            "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Alarms.idl"
)

add_custom_target(
    generated_code 
    DEPENDS generated_code_dir
            ${ALARMS_IDL_GEN_SOURCES} 
)

# Publisher application
add_executable(alarms_publisher
    "${CMAKE_CURRENT_SOURCE_DIR}/Alarms_publisher.cxx"
    ${ALARMS_IDL_GEN_SOURCES} 
)

add_dependencies(alarms_publisher generated_code copy_config_files)

target_include_directories(alarms_publisher
    PUBLIC "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

target_link_libraries(alarms_publisher
	RTIConnextDDS::cpp2_api
    ${CONNEXTDDS_EXTERNAL_LIBS}
)

# Subscriber application
add_executable(alarms_subscriber
    "${CMAKE_CURRENT_SOURCE_DIR}/Alarms_subscriber.cxx"
    ${ALARMS_IDL_GEN_SOURCES} 
)

add_dependencies(alarms_subscriber generated_code copy_config_files)

target_include_directories(alarms_subscriber
    PUBLIC "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

target_link_libraries(alarms_subscriber
	RTIConnextDDS::cpp2_api
    ${CONNEXTDDS_EXTERNAL_LIBS}
)


