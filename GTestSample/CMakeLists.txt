cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
 
# Link runTests with what we want to test and the GTest and pthread library
file(GLOB_RECURSE TEST_SOURCES  Calculator.cpp Calculator.tests.cpp)
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
