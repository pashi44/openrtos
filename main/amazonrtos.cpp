
#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
#include <driver/gpio.h>
#include <freertos/task.h>
#include <freertos/stack_macros.h>
#include <freertos/queue.h>
#include <freertos/timers.h>
#include "esp_log.h"
#include "esp_err.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tasks.h"
#include <iostream>

#define INCLUDE_vTaskDelay 1

static TaskHandle_t th1, th2 = nullptr;

extern "C" void
app_main(int argc, char **argv)
{

        if (xTaskCreate(
                TaskFunctionOne,
                "handling task   one code",

                2048, NULL, 1, &th1) == pdPASS)

        {
        }
        if (xTaskCreate(TaskFunctionTwo,

                        "handling task   two code",

                        2048, NULL, 1, &th2) == pdPASS)

        {
        }
        th1 = nullptr;
        th2 = nullptr;
}
