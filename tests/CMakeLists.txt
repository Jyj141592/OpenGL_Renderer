link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/libs/GLFW/glfw3.lib
    GLRenderer
    CommonRenderUtility)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/
    ${CMAKE_SOURCE_DIR}/include/)

add_executable(
    standalone
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
