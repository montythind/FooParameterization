
cmake_minimum_required(VERSION 3.5)
project(FooParameterization)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(FooParameterization
    src/Sphere.cpp
    src/VolumeCalculator.cpp
)

add_executable(FooParameterizationApp src/main.cpp)
target_link_libraries(FooParameterizationApp FooParameterization)

enable_testing()
add_subdirectory(tests)
