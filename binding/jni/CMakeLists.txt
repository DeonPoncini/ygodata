cmake_minimum_required(VERSION 2.8)
project(ygodata-jni)

set(JNI_DATA_VERSION "0.0.1")

if ("${CROSS_TARGET}" STREQUAL "linux-64")
    find_package(JNI)
    include_directories(${JNI_INCLUDE_DIRS})
elseif ("${CROSS_TARGET}" STREQUAL "android")
    find_package(Android)
    include_directories(${ANDROID_INCLUDE_DIRS})
endif()

find_package(jniw)

include_directories(include)
include_directories(${JNIW_INCLUDE_DIRS})

################################
# Locate source
################################
file(GLOB_RECURSE SRC src/*.c)
file(GLOB_RECURSE INCLUDES include/*.h)

add_library(ygodata-jni
    ${SRC}
    ${INCLUDES})

target_link_libraries(ygodata-jni
    ygodata)

if ("${CROSS_TARGET}" STREQUAL "linux-64")
    target_link_libraries(ygodata-jni
        ${JNI_LIBRARIES}
        ${JNIW_LIBRARIES})
elseif ("${CROSS_TARGET}" STREQUAL "android")
    target_link_libraries(ygodata-jni
        ${ANDROID_LIBRARIES}
        ${JNIW_LIBRARIES})
endif()

################################
# Export library
################################

export_project(
    NAME ygodata-jni
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include
    LIBS ygodata-jni
    VERSION ${JNI_DATA_VERSION}
)
