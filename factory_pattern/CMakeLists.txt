cmake_minimum_required(VERSION 3.0.0)
PROJECT(factory VERSION 0.1.0)

SET(INC_DIR
    products/include
    simple_factory/include
    method_factory/include
    )

FOREACH(sub ${INC_DIR})
    INCLUDE_DIRECTORIES(${sub})
ENDFOREACH()


SET(SRC_DIR
    ./
    products/src
    simple_factory/src
    method_factory/src
    )

FOREACH(sub ${SRC_DIR})
    AUX_SOURCE_DIRECTORY(${sub} SOURCE_DIR)
ENDFOREACH()

add_library(factory ${SOURCE_DIR})
