cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)
project (DB)

include_directories ("${PROJECT_SOURCE_DIR}/include")
file(GLOB SOURCES "src/*.cpp")
add_subdirectory (src)

# make sure all include files show up in the project
FILE(GLOB_RECURSE INC_ALL "include/*.h")
include_directories("include")

add_executable (DB ${SOURCES} ${INC_ALL})
