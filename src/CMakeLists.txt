project(main)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_library(myopencvfunc STATIC myopencvfunc/readingfunc.cpp)
target_include_directories(myopencvfunc PUBLIC ../include)
target_link_libraries(myopencvfunc ${OpenCV_LIBS})