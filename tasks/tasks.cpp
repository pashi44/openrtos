#include <stdio.h>
#include "tasks.h"
const char *TAG = "ESP32-Xtensa";

using namespace std;

void TaskFunctionOne(void *ar)
{

    TickType_t tickbeforetoblock = xTaskGetTickCount(); // pushing  to  block queue
    {

        ESP_LOGI(TAG, "from task oneasdhjasvdjsavd %d\n ", xPortGetFreeHeapSize());

        xTaskDelayUntil(&tickbeforetoblock, pdMS_TO_TICKS(1000));
    }

    vTaskDelete(nullptr);
}

void TaskFunctionTwo(void *arp)

{

    TickType_t tickbeforetoblock = xTaskGetTickCount(); // pushong the task  to block queue  at the current time clock
    for (;;)

    {

        ESP_LOGI(TAG, "from task  two %d\n ", xPortGetFreeHeapSize());

        xTaskDelayUntil(&tickbeforetoblock, pdMS_TO_TICKS(500));
    }

    vTaskDelete(nullptr);
}