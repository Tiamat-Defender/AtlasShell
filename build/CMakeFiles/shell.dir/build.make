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
CMAKE_SOURCE_DIR = /home/tiamat/Documents/GitHub/AtlasShell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tiamat/Documents/GitHub/AtlasShell/build

# Include any dependencies generated for this target.
include CMakeFiles/shell.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/shell.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/shell.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shell.dir/flags.make

CMakeFiles/shell.dir/src/echo.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/src/echo.c.o: /home/tiamat/Documents/GitHub/AtlasShell/src/echo.c
CMakeFiles/shell.dir/src/echo.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/shell.dir/src/echo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/src/echo.c.o -MF CMakeFiles/shell.dir/src/echo.c.o.d -o CMakeFiles/shell.dir/src/echo.c.o -c /home/tiamat/Documents/GitHub/AtlasShell/src/echo.c

CMakeFiles/shell.dir/src/echo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/src/echo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiamat/Documents/GitHub/AtlasShell/src/echo.c > CMakeFiles/shell.dir/src/echo.c.i

CMakeFiles/shell.dir/src/echo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/src/echo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiamat/Documents/GitHub/AtlasShell/src/echo.c -o CMakeFiles/shell.dir/src/echo.c.s

CMakeFiles/shell.dir/src/exit.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/src/exit.c.o: /home/tiamat/Documents/GitHub/AtlasShell/src/exit.c
CMakeFiles/shell.dir/src/exit.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/shell.dir/src/exit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/src/exit.c.o -MF CMakeFiles/shell.dir/src/exit.c.o.d -o CMakeFiles/shell.dir/src/exit.c.o -c /home/tiamat/Documents/GitHub/AtlasShell/src/exit.c

CMakeFiles/shell.dir/src/exit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/src/exit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiamat/Documents/GitHub/AtlasShell/src/exit.c > CMakeFiles/shell.dir/src/exit.c.i

CMakeFiles/shell.dir/src/exit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/src/exit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiamat/Documents/GitHub/AtlasShell/src/exit.c -o CMakeFiles/shell.dir/src/exit.c.s

CMakeFiles/shell.dir/src/main.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/src/main.c.o: /home/tiamat/Documents/GitHub/AtlasShell/src/main.c
CMakeFiles/shell.dir/src/main.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/shell.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/src/main.c.o -MF CMakeFiles/shell.dir/src/main.c.o.d -o CMakeFiles/shell.dir/src/main.c.o -c /home/tiamat/Documents/GitHub/AtlasShell/src/main.c

CMakeFiles/shell.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiamat/Documents/GitHub/AtlasShell/src/main.c > CMakeFiles/shell.dir/src/main.c.i

CMakeFiles/shell.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiamat/Documents/GitHub/AtlasShell/src/main.c -o CMakeFiles/shell.dir/src/main.c.s

CMakeFiles/shell.dir/src/type.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/src/type.c.o: /home/tiamat/Documents/GitHub/AtlasShell/src/type.c
CMakeFiles/shell.dir/src/type.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/shell.dir/src/type.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/src/type.c.o -MF CMakeFiles/shell.dir/src/type.c.o.d -o CMakeFiles/shell.dir/src/type.c.o -c /home/tiamat/Documents/GitHub/AtlasShell/src/type.c

CMakeFiles/shell.dir/src/type.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/src/type.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiamat/Documents/GitHub/AtlasShell/src/type.c > CMakeFiles/shell.dir/src/type.c.i

CMakeFiles/shell.dir/src/type.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/src/type.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiamat/Documents/GitHub/AtlasShell/src/type.c -o CMakeFiles/shell.dir/src/type.c.s

# Object files for target shell
shell_OBJECTS = \
"CMakeFiles/shell.dir/src/echo.c.o" \
"CMakeFiles/shell.dir/src/exit.c.o" \
"CMakeFiles/shell.dir/src/main.c.o" \
"CMakeFiles/shell.dir/src/type.c.o"

# External object files for target shell
shell_EXTERNAL_OBJECTS =

shell: CMakeFiles/shell.dir/src/echo.c.o
shell: CMakeFiles/shell.dir/src/exit.c.o
shell: CMakeFiles/shell.dir/src/main.c.o
shell: CMakeFiles/shell.dir/src/type.c.o
shell: CMakeFiles/shell.dir/build.make
shell: CMakeFiles/shell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable shell"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shell.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shell.dir/build: shell
.PHONY : CMakeFiles/shell.dir/build

CMakeFiles/shell.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shell.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shell.dir/clean

CMakeFiles/shell.dir/depend:
	cd /home/tiamat/Documents/GitHub/AtlasShell/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tiamat/Documents/GitHub/AtlasShell /home/tiamat/Documents/GitHub/AtlasShell /home/tiamat/Documents/GitHub/AtlasShell/build /home/tiamat/Documents/GitHub/AtlasShell/build /home/tiamat/Documents/GitHub/AtlasShell/build/CMakeFiles/shell.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/shell.dir/depend

