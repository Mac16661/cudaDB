# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mac/simpleDB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mac/simpleDB/build

# Include any dependencies generated for this target.
include CMakeFiles/simpleDB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simpleDB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleDB.dir/flags.make

CMakeFiles/simpleDB.dir/src/main.cpp.o: CMakeFiles/simpleDB.dir/flags.make
CMakeFiles/simpleDB.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mac/simpleDB/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simpleDB.dir/src/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simpleDB.dir/src/main.cpp.o -c /home/mac/simpleDB/src/main.cpp

CMakeFiles/simpleDB.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleDB.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mac/simpleDB/src/main.cpp > CMakeFiles/simpleDB.dir/src/main.cpp.i

CMakeFiles/simpleDB.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleDB.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mac/simpleDB/src/main.cpp -o CMakeFiles/simpleDB.dir/src/main.cpp.s

# Object files for target simpleDB
simpleDB_OBJECTS = \
"CMakeFiles/simpleDB.dir/src/main.cpp.o"

# External object files for target simpleDB
simpleDB_EXTERNAL_OBJECTS =

simpleDB: CMakeFiles/simpleDB.dir/src/main.cpp.o
simpleDB: CMakeFiles/simpleDB.dir/build.make
simpleDB: CMakeFiles/simpleDB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mac/simpleDB/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simpleDB"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simpleDB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleDB.dir/build: simpleDB

.PHONY : CMakeFiles/simpleDB.dir/build

CMakeFiles/simpleDB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simpleDB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simpleDB.dir/clean

CMakeFiles/simpleDB.dir/depend:
	cd /home/mac/simpleDB/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mac/simpleDB /home/mac/simpleDB /home/mac/simpleDB/build /home/mac/simpleDB/build /home/mac/simpleDB/build/CMakeFiles/simpleDB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleDB.dir/depend

