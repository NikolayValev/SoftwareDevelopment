cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)

project (TIME)


add_library(time source/VTime.cpp)
include_directories(./source)

# This defines the name of our executable, and the file that contains main.
add_executable(kur main.cpp)
target_link_libraries(kur time)