cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)
project (DB)

include_directories ("${PROJECT_SOURCE_DIR}/include")
file(GLOB SOURCES "src/*.cpp")
add_subdirectory (src) 

add_executable (DB ${SOURCES})
