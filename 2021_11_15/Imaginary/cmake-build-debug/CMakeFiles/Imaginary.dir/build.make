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
CMAKE_SOURCE_DIR = C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Imaginary.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Imaginary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Imaginary.dir/flags.make

CMakeFiles/Imaginary.dir/src/main.cpp.obj: CMakeFiles/Imaginary.dir/flags.make
CMakeFiles/Imaginary.dir/src/main.cpp.obj: CMakeFiles/Imaginary.dir/includes_CXX.rsp
CMakeFiles/Imaginary.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Imaginary.dir/src/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Imaginary.dir\src\main.cpp.obj -c C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\main.cpp

CMakeFiles/Imaginary.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Imaginary.dir/src/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\main.cpp > CMakeFiles\Imaginary.dir\src\main.cpp.i

CMakeFiles/Imaginary.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Imaginary.dir/src/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\main.cpp -o CMakeFiles\Imaginary.dir\src\main.cpp.s

CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj: CMakeFiles/Imaginary.dir/flags.make
CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj: CMakeFiles/Imaginary.dir/includes_CXX.rsp
CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj: ../src/Imaginary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Imaginary.dir\src\Imaginary.cpp.obj -c C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\Imaginary.cpp

CMakeFiles/Imaginary.dir/src/Imaginary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Imaginary.dir/src/Imaginary.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\Imaginary.cpp > CMakeFiles\Imaginary.dir\src\Imaginary.cpp.i

CMakeFiles/Imaginary.dir/src/Imaginary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Imaginary.dir/src/Imaginary.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\src\Imaginary.cpp -o CMakeFiles\Imaginary.dir\src\Imaginary.cpp.s

# Object files for target Imaginary
Imaginary_OBJECTS = \
"CMakeFiles/Imaginary.dir/src/main.cpp.obj" \
"CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj"

# External object files for target Imaginary
Imaginary_EXTERNAL_OBJECTS =

Imaginary.exe: CMakeFiles/Imaginary.dir/src/main.cpp.obj
Imaginary.exe: CMakeFiles/Imaginary.dir/src/Imaginary.cpp.obj
Imaginary.exe: CMakeFiles/Imaginary.dir/build.make
Imaginary.exe: CMakeFiles/Imaginary.dir/linklibs.rsp
Imaginary.exe: CMakeFiles/Imaginary.dir/objects1.rsp
Imaginary.exe: CMakeFiles/Imaginary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Imaginary.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Imaginary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Imaginary.dir/build: Imaginary.exe
.PHONY : CMakeFiles/Imaginary.dir/build

CMakeFiles/Imaginary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Imaginary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Imaginary.dir/clean

CMakeFiles/Imaginary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug C:\Users\mateu\CLionProjects\Git2\15_11_2021\Imaginary\cmake-build-debug\CMakeFiles\Imaginary.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Imaginary.dir/depend

