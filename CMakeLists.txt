cmake_minimum_required(VERSION 3.8)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "$(CXX_FLAGS)")

set(CMAKE_BUILD_TYPE Debug)
include_directories(Node/Node.cpp)
include_directories(Linked_Lists/LinkedList.cpp)


project(LinkedList)

add_executable(LinkedList main.cpp)