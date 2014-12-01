cmake_minimum_required(VERSION 2.8)
project(libygodata)

set(DATA_VERSION "0.0.1")

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)
include_directories(include/ygo/data)

################################
# Build targets
################################
add_library(ygodata SHARED
    ${SRC}
    ${INCLUDES})

################################
# Export library
################################

export_project(
    NAME libygodata
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include
    LIBS ygodata
    VERSION ${DATA_VERSION}
)

