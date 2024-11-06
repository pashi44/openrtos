#include <stdio.h>
#include "tasks.h"

const char *TAG = "ESP32-Xtensa";
using namespace std;

TaskHandle_t th1, th2 = nullptr;

void TaskFunctionOne(void *ar)
{

    TickType_t tickbeforetoblock = xTaskGetTickCount(); // pushing  to  block queue
    for (;;)
    {

        ESP_LOGI(TAG, "from task oneasdhjasvdjsavd %d\n ", xPortGetFreeHeapSize());

        xTaskDelayUntil(&tickbeforetoblock, pdMS_TO_TICKS(1000));
    }
    vTaskDelete(th2);
}

void taskWrapper()
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

    th2 = nullptr;

    th1 = nullptr;
}
void TaskFunctionTwo(void *arp)

{

    TickType_t tickbeforetoblock = xTaskGetTickCount(); // pushong the task  to block queue  at the current time clock
    for (;;)

    {

        ESP_LOGI(TAG, "from task  two %d\n ", xPortGetFreeHeapSize());

        xTaskDelayUntil(&tickbeforetoblock, pdMS_TO_TICKS(1000));
    }
    vTaskDelete(nullptr);
}
