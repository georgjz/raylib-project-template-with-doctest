cmake_minimum_required( VERSION 3.1...3.18 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

## Add raylib to build
option( SHARED "Build raylib as shared library" ON )
# option( PLATFORM "Platform to build for." "Desktop")
# set( PLATFORM "Desktop" STRING "enable X functionality" FORCE)
add_subdirectory( raylib )
# option( GLFW_BUILD_TESTS "Build the GLFW test programs" OFF )
# option( GLFW_BUILD_DOCS "Build the GLFW documentation" OFF )
# option( GLFW_INSTALL "Generate installation target" OFF )

## GLFW3
# add_subdirectory( glfw )

## glad 
# add_subdirectory( glad )