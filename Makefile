# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/61/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/61/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ehab/Desktop/CSC173/CSC173-Project-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ehab/Desktop/CSC173/CSC173-Project-

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/snap/clion/61/bin/cmake/linux/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/snap/clion/61/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/ehab/Desktop/CSC173/CSC173-Project-/CMakeFiles /home/ehab/Desktop/CSC173/CSC173-Project-/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/ehab/Desktop/CSC173/CSC173-Project-/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named CSC173_Project_

# Build rule for target.
CSC173_Project_: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 CSC173_Project_
.PHONY : CSC173_Project_

# fast build rule for target.
CSC173_Project_/fast:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/build
.PHONY : CSC173_Project_/fast

dfa.o: dfa.c.o

.PHONY : dfa.o

# target to build an object file
dfa.c.o:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/dfa.c.o
.PHONY : dfa.c.o

dfa.i: dfa.c.i

.PHONY : dfa.i

# target to preprocess a source file
dfa.c.i:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/dfa.c.i
.PHONY : dfa.c.i

dfa.s: dfa.c.s

.PHONY : dfa.s

# target to generate assembly for a file
dfa.c.s:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/dfa.c.s
.PHONY : dfa.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/main.c.s
.PHONY : main.c.s

nfa.o: nfa.c.o

.PHONY : nfa.o

# target to build an object file
nfa.c.o:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/nfa.c.o
.PHONY : nfa.c.o

nfa.i: nfa.c.i

.PHONY : nfa.i

# target to preprocess a source file
nfa.c.i:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/nfa.c.i
.PHONY : nfa.c.i

nfa.s: nfa.c.s

.PHONY : nfa.s

# target to generate assembly for a file
nfa.c.s:
	$(MAKE) -f CMakeFiles/CSC173_Project_.dir/build.make CMakeFiles/CSC173_Project_.dir/nfa.c.s
.PHONY : nfa.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... CSC173_Project_"
	@echo "... edit_cache"
	@echo "... dfa.o"
	@echo "... dfa.i"
	@echo "... dfa.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... nfa.o"
	@echo "... nfa.i"
	@echo "... nfa.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

