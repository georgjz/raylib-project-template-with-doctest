cmake_minimum_required( VERSION 3.1...3.18 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

# Set OpenGL option
set( OpenGL_GL_PREFERENCE GLVND )

# Build desktop version of raylib
set( PLATFORM Desktop )

# Build raylib as shared library
option( SHARED "Build raylib as shared library" ON )
option( STATIC "Build raylib as static library" OFF )

# Add raylib
add_subdirectory( raylib )