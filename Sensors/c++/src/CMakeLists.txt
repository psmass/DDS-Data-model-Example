# (c) 2020 Copyright, Real-Time Innovations, Inc. All rights reserved.
# No duplications, whole or partial, manual or electronic, may be made
# without express written permission.  Any such copies, or revisions thereof,
# must display this notice unaltered.
# This code contains trade secrets of Real-Time Innovations, Inc.
cmake_minimum_required(VERSION 3.11)
project(sensors)

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

# Create the directory that's going to contain the generated code files
add_custom_target(
    generated_code_dir ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

set(COMMON_IDL_GEN_SOURCES
    "${CMAKE_CURRENT_BINARY_DIR}/gen/Common.cxx"
    "${CMAKE_CURRENT_BINARY_DIR}/gen/CommonPlugin.cxx"
    "${CMAKE_CURRENT_BINARY_DIR}/gen/CommonSupport.cxx"
)

set(SENSOR_IDL_GEN_SOURCES
    "${CMAKE_CURRENT_BINARY_DIR}/gen/Sensor.cxx"
    "${CMAKE_CURRENT_BINARY_DIR}/gen/SensorPlugin.cxx"
    "${CMAKE_CURRENT_BINARY_DIR}/gen/SensorSupport.cxx"
)

# Generate type plug-in files from the IDL files
add_custom_command(
    OUTPUT ${COMMON_IDL_GEN_SOURCES}
    MAIN_DEPENDENCY "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Common.idl"
    COMMAND ${RTICODEGEN} -language C++ -namespace -update typefiles
            -d "${CMAKE_CURRENT_BINARY_DIR}/gen" 
            "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Common.idl"
)

add_custom_command(
    OUTPUT ${SENSOR_IDL_GEN_SOURCES}
    MAIN_DEPENDENCY "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Sensor.idl"
    COMMAND ${RTICODEGEN} -language C++ -namespace -update typefiles
            -d "${CMAKE_CURRENT_BINARY_DIR}/gen" 
            "${CMAKE_CURRENT_SOURCE_DIR}/../idl/Sensor.idl"
)

add_custom_target(
    generated_code 
    DEPENDS generated_code_dir
            ${COMMON_IDL_GEN_SOURCES} 
            ${SENSOR_IDL_GEN_SOURCES}
)

# Publisher application
add_executable(Publisher
    "${CMAKE_CURRENT_SOURCE_DIR}/Sensor_publisher.cxx"
    ${COMMON_IDL_GEN_SOURCES} 
    ${SENSOR_IDL_GEN_SOURCES}
)

add_dependencies(Publisher generated_code)

target_include_directories(Publisher
    PUBLIC "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

target_link_libraries(Publisher
	RTIConnextDDS::cpp_api
    ${CONNEXTDDS_EXTERNAL_LIBS}
)

# Subscriber application
add_executable(Subscriber
    "${CMAKE_CURRENT_SOURCE_DIR}/Sensor_subscriber.cxx"
    ${COMMON_IDL_GEN_SOURCES} 
    ${SENSOR_IDL_GEN_SOURCES}
)

add_dependencies(Subscriber generated_code)

target_include_directories(Subscriber
    PUBLIC "${CMAKE_CURRENT_BINARY_DIR}/gen"
)

target_link_libraries(Subscriber
	RTIConnextDDS::cpp_api
    ${CONNEXTDDS_EXTERNAL_LIBS}
)


