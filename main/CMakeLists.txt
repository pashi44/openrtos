idf_component_register(

    SRCS "./amazonrtos.cpp" "../tasks/tasks.cpp"
    INCLUDE_DIRS

    "../tasks/include"

    "."
    PRIV_REQUIRES "driver" "esp_wifi" )
