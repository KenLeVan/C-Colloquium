cmake_minimum_required(VERSION 3.31)

project(11_12_sem)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
# add_executable(introduction                1_Introduction/introduction.cpp)
# add_executable(TypesOfData                2_FundamentalTypesOfData/TypesOfData.cpp)
# add_executable(VariablesAndMemoryMemory                3_VariablesAndMemoryMemory/VariablesAndMemoryMemory.cpp)
# add_executable(IfOperator                4_IfOperator/IfOperator.cpp)
# add_executable(Loop                5_Loop/Loop.cpp)
add_executable(Pointers                6_Pointers/Pointers.cpp)