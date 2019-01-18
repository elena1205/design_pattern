PROJECT(factorypattern)

SET(INC_DIR
    include
    )

FOREACH(sub ${INC_DIR})
    INCLUDE_DIRECTORIES(${sub})
ENDFOREACH()


SET(SRC_DIR
    src
    unittest
    )

FOREACH(sub ${SRC_DIR})
    AUX_SOURCE_DIRECTORY(${sub} SOURCE_DIR)
ENDFOREACH()

ADD_EXECUTABLE(main ${SOURCE_DIR})
