cmake_minimum_required(VERSION 3.13)

project(Atlas-Shell)

file(GLOB_RECURSE SOURCE_FILES src/*.c src/*.h)

set(CMAKE_C_STANDARD 23) # Enable the C23 standard

include_directories(

include/
)
add_executable(shell ${SOURCE_FILES})
