add_executable(${PROJECT_NAME} main.cpp)
add_library(array array.cpp)
target_include_directories(array PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE array)