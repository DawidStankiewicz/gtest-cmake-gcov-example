##############
# Unit Tests
##############
set( BIN_NAME testFoo )

add_executable( ${BIN_NAME} 
    main.cpp
    mockbar.h
    testfoo.cpp
    testfoo.h
    )

target_link_libraries( ${BIN_NAME} ${GTEST_LIBRARIES} )
target_link_libraries( ${BIN_NAME}
    libfoo
    )

#add_test(NAME that-I-can-do_for_just_test COMMAND testFoo )
#include( ../../cmake/CodeCoverage.cmake )
SETUP_TARGET_FOR_COVERAGE(
    coverage_${BIN_NAME}  # Name for custom target.
    ${BIN_NAME}         # Name of the test driver executable that runs the tests.
    # NOTE! This should always have a ZERO as exit code
    # otherwise the coverage generation will not complete.
    coverage_${BIN_NAME}_dir            # Name of output directory.
    )

## Standard linking to gtest stuff.
#target_link_libraries(runUnitTests gtest gtest_main)
#
## Extra linking for the project.
#target_link_libraries(runUnitTests project1_lib)
#
## This is so you can do 'make test' to see all your tests run, instead of
## manually running the executable runUnitTests to see those specific tests.
#add_test(NAME that-test-I-made COMMAND runUnitTests)
#
## You can also omit NAME and COMMAND. The second argument could be some other
## test executable.
#add_test(that-other-test-I-made runUnitTests)

