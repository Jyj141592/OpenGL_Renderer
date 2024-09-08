cmake_minimum_required(VERSION 3.5.0)
project(OpenGL_Renderer VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

option(BUILD_TESTS "Build the GLFW test programs" ON)

add_subdirectory(src)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif()

#if (WIN32)
    # /ENTRY:mainCRTStartup keeps the same "main" function instead of requiring "WinMain"
#    set(SUBSYSTEM_LINKER_OPTIONS 
#    /SUBSYSTEM:WINDOWS 
#    /ENTRY:mainCRTStartup)
#else()
#    set(SUBSYSTEM_LINKER_OPTIONS "-mwindows")
#endif()

#target_link_options(${PROJECT_NAME} PRIVATE ${SUBSYSTEM_LINKER_OPTIONS})

# include(CPack)
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
