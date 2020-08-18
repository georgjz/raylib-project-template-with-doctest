cmake_minimum_required( VERSION 3.1...3.18 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

# add sources to target 
target_sources( ${PROJECT_NAME}
                PRIVATE 
                windows.cpp )