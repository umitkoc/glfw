# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/game/build

# Include any dependencies generated for this target.
include CMakeFiles/Deneme.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Deneme.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Deneme.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Deneme.dir/flags.make

CMakeFiles/Deneme.dir/src/library.cpp.o: CMakeFiles/Deneme.dir/flags.make
CMakeFiles/Deneme.dir/src/library.cpp.o: /home/ubuntu/game/src/library.cpp
CMakeFiles/Deneme.dir/src/library.cpp.o: CMakeFiles/Deneme.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Deneme.dir/src/library.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Deneme.dir/src/library.cpp.o -MF CMakeFiles/Deneme.dir/src/library.cpp.o.d -o CMakeFiles/Deneme.dir/src/library.cpp.o -c /home/ubuntu/game/src/library.cpp

CMakeFiles/Deneme.dir/src/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Deneme.dir/src/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/game/src/library.cpp > CMakeFiles/Deneme.dir/src/library.cpp.i

CMakeFiles/Deneme.dir/src/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Deneme.dir/src/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/game/src/library.cpp -o CMakeFiles/Deneme.dir/src/library.cpp.s

CMakeFiles/Deneme.dir/src/main.cpp.o: CMakeFiles/Deneme.dir/flags.make
CMakeFiles/Deneme.dir/src/main.cpp.o: /home/ubuntu/game/src/main.cpp
CMakeFiles/Deneme.dir/src/main.cpp.o: CMakeFiles/Deneme.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Deneme.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Deneme.dir/src/main.cpp.o -MF CMakeFiles/Deneme.dir/src/main.cpp.o.d -o CMakeFiles/Deneme.dir/src/main.cpp.o -c /home/ubuntu/game/src/main.cpp

CMakeFiles/Deneme.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Deneme.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/game/src/main.cpp > CMakeFiles/Deneme.dir/src/main.cpp.i

CMakeFiles/Deneme.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Deneme.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/game/src/main.cpp -o CMakeFiles/Deneme.dir/src/main.cpp.s

# Object files for target Deneme
Deneme_OBJECTS = \
"CMakeFiles/Deneme.dir/src/library.cpp.o" \
"CMakeFiles/Deneme.dir/src/main.cpp.o"

# External object files for target Deneme
Deneme_EXTERNAL_OBJECTS =

Deneme: CMakeFiles/Deneme.dir/src/library.cpp.o
Deneme: CMakeFiles/Deneme.dir/src/main.cpp.o
Deneme: CMakeFiles/Deneme.dir/build.make
Deneme: /usr/local/lib/libglfw3.a
Deneme: /usr/lib/x86_64-linux-gnu/librt.a
Deneme: /usr/lib/x86_64-linux-gnu/libm.so
Deneme: CMakeFiles/Deneme.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Deneme"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Deneme.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Deneme.dir/build: Deneme
.PHONY : CMakeFiles/Deneme.dir/build

CMakeFiles/Deneme.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Deneme.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Deneme.dir/clean

CMakeFiles/Deneme.dir/depend:
	cd /home/ubuntu/game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/game /home/ubuntu/game /home/ubuntu/game/build /home/ubuntu/game/build /home/ubuntu/game/build/CMakeFiles/Deneme.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Deneme.dir/depend
