idf_component_register(

    SRCS "./amazonrtos.cpp" "../tasks/tasks.cpp" "../queues/queues.cpp" "../interrupts/interrupts.cpp"
    INCLUDE_DIRS

    "../tasks/include" "../queues/include"
    "../interrupts/include"

    # freertos plus
    "$ENV{HOME}/FreeRTOS/FreeRTOS-Plus/VisualStudio_StaticProjects/FreeRTOS+TCP"
    "$ENV{HOME}/FreeRTOS/FreeRTOS-Plus/Source/FreeRTOS-Plus-TCP/tools/tcp_utilities/include"
    "$ENV{HOME}/FreeRTOS/FreeRTOS-Plus/Source/FreeRTOS-Plus-TCP/source/include"

    "."
    PRIV_REQUIRES "driver" "esp_wifi" freertos)
