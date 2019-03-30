cmake_minimum_required(VERSION 3.2)
project(xmath_tests)

add_subdirectory(lib/googletest)

include_directories(${DIVISION_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/xmatrix_tests.cpp)

add_executable(xmath_tests ${SOURCE_FILES})
target_link_libraries(xmath_tests xmath gtest)
install(TARGETS xmath_tests DESTINATION bin)

