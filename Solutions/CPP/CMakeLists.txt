cmake_minimum_required(VERSION 3.10)

project(LinearAlgebra CXX)

#####################################
# GTest
#####################################
enable_testing()
add_subdirectory(contrib/gtest)
# list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/Modules")

#####################################
# Project
#####################################
add_subdirectory(LinearAlgebra)