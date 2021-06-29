cmake_minimum_required(VERSION 3.17)
project(yaml_file_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(lib/yaml-cpp/include)

add_subdirectory(src)
add_subdirectory(tst)

## Use next line if you are going to use Google Test
## add_subdirectory(lib/yaml-cpp/test/gtest-1.8.0 EXCLUDE_FROM_ALL)
add_subdirectory(lib/googletest)
option(YAML_CPP_BUILD_TESTS "Enable testing and parse tools" FALSE)
add_subdirectory(lib/yaml-cpp)
