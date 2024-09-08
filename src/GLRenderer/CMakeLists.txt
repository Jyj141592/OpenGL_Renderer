add_library(GLRenderer STATIC)

target_link_libraries(GLRenderer
    PRIVATE
    CommonRenderUtility) 

target_include_directories(GLRenderer 
    PRIVATE 
    ${CMAKE_CURRENT_DIR}/private/include/)
target_include_directories(GLRenderer
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/public/)

add_subdirectory(private)
