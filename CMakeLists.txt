cmake_minimum_required(VERSION 3.16)
project(DebugTest)

set(CMAKE_CXX_STANDARD 17)

# Ensure Debug flags are set
set(CMAKE_BUILD_TYPE Debug)

# Find Qt6 Core
find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(DebugTest main.cpp)
target_link_libraries(DebugTest Qt6::Core)

# Ensure QT_NO_DEBUG_OUTPUT is disabled
add_definitions(-DQT_NO_DEBUG_OUTPUT=0)

