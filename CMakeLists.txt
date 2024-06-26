cmake_minimum_required(VERSION 3.0.0)
project(OpenGL_Renderer VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

#add include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

add_executable(
    ${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw/glfw3.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/glew/glew32s.lib
)

if (WIN32)
    # /ENTRY:mainCRTStartup keeps the same "main" function instead of requiring "WinMain"
    set(SUBSYSTEM_LINKER_OPTIONS 
    /SUBSYSTEM:WINDOWS 
    /ENTRY:mainCRTStartup)
else()
    set(SUBSYSTEM_LINKER_OPTIONS "-mwindows")
endif()

target_link_options(${PROJECT_NAME} PRIVATE ${SUBSYSTEM_LINKER_OPTIONS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
