cmake_minimum_required (VERSION 2.8)
project (MyFirstProgram)

# Add executable called "sample_program" that is built from the source files
# "main.c" and "helpers.c". The extensions are automatically found.

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable (sample_program src/main.c src/helpers.c)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# sample_program

target_link_libraries (sample_program  my_first_library)
