cmake_minimum_required(VERSION 3.11)
project(Hackathon)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(SOURCE_FILES dividingList.cpp evalOfExpression.cpp smallestHole.cpp)

add_executable(CMakeLists ${SOURCE_FILES})