cmake_minimum_required( VERSION 3.1...3.15 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

# add_subdirectory( main )
# add_subdirectory( my_functions )
message( NOTICE "in src subdir" )
 
# add sources to target 
target_sources( ${PROJECT_NAME}
                PRIVATE 
                windows.c )