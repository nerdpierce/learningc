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
CMAKE_SOURCE_DIR = /home/tetsuo/Clones/learningc/Cpp/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tetsuo/Clones/learningc/Cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/Cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cpp.dir/flags.make

CMakeFiles/Cpp.dir/main.cpp.o: CMakeFiles/Cpp.dir/flags.make
CMakeFiles/Cpp.dir/main.cpp.o: /home/tetsuo/Clones/learningc/Cpp/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tetsuo/Clones/learningc/Cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cpp.dir/main.cpp.o -c /home/tetsuo/Clones/learningc/Cpp/src/main.cpp

CMakeFiles/Cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tetsuo/Clones/learningc/Cpp/src/main.cpp > CMakeFiles/Cpp.dir/main.cpp.i

CMakeFiles/Cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tetsuo/Clones/learningc/Cpp/src/main.cpp -o CMakeFiles/Cpp.dir/main.cpp.s

# Object files for target Cpp
Cpp_OBJECTS = \
"CMakeFiles/Cpp.dir/main.cpp.o"

# External object files for target Cpp
Cpp_EXTERNAL_OBJECTS =

Cpp: CMakeFiles/Cpp.dir/main.cpp.o
Cpp: CMakeFiles/Cpp.dir/build.make
Cpp: Nerd/libNerd.a
Cpp: CMakeFiles/Cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tetsuo/Clones/learningc/Cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cpp.dir/build: Cpp

.PHONY : CMakeFiles/Cpp.dir/build

CMakeFiles/Cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cpp.dir/clean

CMakeFiles/Cpp.dir/depend:
	cd /home/tetsuo/Clones/learningc/Cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tetsuo/Clones/learningc/Cpp/src /home/tetsuo/Clones/learningc/Cpp/src /home/tetsuo/Clones/learningc/Cpp/build /home/tetsuo/Clones/learningc/Cpp/build /home/tetsuo/Clones/learningc/Cpp/build/CMakeFiles/Cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cpp.dir/depend

