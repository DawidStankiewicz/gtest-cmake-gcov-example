A sample project illustrating how to perform unit testing with GoogleTest and CMake and Gcov

##ManyThanks
Thanks to 
1. https://github.com/pyarmak/cmake-gtest-coverage-example.git
2. https://github.com/kaizouman/gtest-cmake-example.git
3. https://github.com/dmonopoly/gtest-cmake-example.git

##Building

~~~
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug ..  -Dtest=ON
make
~~~

##Running

~~~
cd build && make test
cd build && make coverage_TEST_NAME //To check the coverage
~~~

or

~~~
build/test/testfoo/testfoo
~~~

##Editing
1. Add testcode
    mkdir new testXXX folder under test, maybe you just copy one from testfoo
    add new line: "add_subdirectory(testXXX)" in test/CMakeLists.txt
    modify BIN_NAME in testXXX/CMakeLists.txt, and add necessery files/libs
2. googletest in under gtest folder
    you can update the googletest with your needs

3. Make sure the project file build is before testcode

