cmake_minimum_required(VERSION 3.10)
project(Deneme)
set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(PROJECT_SOURCES
        ${PROJECT_SOURCE_DIR}/library.cpp
        ${PROJECT_SOURCE_DIR}/gl.c
        ${PROJECT_SOURCE_DIR}/shaders.cpp
        ${PROJECT_SOURCE_DIR}/main.cpp)
set(PROJECT_HEADERS         
       ${PROJECT_INCLUDE_DIR}/library.hpp
       ${PROJECT_INCLUDE_DIR}/glad/gl.h
       ${PROJECT_INCLUDE_DIR}/shaders.hpp

       )

find_package(glfw3 3.3.6 REQUIRED)
find_package(glm REQUIRED)
include_directories(${PROJECT_INCLUDE_DIR})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} glfw)