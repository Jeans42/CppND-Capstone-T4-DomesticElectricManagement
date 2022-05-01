cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(ElectricManagementSimulation)

file(GLOB SOURCES_LIB src/lib/*.cpp)
file(GLOB SOURCES_STATEMANAGEMENT src/StateManagement/*.cpp)
file(GLOB SOURCES_DISPLAY src/Display/*.cpp)
file(GLOB SOURCES_IO src/IO/*.cpp)

include_directories(src/lib src/StateManagement src/Display src/IO)

set(SRC ${SOURCES_DISPLAY} ${SOURCES_IO} ${SOURCES_LIB} ${SOURCES_STATEMANAGEMENT})

message("Files to compile: " ${SRC})

add_executable(ElectricManagementSimulation src/main.cpp ${SRC})
