cmake_minimum_required(VERSION 3.0.0)
PROJECT(factory VERSION 0.1.0)

SET(INC_DIR
    include
    )

FOREACH(sub ${INC_DIR})
    INCLUDE_DIRECTORIES(${sub})
ENDFOREACH()


SET(SRC_DIR
    src
    )

FOREACH(sub ${SRC_DIR})
    AUX_SOURCE_DIRECTORY(${sub} SOURCE_DIR)
ENDFOREACH()

add_library(factory ${SOURCE_DIR})
