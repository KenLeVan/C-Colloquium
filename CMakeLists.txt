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
add_executable(introduction                1_Introduction/introduction.cpp)
add_executable(TypesOfData                2_FundamentalTypesOfData/TypesOfData.cpp)
add_executable(VariablesAndMemoryMemory                3_VariablesAndMemoryMemory/VariablesAndMemoryMemory.cpp)
add_executable(IfOperator                4_IfOperator/IfOperator.cpp)
add_executable(Loop                5_Loop/Loop.cpp)
add_executable(Pointers                6_Pointers/Pointers.cpp)
add_executable(address                7_Address/address.cpp)
add_executable(array                8_Array/array.cpp)
add_executable(dynamicArr                9_DynamicArray/dynamicArr.cpp)
add_executable(functions                10_Functions/functions.cpp)
add_executable(usertypes                11_UserTypes/usertypes.cpp)
add_executable(oop                12_OOP/oop.cpp)
add_executable(classes                13_Classes/classes.cpp)
add_executable(constructors                14_Constructors/constructors.cpp)
add_executable(desctructor                15_Desctructor/desctructor.cpp)
add_executable(overloading                16_Overloading/overloading.cpp)
add_executable(arrayvector                17_ArrayVector/arrayvector.cpp)
add_executable(associativecontainers                18_AssociativeContainers/associativecontainers.cpp)
add_executable(stackqueue                19_StackQueue/stackqueue.cpp)
add_executable(miscellaneous                20_Miscellaneous/miscellaneous.cpp)