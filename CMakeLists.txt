cmake_minimum_required( VERSION 3.1...3.18 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

project( raylibtemplate VERSION 0.1 
                        DESCRIPTION "A simple self-contained raylib project Template" )

add_subdirectory( extern )

# Create your game executable called "raylibtemplate"
add_executable( ${PROJECT_NAME} "" )
add_subdirectory( src )
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )
target_link_libraries( ${PROJECT_NAME} raylib )

# Build the tests 
ENABLE_TESTING()
ADD_SUBDIRECTORY( tests )