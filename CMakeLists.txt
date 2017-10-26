cmake_minimum_required(VERSION 3.8)
project(pointers)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES introToPointers.cpp Order.cpp Order.h)
#set(SOURCE_FILES testOrder.cpp Order.cpp Order.h)
set(SOURCE_FILES testCStrings.cpp cStrings.cpp cStrings.h)

add_executable(pointers ${SOURCE_FILES})