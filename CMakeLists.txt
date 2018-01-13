cmake_minimum_required(VERSION 2.8)

project(myProject)

enable_testing()

#OPTION( ENABLE_COVERAGE "Use gcov" ON )
#IF(ENABLE_COVERAGE)
#    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
#    SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
#    SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
#ENDIF()
INCLUDE(CodeCoverage.cmake)
SET(CMAKE_CXX_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")
SET(CMAKE_C_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")

SETUP_TARGET_FOR_COVERAGE(
    my_coverage_target  # Name for custom target.
    testfoo         # Name of the test driver executable that runs the tests.
    # NOTE! This should always have a ZERO as exit code
    # otherwise the coverage generation will not complete.
    coverage            # Name of output directory.
    )

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(libfoo)
add_subdirectory(libbar)
