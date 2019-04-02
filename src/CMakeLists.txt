cmake_minimum_required(VERSION 3.2)
project(xmath C CXX)

set(SOURCE_FILES
    xmatrix.h
    xhistogram.h
    xmatrix.cpp
)

add_library(xmath SHARED STATIC ${SOURCE_FILES})

install(TARGETS xmath DESTINATION ${XMATH_INSTALL_LIB_DIR})
install(FILES xmatrix.h DESTINATION ${XMATH_INSTALL_INCLUDE_DIR})
