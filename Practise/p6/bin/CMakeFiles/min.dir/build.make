# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/hp/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/hp/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hp/Desktop/p6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hp/Desktop/p6/bin

# Include any dependencies generated for this target.
include CMakeFiles/min.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/min.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/min.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/min.dir/flags.make

CMakeFiles/min.dir/min.cpp.o: CMakeFiles/min.dir/flags.make
CMakeFiles/min.dir/min.cpp.o: /home/hp/Desktop/p6/min.cpp
CMakeFiles/min.dir/min.cpp.o: CMakeFiles/min.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hp/Desktop/p6/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/min.dir/min.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/min.dir/min.cpp.o -MF CMakeFiles/min.dir/min.cpp.o.d -o CMakeFiles/min.dir/min.cpp.o -c /home/hp/Desktop/p6/min.cpp

CMakeFiles/min.dir/min.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/min.dir/min.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hp/Desktop/p6/min.cpp > CMakeFiles/min.dir/min.cpp.i

CMakeFiles/min.dir/min.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/min.dir/min.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hp/Desktop/p6/min.cpp -o CMakeFiles/min.dir/min.cpp.s

# Object files for target min
min_OBJECTS = \
"CMakeFiles/min.dir/min.cpp.o"

# External object files for target min
min_EXTERNAL_OBJECTS =

min: CMakeFiles/min.dir/min.cpp.o
min: CMakeFiles/min.dir/build.make
min: libCGAL_Qt5_moc_and_resources.a
min: /usr/lib/x86_64-linux-gnu/libgmpxx.so
min: /usr/lib/x86_64-linux-gnu/libmpfr.so
min: /usr/lib/x86_64-linux-gnu/libgmp.so
min: /usr/lib/x86_64-linux-gnu/libQt5Svg.so.5.12.8
min: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.12.8
min: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
min: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
min: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
min: CMakeFiles/min.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hp/Desktop/p6/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable min"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/min.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/min.dir/build: min
.PHONY : CMakeFiles/min.dir/build

CMakeFiles/min.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/min.dir/cmake_clean.cmake
.PHONY : CMakeFiles/min.dir/clean

CMakeFiles/min.dir/depend:
	cd /home/hp/Desktop/p6/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hp/Desktop/p6 /home/hp/Desktop/p6 /home/hp/Desktop/p6/bin /home/hp/Desktop/p6/bin /home/hp/Desktop/p6/bin/CMakeFiles/min.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/min.dir/depend

