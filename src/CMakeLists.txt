add_library(openglRenderer STATIC
            glad.c)

target_include_directories(openglRenderer 
    PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
    ${CMAKE_SOURCE_DIR}/include/)
