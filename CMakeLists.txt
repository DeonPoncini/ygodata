cmake_minimum_required(VERSION 2.8)
project(libygodata)

################################
# Compiler setup
################################

add_definitions(-Wall)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
    "${CMAKE_SOURCE_DIR}/../cmake/modules/")

################################
# Third party libraries
################################

################################
# Libraries
################################

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)

################################
# Resources
################################

################################
# Libraries
################################

################################
# Build targets
################################
add_library(ygodata SHARED
    ${SRC}
    ${INCLUDES})

