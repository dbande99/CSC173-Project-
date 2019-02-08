cmake_minimum_required(VERSION 3.11)
project(Project1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project1 main.c dfa.c nfa.c nfa.h AdjMatrix.c AdjMatrix.h dfa.h)
