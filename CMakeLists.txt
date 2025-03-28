cmake_minimum_required(VERSION 3.28)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "Export compile commands")
project(project_app)

add_subdirectory(deps/threadx)
add_subdirectory(deps/etl)
include_directories(includes)

add_executable(app 
    src/demo_threadx.c
    src/cpp_entry.cpp)

target_link_libraries(app PRIVATE 
    azrtos::threadx
    etl::etl)