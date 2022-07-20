# (c) 2020 Copyright, Real-Time Innovations, Inc. All rights reserved.
# No duplications, whole or partial, manual or electronic, may be made
# without express written permission.  Any such copies, or revisions thereof,
# must display this notice unaltered.
# This code contains trade secrets of Real-Time Innovations, Inc.
cmake_minimum_required(VERSION 3.11)
project(image_application)

set(CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/write_img.cpp"
)

# Main application
add_executable(read_write
    ${CPP_SOURCES}
)



