idf_component_register(SRCS "amazonRTOS.cpp" # "../component1/*.cpp" "./**/*.cpp"
    INCLUDE_DIRS "." "../headers")

file(GLOB_RECURSE PROJECT_SOURCES "${CMAKE_SOURCE_DIR}/*.cpp")

# an laternate to  search  recusive .cpp  files  that  has .cpp  files