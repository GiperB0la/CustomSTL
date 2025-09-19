cmake_minimum_required(VERSION 3.16)
project(CustomSTL LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(CustomSTL/include)

set(SOURCES
    CustomSTL/Main.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/CustomSTL/include
)