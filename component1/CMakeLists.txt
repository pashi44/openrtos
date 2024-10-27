add_library(component1 "./component1.cpp")
target_include_directories(component1 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")