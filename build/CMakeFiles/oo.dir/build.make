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
include CMakeFiles/oo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/oo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/oo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oo.dir/flags.make

CMakeFiles/oo.dir/codegen:
.PHONY : CMakeFiles/oo.dir/codegen

CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj: CMakeFiles/oo.dir/flags.make
CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj: H:/Разное/c/C-Colloquium/11_UserTypes/usertypes.cpp
CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj: CMakeFiles/oo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=H:\Разное\c\C-Colloquium\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj -MF CMakeFiles\oo.dir\11_UserTypes\usertypes.cpp.obj.d -o CMakeFiles\oo.dir\11_UserTypes\usertypes.cpp.obj -c H:\Разное\c\C-Colloquium\11_UserTypes\usertypes.cpp

CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.i"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Разное\c\C-Colloquium\11_UserTypes\usertypes.cpp > CMakeFiles\oo.dir\11_UserTypes\usertypes.cpp.i

CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.s"
	C:\Users\user\.utils\llvm-mingw\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Разное\c\C-Colloquium\11_UserTypes\usertypes.cpp -o CMakeFiles\oo.dir\11_UserTypes\usertypes.cpp.s

# Object files for target oo
oo_OBJECTS = \
"CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj"

# External object files for target oo
oo_EXTERNAL_OBJECTS =

oo.exe: CMakeFiles/oo.dir/11_UserTypes/usertypes.cpp.obj
oo.exe: CMakeFiles/oo.dir/build.make
oo.exe: CMakeFiles/oo.dir/linkLibs.rsp
oo.exe: CMakeFiles/oo.dir/objects1.rsp
oo.exe: CMakeFiles/oo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=H:\Разное\c\C-Colloquium\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable oo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\oo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oo.dir/build: oo.exe
.PHONY : CMakeFiles/oo.dir/build

CMakeFiles/oo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\oo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/oo.dir/clean

CMakeFiles/oo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\Разное\c\C-Colloquium H:\Разное\c\C-Colloquium H:\Разное\c\C-Colloquium\build H:\Разное\c\C-Colloquium\build H:\Разное\c\C-Colloquium\build\CMakeFiles\oo.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/oo.dir/depend

