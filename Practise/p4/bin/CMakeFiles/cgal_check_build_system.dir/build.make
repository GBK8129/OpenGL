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
CMAKE_SOURCE_DIR = /home/hp/Desktop/p4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hp/Desktop/p4/bin

# Utility rule file for cgal_check_build_system.

# Include any custom commands dependencies for this target.
include CMakeFiles/cgal_check_build_system.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cgal_check_build_system.dir/progress.make

cgal_check_build_system: CMakeFiles/cgal_check_build_system.dir/build.make
.PHONY : cgal_check_build_system

# Rule to build all files generated by this target.
CMakeFiles/cgal_check_build_system.dir/build: cgal_check_build_system
.PHONY : CMakeFiles/cgal_check_build_system.dir/build

CMakeFiles/cgal_check_build_system.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cgal_check_build_system.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cgal_check_build_system.dir/clean

CMakeFiles/cgal_check_build_system.dir/depend:
	cd /home/hp/Desktop/p4/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hp/Desktop/p4 /home/hp/Desktop/p4 /home/hp/Desktop/p4/bin /home/hp/Desktop/p4/bin /home/hp/Desktop/p4/bin/CMakeFiles/cgal_check_build_system.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cgal_check_build_system.dir/depend

