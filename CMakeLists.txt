# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
set(CMAKE_CXX_STANDARD 11) #去除编译警告 Policy CMP0115 is not set: Source file extensions must be explicit.
cmake_minimum_required(VERSION 3.5)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(oled_ssd1306)