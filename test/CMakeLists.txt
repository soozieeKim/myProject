# ******************************************************************************
#   SOFTWARE CENTER, CTO, LG ELECTRONICS INC., SEOUL, KOREA
#   Copyright(c) 2018 by LG Electronics Inc.
#
#   All rights reserved. No part of this work covered by this copyright hereon
#   may be reproduced, stored in a retrieval system, in any form\
#   or by any means, electronic, mechanical, photocopying, recording
#   or otherwise, without the prior written  permission of LG Electronics.
# ******************************************************************************

cmake_minimum_required(VERSION 3.4)
project(someip VERSION 0.1.0)

# include GNU install directories such as CMAKE_INSTALL_DATADIR
include(GNUInstallDirs)

if(${TEST_BUILD})
    message(STATUS "* Coverage Test Enabled")
    set(TEST_SD_PORT 30491)
    set(TEST_COVERAGE_FLAGS "-fprofile-arcs -ftest-coverage -DCONFORMANCE_TEST_SD_PORT=${TEST_SD_PORT}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TEST_COVERAGE_FLAGS}")
endif(${TEST_BUILD} EQUAL "ON")

# Application Control Entry ID for management of application connection
set(APPLICATION_MGMT_ENTRY 0xF0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DAPPLICATION_MGMT_ENTRY=${APPLICATION_MGMT_ENTRY}")

# SOME/IP-TP Configuration
# set(ENABLE_SOMEIPTP "ON")
if(${ENABLE_SOMEIPTP} MATCHES "ON")
    set(SOMEIP_MAX_UDP_PACKET_SIZE 1400)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DENABLED_SOMEIP_TP=ON")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DSOMEIP_UDP_MAX_PAYLOAD_SIZE=1400")
endif()

# BUILD SYSTEM Configuration
message(STATUS "OS is ${CMAKE_SYSTEM_NAME}")
if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(OS "LINUX")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D${OS}")
elseif (${CMAKE_SYSTEM_NAME} MATCHES "QNX")
    set(OS "QNX")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D${OS}")
endif()

# Enable Debug Message
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__DEBUG__")

# Build OS-Abstraction and SOME/IP Module
add_subdirectory(osabstraction)
add_subdirectory(someip)
add_subdirectory(interface)

# Not Buildable : only for test
# add_subdirectory(aracom)
