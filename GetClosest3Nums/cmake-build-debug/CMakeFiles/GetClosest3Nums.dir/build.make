# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GetClosest3Nums.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GetClosest3Nums.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GetClosest3Nums.dir/flags.make

CMakeFiles/GetClosest3Nums.dir/main.cpp.o: CMakeFiles/GetClosest3Nums.dir/flags.make
CMakeFiles/GetClosest3Nums.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GetClosest3Nums.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GetClosest3Nums.dir/main.cpp.o -c /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/main.cpp

CMakeFiles/GetClosest3Nums.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GetClosest3Nums.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/main.cpp > CMakeFiles/GetClosest3Nums.dir/main.cpp.i

CMakeFiles/GetClosest3Nums.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GetClosest3Nums.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/main.cpp -o CMakeFiles/GetClosest3Nums.dir/main.cpp.s

CMakeFiles/GetClosest3Nums.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GetClosest3Nums.dir/main.cpp.o.requires

CMakeFiles/GetClosest3Nums.dir/main.cpp.o.provides: CMakeFiles/GetClosest3Nums.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GetClosest3Nums.dir/build.make CMakeFiles/GetClosest3Nums.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GetClosest3Nums.dir/main.cpp.o.provides

CMakeFiles/GetClosest3Nums.dir/main.cpp.o.provides.build: CMakeFiles/GetClosest3Nums.dir/main.cpp.o


# Object files for target GetClosest3Nums
GetClosest3Nums_OBJECTS = \
"CMakeFiles/GetClosest3Nums.dir/main.cpp.o"

# External object files for target GetClosest3Nums
GetClosest3Nums_EXTERNAL_OBJECTS =

GetClosest3Nums: CMakeFiles/GetClosest3Nums.dir/main.cpp.o
GetClosest3Nums: CMakeFiles/GetClosest3Nums.dir/build.make
GetClosest3Nums: CMakeFiles/GetClosest3Nums.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GetClosest3Nums"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GetClosest3Nums.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GetClosest3Nums.dir/build: GetClosest3Nums

.PHONY : CMakeFiles/GetClosest3Nums.dir/build

CMakeFiles/GetClosest3Nums.dir/requires: CMakeFiles/GetClosest3Nums.dir/main.cpp.o.requires

.PHONY : CMakeFiles/GetClosest3Nums.dir/requires

CMakeFiles/GetClosest3Nums.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GetClosest3Nums.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GetClosest3Nums.dir/clean

CMakeFiles/GetClosest3Nums.dir/depend:
	cd /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug /Users/jlstmac/Documents/Dev/Algorithm/GetClosest3Nums/cmake-build-debug/CMakeFiles/GetClosest3Nums.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GetClosest3Nums.dir/depend
