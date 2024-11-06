idf_component_register(

    SRCS "./amazonrtos.cpp" "../tasks/tasks.cpp" "../queues/queues.cpp"
    INCLUDE_DIRS

    "../tasks/include" "../queues/include"

    "."
    PRIV_REQUIRES "driver" "esp_wifi")
