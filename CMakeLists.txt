project(main)
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

SET(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE release)
endif()

ADD_SUBDIRECTORY(googletest)
add_subdirectory(Node)
add_subdirectory(Linked_List)

ADD_EXECUTABLE(main main.cpp Node/Node.cpp Linked_List/LinkedList.cpp)

ADD_EXECUTABLE(test unit_test.cpp)

target_precompile_headers(test
    PUBLIC
    <gtest/gtest.h>
    <Node/Node.h>
    <Linked_List/LinkedList.h>
)


TARGET_LINK_LIBRARIES(test gtest)