##############
# Unit Tests
##############
add_executable( testFoo 
    main.cpp
    mockbar.h
    testfoo.cpp
    testfoo.h
    )

target_link_libraries( testFoo ${GTEST_LIBRARIES} )
target_link_libraries( testFoo
    libfoo
    )

#add_test(NAME that-I-can-do_for_just_test COMMAND testFoo )
#include( ../../cmake/CodeCoverage.cmake )
SETUP_TARGET_FOR_COVERAGE(
    coverage_testFoo  # Name for custom target.
    testFoo         # Name of the test driver executable that runs the tests.
    # NOTE! This should always have a ZERO as exit code
    # otherwise the coverage generation will not complete.
    coverage_testFoo_dir            # Name of output directory.
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

