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
CMAKE_SOURCE_DIR = C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug

# Include any dependencies generated for this target.
include firstLibCall/CMakeFiles/firstLibApp.dir/depend.make
# Include the progress variables for this target.
include firstLibCall/CMakeFiles/firstLibApp.dir/progress.make

# Include the compile flags for this target's objects.
include firstLibCall/CMakeFiles/firstLibApp.dir/flags.make

firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.obj: firstLibCall/CMakeFiles/firstLibApp.dir/flags.make
firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.obj: firstLibCall/CMakeFiles/firstLibApp.dir/includes_CXX.rsp
firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.obj: ../firstLibCall/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.obj"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\firstLibApp.dir\main.cpp.obj -c C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\firstLibCall\main.cpp

firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstLibApp.dir/main.cpp.i"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\firstLibCall\main.cpp > CMakeFiles\firstLibApp.dir\main.cpp.i

firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstLibApp.dir/main.cpp.s"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\firstLibCall\main.cpp -o CMakeFiles\firstLibApp.dir\main.cpp.s

# Object files for target firstLibApp
firstLibApp_OBJECTS = \
"CMakeFiles/firstLibApp.dir/main.cpp.obj"

# External object files for target firstLibApp
firstLibApp_EXTERNAL_OBJECTS =

firstLibCall/firstLibApp.exe: firstLibCall/CMakeFiles/firstLibApp.dir/main.cpp.obj
firstLibCall/firstLibApp.exe: firstLibCall/CMakeFiles/firstLibApp.dir/build.make
firstLibCall/firstLibApp.exe: include/libsimpleLibLib.a
firstLibCall/firstLibApp.exe: firstLibCall/CMakeFiles/firstLibApp.dir/linklibs.rsp
firstLibCall/firstLibApp.exe: firstLibCall/CMakeFiles/firstLibApp.dir/objects1.rsp
firstLibCall/firstLibApp.exe: firstLibCall/CMakeFiles/firstLibApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable firstLibApp.exe"
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\firstLibApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
firstLibCall/CMakeFiles/firstLibApp.dir/build: firstLibCall/firstLibApp.exe
.PHONY : firstLibCall/CMakeFiles/firstLibApp.dir/build

firstLibCall/CMakeFiles/firstLibApp.dir/clean:
	cd /d C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall && $(CMAKE_COMMAND) -P CMakeFiles\firstLibApp.dir\cmake_clean.cmake
.PHONY : firstLibCall/CMakeFiles/firstLibApp.dir/clean

firstLibCall/CMakeFiles/firstLibApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\firstLibCall C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall C:\Users\mateu\CLionProjects\Git2\18_10_2021\firstLib\cmake-build-debug\firstLibCall\CMakeFiles\firstLibApp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : firstLibCall/CMakeFiles/firstLibApp.dir/depend

