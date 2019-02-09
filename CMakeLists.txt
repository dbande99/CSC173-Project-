cmake_minimum_required(VERSION 3.13)
project(CSC173_Project_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CSC173_Project_
        CMakeLists.txt
        dfa.c
        dfa.h
        main.c
        nfa.c
        nfa.h)
