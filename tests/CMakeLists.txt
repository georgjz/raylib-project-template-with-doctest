cmake_minimum_required( VERSION 3.1...3.18 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

# Build the tests for Factorial class
add_executable( runFactorialTests factorial_tests.cpp ../src/factorial.cpp )
target_include_directories( runFactorialTests PRIVATE "../include" )
target_link_libraries( runFactorialTests raylib )
