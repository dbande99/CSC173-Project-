cmake_minimum_required(VERSION 3.13)
project(Project1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project1 main.c dfa.c BitSet.c BitSet.h IntHashSet.c IntHashSet.h LinkedList.c LinkedList.h nfa.c nfa.h Set.h strdup.c strdup.h AdjMatrix.c AdjMatrix.h dfa.h)
