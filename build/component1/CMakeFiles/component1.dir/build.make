# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hadoop/.local/lib/python3.12/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/hadoop/.local/lib/python3.12/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hadoop/esp-idf/openrtos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hadoop/esp-idf/openrtos/build

# Include any dependencies generated for this target.
include component1/CMakeFiles/component1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include component1/CMakeFiles/component1.dir/compiler_depend.make

# Include the progress variables for this target.
include component1/CMakeFiles/component1.dir/progress.make

# Include the compile flags for this target's objects.
include component1/CMakeFiles/component1.dir/flags.make

component1/CMakeFiles/component1.dir/component1.cpp.o: component1/CMakeFiles/component1.dir/flags.make
component1/CMakeFiles/component1.dir/component1.cpp.o: /home/hadoop/esp-idf/openrtos/component1/component1.cpp
component1/CMakeFiles/component1.dir/component1.cpp.o: component1/CMakeFiles/component1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hadoop/esp-idf/openrtos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object component1/CMakeFiles/component1.dir/component1.cpp.o"
	cd /home/hadoop/esp-idf/openrtos/build/component1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT component1/CMakeFiles/component1.dir/component1.cpp.o -MF CMakeFiles/component1.dir/component1.cpp.o.d -o CMakeFiles/component1.dir/component1.cpp.o -c /home/hadoop/esp-idf/openrtos/component1/component1.cpp

component1/CMakeFiles/component1.dir/component1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/component1.dir/component1.cpp.i"
	cd /home/hadoop/esp-idf/openrtos/build/component1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadoop/esp-idf/openrtos/component1/component1.cpp > CMakeFiles/component1.dir/component1.cpp.i

component1/CMakeFiles/component1.dir/component1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/component1.dir/component1.cpp.s"
	cd /home/hadoop/esp-idf/openrtos/build/component1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadoop/esp-idf/openrtos/component1/component1.cpp -o CMakeFiles/component1.dir/component1.cpp.s

# Object files for target component1
component1_OBJECTS = \
"CMakeFiles/component1.dir/component1.cpp.o"

# External object files for target component1
component1_EXTERNAL_OBJECTS =

component1/libcomponent1.a: component1/CMakeFiles/component1.dir/component1.cpp.o
component1/libcomponent1.a: component1/CMakeFiles/component1.dir/build.make
component1/libcomponent1.a: component1/CMakeFiles/component1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/hadoop/esp-idf/openrtos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcomponent1.a"
	cd /home/hadoop/esp-idf/openrtos/build/component1 && $(CMAKE_COMMAND) -P CMakeFiles/component1.dir/cmake_clean_target.cmake
	cd /home/hadoop/esp-idf/openrtos/build/component1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/component1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
component1/CMakeFiles/component1.dir/build: component1/libcomponent1.a
.PHONY : component1/CMakeFiles/component1.dir/build

component1/CMakeFiles/component1.dir/clean:
	cd /home/hadoop/esp-idf/openrtos/build/component1 && $(CMAKE_COMMAND) -P CMakeFiles/component1.dir/cmake_clean.cmake
.PHONY : component1/CMakeFiles/component1.dir/clean

component1/CMakeFiles/component1.dir/depend:
	cd /home/hadoop/esp-idf/openrtos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hadoop/esp-idf/openrtos /home/hadoop/esp-idf/openrtos/component1 /home/hadoop/esp-idf/openrtos/build /home/hadoop/esp-idf/openrtos/build/component1 /home/hadoop/esp-idf/openrtos/build/component1/CMakeFiles/component1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : component1/CMakeFiles/component1.dir/depend

