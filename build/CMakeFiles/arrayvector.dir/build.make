# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\Разное\c\C-Colloquium

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\Разное\c\C-Colloquium\build

# Include any dependencies generated for this target.
include CMakeFiles/arrayvector.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arrayvector.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arrayvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrayvector.dir/flags.make

CMakeFiles/arrayvector.dir/codegen:
.PHONY : CMakeFiles/arrayvector.dir/codegen

CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj: CMakeFiles/arrayvector.dir/flags.make
CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj: H:/Разное/c/C-Colloquium/17_ArrayVector/arrayvector.cpp
CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj: CMakeFiles/arrayvector.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=H:\Разное\c\C-Colloquium\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj -MF CMakeFiles\arrayvector.dir\17_ArrayVector\arrayvector.cpp.obj.d -o CMakeFiles\arrayvector.dir\17_ArrayVector\arrayvector.cpp.obj -c H:\Разное\c\C-Colloquium\17_ArrayVector\arrayvector.cpp

CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.i"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Разное\c\C-Colloquium\17_ArrayVector\arrayvector.cpp > CMakeFiles\arrayvector.dir\17_ArrayVector\arrayvector.cpp.i

CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.s"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Разное\c\C-Colloquium\17_ArrayVector\arrayvector.cpp -o CMakeFiles\arrayvector.dir\17_ArrayVector\arrayvector.cpp.s

# Object files for target arrayvector
arrayvector_OBJECTS = \
"CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj"

# External object files for target arrayvector
arrayvector_EXTERNAL_OBJECTS =

arrayvector.exe: CMakeFiles/arrayvector.dir/17_ArrayVector/arrayvector.cpp.obj
arrayvector.exe: CMakeFiles/arrayvector.dir/build.make
arrayvector.exe: CMakeFiles/arrayvector.dir/linkLibs.rsp
arrayvector.exe: CMakeFiles/arrayvector.dir/objects1.rsp
arrayvector.exe: CMakeFiles/arrayvector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=H:\Разное\c\C-Colloquium\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arrayvector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arrayvector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arrayvector.dir/build: arrayvector.exe
.PHONY : CMakeFiles/arrayvector.dir/build

CMakeFiles/arrayvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arrayvector.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arrayvector.dir/clean

CMakeFiles/arrayvector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\Разное\c\C-Colloquium H:\Разное\c\C-Colloquium H:\Разное\c\C-Colloquium\build H:\Разное\c\C-Colloquium\build H:\Разное\c\C-Colloquium\build\CMakeFiles\arrayvector.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/arrayvector.dir/depend

