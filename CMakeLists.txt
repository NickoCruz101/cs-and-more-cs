project(main)
CMAKE_MINIMUM_REQUIRED(VERSION 3.7...3.24)

SET(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE release)
endif()

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main Node/Node.cpp Linked_List/LinkedList.cpp main.cpp)

ADD_EXECUTABLE(test Node/Node.cpp Linked_List/LinkedList.cpp Testing.h unit_test.cpp)

target_precompile_headers(test
    PUBLIC
    <gtest/gtest.h>
)


TARGET_LINK_LIBRARIES(test gtest)