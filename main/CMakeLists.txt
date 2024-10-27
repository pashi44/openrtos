add_executable(finalExecutable "./amazonRTOS.cpp")

target_link_libraries(finalExecutable PRIVATE ${component1})

target_include_directories(finalExecutable PRIVATE "${esplib}/esp_timer/include"
    "${esplib}/esp_common/include"
    "/home/hadoop/esp-idf/timers/build/config/"
    "${esplib}/esp_hw_support/include/")