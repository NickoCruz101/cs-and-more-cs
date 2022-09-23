CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(Algos)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(BubbleSort ../Node/Node.cpp ../Linked_List/LinkedList.cpp BubbleSort.cpp)

