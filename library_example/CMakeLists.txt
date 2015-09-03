cmake_minimum_required (VERSION 2.8)
project (MyFirstLibrary)

# Create a library called "EnglandMatthewSampleLibrary" which includes the source file "england_matthew_sample_library.c".
# The extension is already found. Any number of sources could be listed here.

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library (my_first_library SHARED src/myfunctions.c)
add_library (my_first_library_static STATIC 
src/myfunctions.c)

# Make sure the compiler can find include files for our EnglandMatthewSampleLibrary library
# when other libraries or executables link to EnglandMatthewSampleLibrary

install (TARGETS my_first_library  DESTINATION lib)
INSTALL(FILES include/myfunctions.h DESTINATION include)
