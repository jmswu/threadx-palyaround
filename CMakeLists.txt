cmake_minimum_required(VERSION 3.28)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "Export compile commands")
project(project_app LANGUAGES C CXX)

add_subdirectory(deps/threadx)
add_subdirectory(deps/etl)
include_directories(includes)

target_compile_options(etl INTERFACE -fexceptions)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Os")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Os")

add_executable(app 
    src/demo_threadx.c
    src/cpp_entry.cpp)

target_link_libraries(app PRIVATE 
    azrtos::threadx
    etl::etl)