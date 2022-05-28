cmake_minimum_required(VERSION 3.22)
project(module3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MODULE3_SOURCE_FILES
        src/ClassPangolin.cpp
        )

add_library(module3
        ${MODULE3_SOURCE_FILES}
        )

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_MODULE_PATH})
find_package(Pangolin REQUIRED HINTS ${CMAKE_SOURCE_DIR}/thirdparty/Pangolin/install/lib/cmake/Pangolin)

if (Pangolin_FOUND)
    message(STATUS "Pangolin Found! - ${Pangolin_DIR}")
    set(Pangolin_LIBS ${Pangolin_LIBRARIES})
endif()

target_include_directories(module3 PUBLIC
        include
        ${Pangolin_INCLUDE_DIRS}
        )

target_link_libraries(module3 PUBLIC
        ${Pangolin_LIBS})