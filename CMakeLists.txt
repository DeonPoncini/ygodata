cmake_minimum_required(VERSION 2.8)
project(ygodata)

set(DATA_VERSION "0.0.1")

################################
# Third party libraries
################################
find_package(Boost 1.55.0 COMPONENTS system REQUIRED)
find_package(zephyr)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${ZEPHYR_INCLUDE_DIRS})

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

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
    ${CMAKE_CURRENT_BINARY_DIR}/include/ygo/data/cpp/DataTypes.h)

target_link_libraries(ygodata
    ${YGODATA_LIBS})

add_custom_command(OUTPUT
    ${CMAKE_CURRENT_BINARY_DIR}/include/ygo/data/cpp/DataTypes.h
    COMMAND python
    ARGS $ENV{PROJECT_SCRIPT_DIR}/include/generate-data.py
    ${CMAKE_CURRENT_LIST_DIR}/xml/data.xml
    ${CMAKE_CURRENT_BINARY_DIR}/include/ygo/data)

################################
# Export library
################################

export_project(
    NAME ygodata
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_BINARY_DIR}/include
    LIBS ygodata
    VERSION ${DATA_VERSION}
)

export_java_project(
    NAME ygodata-java
    JAR_PATHS ${CMAKE_CURRENT_BINARY_DIR}/include/ygo/data/java
)
