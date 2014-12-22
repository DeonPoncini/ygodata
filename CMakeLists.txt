cmake_minimum_required(VERSION 2.8)
project(libygodata)

set(DATA_VERSION "0.0.1")

################################
# Third party libraries
################################
find_package(Boost 1.55.0 COMPONENTS system thread REQUIRED)

include_directories(${BOOST_INCLUDE_DIRS})

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
    )

################################
# Build targets
################################
add_library(ygodata SHARED
    ${SRC}
    ${INCLUDES})

target_link_libraries(ygodata
    ${YGODATA_LIBS})

################################
# Export library
################################

export_project(
    NAME libygodata
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include
    LIBS ygodata
    VERSION ${DATA_VERSION}
)

