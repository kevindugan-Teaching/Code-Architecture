enable_testing()

add_library(Vector Vector.cpp)

target_include_directories(Vector INTERFACE "{CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(tests)