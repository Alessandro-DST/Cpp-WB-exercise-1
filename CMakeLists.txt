cmake_minimum_required(VERSION 3.16)
project(CalculatorApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Import GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

# Add library
add_library(my_lib my_lib/calculator.cpp)
target_include_directories(my_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Build executable
add_executable(CalculatorApp ${SOURCES})

# Link executable to library
target_link_libraries(CalculatorApp PRIVATE my_lib)

# Tests
enable_testing()

add_executable(calculator_test ${CMAKE_CURRENT_SOURCE_DIR}/tests/calculator_test.cpp)
target_link_libraries(calculator_test PRIVATE my_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(calculator_test)
