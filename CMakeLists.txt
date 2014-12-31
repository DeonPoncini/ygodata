cmake_minimum_required(VERSION 2.8)
project(ygodata)

set(DATA_VERSION "0.0.1")

################################
# Third party libraries
################################
find_package(Boost 1.55.0 COMPONENTS system thread REQUIRED)
find_package(zephyr)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${ZEPHYR_INCLUDE_DIRS})

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)

################################
# Libraries
################################
set(YGODATA_LIBS
    ${Boost_LIBRARIES}
    ${ZEPHYR_LIBRARIES}
    )

################################
# Build targets
################################
add_library(ygodata
    ${SRC}
    ${INCLUDES}
    ${CMAKE_CURRENT_BINARY_DIR}/include/cpp/ygo/data/DataTypes.h)

target_link_libraries(ygodata
    ${YGODATA_LIBS})

make_directory(${CMAKE_CURRENT_BINARY_DIR}/include/cpp/ygo/data)

add_custom_command(OUTPUT
    ${CMAKE_CURRENT_BINARY_DIR}/include/cpp/ygo/data/DataTypes.h
    COMMAND python
    ARGS ${CMAKE_CURRENT_LIST_DIR}/scripts/generate-data
    ${CMAKE_CURRENT_LIST_DIR}/xml/data.xml
    ${CMAKE_CURRENT_BINARY_DIR}/include/cpp/ygo/data)

################################
# Export library
################################

export_project(
    NAME ygodata
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_BINARY_DIR}/include
    LIBS ygodata
    VERSION ${DATA_VERSION}
)

