cmake_minimum_required(VERSION 3.28)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "Export compile commands")
project(project_app)
add_subdirectory(deps/threadx)
add_executable(app 
    demo_threadx.c
    cpp_entry.cpp)
target_link_libraries(app PRIVATE azrtos::threadx)