add_executable(finalExecutable "./amazonRTOS.cpp")

target_link_libraries(finalExecutable PRIVATE component1)
target_link_directories(finalExecutable PUBLIC ${esplib})
