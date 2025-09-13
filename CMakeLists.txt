cmake_minimum_required(VERSION 3.16)
project(CalculatorApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add library
add_library(my_lib my_lib/calculator.cpp)
target_include_directories(my_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Build executable
add_executable(CalculatorApp ${SOURCES})

# Link executable to library
target_link_libraries(CalculatorApp PRIVATE my_lib)
