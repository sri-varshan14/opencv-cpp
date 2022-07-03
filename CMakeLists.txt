cmake_minimum_required(VERSION 3.1)

project(main)
add_subdirectory(include)
add_subdirectory(src)
add_executable(main app/main.cpp)

target_link_libraries(main myopencvfunc)