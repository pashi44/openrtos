# For more information about build system see
# https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html
# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)
project(amazonRTOS)
message(STATUS $ENV{HOME})

set(esplib "$ENV{IDF_PATH}/components")

set(CMAKE_C_COMPILER "$ENV{HOME}/.espressif/tools/xtensa-esp-elf/esp-13.2.0_20240530/xtensa-esp-elf/bin/xtensa-esp32-elf-gcc")

set(CMAKE_CXX_COMPILER
    "$ENV{HOME}/.espressif/tools/xtensa-esp-elf/esp-13.2.0_20240530/xtensa-esp-elf/bin/xtensa-esp32-elf-g++")

# include($ENV{IDF_PATH}/tools/cmake/project.cmake)
add_subdirectory(main)
add_subdirectory(component1)
