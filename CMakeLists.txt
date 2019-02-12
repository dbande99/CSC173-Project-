cmake_minimum_required(VERSION 3.11)
project(CSC173_Project_)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "-std=c99")

include_directories(.)

add_executable(CSC173_Project_
        CMakeLists.txt
        dfa.c
        dfa.h
        main.c
        nfa.c
        nfa.h HashSet.h HashSet.c)
