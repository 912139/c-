cmake_minimum_required(VERSION 3.21)
project(HW_1_Google_Test)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES main.cpp Tests/ClassName.h Tests/test.cpp)
add_executable(HW_1_Google_Test ${SOURCE_FILES} Tests/ClassName.h Tests/test.cpp)
target_link_libraries(HW_1_Google_Test gtest gtest_main)