# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Evan\CLionProjects\Project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Evan\CLionProjects\Project1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project1.dir/flags.make

CMakeFiles/Project1.dir/main.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project1.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\main.c.obj   -c C:\Users\Evan\CLionProjects\Project1\main.c

CMakeFiles/Project1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\main.c > CMakeFiles\Project1.dir\main.c.i

CMakeFiles/Project1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\main.c -o CMakeFiles\Project1.dir\main.c.s

CMakeFiles/Project1.dir/dfa.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/dfa.c.obj: ../dfa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Project1.dir/dfa.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\dfa.c.obj   -c C:\Users\Evan\CLionProjects\Project1\dfa.c

CMakeFiles/Project1.dir/dfa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/dfa.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\dfa.c > CMakeFiles\Project1.dir\dfa.c.i

CMakeFiles/Project1.dir/dfa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/dfa.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\dfa.c -o CMakeFiles\Project1.dir\dfa.c.s

CMakeFiles/Project1.dir/BitSet.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/BitSet.c.obj: ../BitSet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Project1.dir/BitSet.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\BitSet.c.obj   -c C:\Users\Evan\CLionProjects\Project1\BitSet.c

CMakeFiles/Project1.dir/BitSet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/BitSet.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\BitSet.c > CMakeFiles\Project1.dir\BitSet.c.i

CMakeFiles/Project1.dir/BitSet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/BitSet.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\BitSet.c -o CMakeFiles\Project1.dir\BitSet.c.s

CMakeFiles/Project1.dir/IntHashSet.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/IntHashSet.c.obj: ../IntHashSet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Project1.dir/IntHashSet.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\IntHashSet.c.obj   -c C:\Users\Evan\CLionProjects\Project1\IntHashSet.c

CMakeFiles/Project1.dir/IntHashSet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/IntHashSet.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\IntHashSet.c > CMakeFiles\Project1.dir\IntHashSet.c.i

CMakeFiles/Project1.dir/IntHashSet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/IntHashSet.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\IntHashSet.c -o CMakeFiles\Project1.dir\IntHashSet.c.s

CMakeFiles/Project1.dir/LinkedList.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/LinkedList.c.obj: ../LinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Project1.dir/LinkedList.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\LinkedList.c.obj   -c C:\Users\Evan\CLionProjects\Project1\LinkedList.c

CMakeFiles/Project1.dir/LinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/LinkedList.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\LinkedList.c > CMakeFiles\Project1.dir\LinkedList.c.i

CMakeFiles/Project1.dir/LinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/LinkedList.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\LinkedList.c -o CMakeFiles\Project1.dir\LinkedList.c.s

CMakeFiles/Project1.dir/nfa.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/nfa.c.obj: ../nfa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Project1.dir/nfa.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\nfa.c.obj   -c C:\Users\Evan\CLionProjects\Project1\nfa.c

CMakeFiles/Project1.dir/nfa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/nfa.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\nfa.c > CMakeFiles\Project1.dir\nfa.c.i

CMakeFiles/Project1.dir/nfa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/nfa.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\nfa.c -o CMakeFiles\Project1.dir\nfa.c.s

CMakeFiles/Project1.dir/strdup.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/strdup.c.obj: ../strdup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Project1.dir/strdup.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\strdup.c.obj   -c C:\Users\Evan\CLionProjects\Project1\strdup.c

CMakeFiles/Project1.dir/strdup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/strdup.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\strdup.c > CMakeFiles\Project1.dir\strdup.c.i

CMakeFiles/Project1.dir/strdup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/strdup.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\strdup.c -o CMakeFiles\Project1.dir\strdup.c.s

CMakeFiles/Project1.dir/AdjMatrix.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/AdjMatrix.c.obj: ../AdjMatrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/Project1.dir/AdjMatrix.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\AdjMatrix.c.obj   -c C:\Users\Evan\CLionProjects\Project1\AdjMatrix.c

CMakeFiles/Project1.dir/AdjMatrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/AdjMatrix.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Evan\CLionProjects\Project1\AdjMatrix.c > CMakeFiles\Project1.dir\AdjMatrix.c.i

CMakeFiles/Project1.dir/AdjMatrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/AdjMatrix.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Evan\CLionProjects\Project1\AdjMatrix.c -o CMakeFiles\Project1.dir\AdjMatrix.c.s

# Object files for target Project1
Project1_OBJECTS = \
"CMakeFiles/Project1.dir/main.c.obj" \
"CMakeFiles/Project1.dir/dfa.c.obj" \
"CMakeFiles/Project1.dir/BitSet.c.obj" \
"CMakeFiles/Project1.dir/IntHashSet.c.obj" \
"CMakeFiles/Project1.dir/LinkedList.c.obj" \
"CMakeFiles/Project1.dir/nfa.c.obj" \
"CMakeFiles/Project1.dir/strdup.c.obj" \
"CMakeFiles/Project1.dir/AdjMatrix.c.obj"

# External object files for target Project1
Project1_EXTERNAL_OBJECTS =

Project1.exe: CMakeFiles/Project1.dir/main.c.obj
Project1.exe: CMakeFiles/Project1.dir/dfa.c.obj
Project1.exe: CMakeFiles/Project1.dir/BitSet.c.obj
Project1.exe: CMakeFiles/Project1.dir/IntHashSet.c.obj
Project1.exe: CMakeFiles/Project1.dir/LinkedList.c.obj
Project1.exe: CMakeFiles/Project1.dir/nfa.c.obj
Project1.exe: CMakeFiles/Project1.dir/strdup.c.obj
Project1.exe: CMakeFiles/Project1.dir/AdjMatrix.c.obj
Project1.exe: CMakeFiles/Project1.dir/build.make
Project1.exe: CMakeFiles/Project1.dir/linklibs.rsp
Project1.exe: CMakeFiles/Project1.dir/objects1.rsp
Project1.exe: CMakeFiles/Project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable Project1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project1.dir/build: Project1.exe

.PHONY : CMakeFiles/Project1.dir/build

CMakeFiles/Project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project1.dir/clean

CMakeFiles/Project1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Evan\CLionProjects\Project1 C:\Users\Evan\CLionProjects\Project1 C:\Users\Evan\CLionProjects\Project1\cmake-build-debug C:\Users\Evan\CLionProjects\Project1\cmake-build-debug C:\Users\Evan\CLionProjects\Project1\cmake-build-debug\CMakeFiles\Project1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project1.dir/depend
