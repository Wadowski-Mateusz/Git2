# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/src.dir/depend.make
# Include the progress variables for this target.
include src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src.dir/flags.make

src/CMakeFiles/src.dir/main.cpp.obj: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src.dir/main.cpp.obj"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\src.dir\main.cpp.obj -c C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\src\main.cpp

src/CMakeFiles/src.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/main.cpp.i"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\src\main.cpp > CMakeFiles\src.dir\main.cpp.i

src/CMakeFiles/src.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/main.cpp.s"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\src\main.cpp -o CMakeFiles\src.dir\main.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/main.cpp.obj"

# External object files for target src
src_EXTERNAL_OBJECTS =

src/src.exe: src/CMakeFiles/src.dir/main.cpp.obj
src/src.exe: src/CMakeFiles/src.dir/build.make
src/src.exe: src/CMakeFiles/src.dir/linklibs.rsp
src/src.exe: src/CMakeFiles/src.dir/objects1.rsp
src/src.exe: src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable src.exe"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\src.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src.dir/build: src/src.exe
.PHONY : src/CMakeFiles/src.dir/build

src/CMakeFiles/src.dir/clean:
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src && $(CMAKE_COMMAND) -P CMakeFiles\src.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/src.dir/clean

src/CMakeFiles/src.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\src C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src C:\Users\mateu\CLionProjects\Git2\18_10_2021\ZADAANIA\cmake-build-debug\src\CMakeFiles\src.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/src.dir/depend

