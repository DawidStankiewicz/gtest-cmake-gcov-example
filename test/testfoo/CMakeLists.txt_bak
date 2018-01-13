file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testfoo ${SRCS})

#link_directories(
#    gtest/export/lib/x86_64-linux-gnu/
#    )
TARGET_LINK_LIBRARIES(testfoo
    libfoo
    ${GTEST_LIBRARIES}
    #gtest gtest_main
    #gmock   gmock_main
    #-pthread
    #libgtest
    #libgmock
)

add_test(NAME testfoo
         COMMAND testfoo)
