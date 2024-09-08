add_library(CommonRenderUtility STATIC)

target_include_directories(CommonRenderUtility
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/public/)

add_subdirectory(private)