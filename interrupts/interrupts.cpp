#include <stdio.h>
#include "interrupts.h"

BaseType_t xHigherProrityTaskWoken = pdFALSE;

SemaphoreHandle_t xBinarySemaphore = xSemaphoreCreateBinary();

void periodicTask(void *par)
{
    const TickType_t delaytime = pdMS_TO_TICKS(500UL);
    TickType_t tickinstance = xTaskGetTickCount();
    for (;;)
    {

        vTaskDelay(delaytime);
        ESP_LOGI("", "%s", "Periodic task - About to generate an interrupt.\r\n");
        ulInterruptHandler(nullptr);
        ESP_LOGI("", "%s",
                 "Periodic task - Interrupt generated.\r\n\r\n\r\n");
    }
}
void vDefferedTaskHandler(void *)
{

    gpio_set_direction(led17, GPIO_MODE_OUTPUT);
    for (;;)
    {
        // waiting for the bianry  semaphore handed by  interrupt task  by   waking xSemaPhoreGive()

        if (xSemaphoreTake(xBinarySemaphore, portMAX_DELAY) != NULL)
        {
            /* To get here the event must have occurred. Process the event (in this
            Case, just print out a message). */

            ESP_LOGI("", "%s\n", "rendering the event from the deffered task   \r\r\r\r\n\n\n");
            gpio_set_level(led17, 0);
        };
    }
}
uint32_t IRAM_ATTR ulInterruptHandler(void)
{

    gpio_set_direction(led17, GPIO_MODE_OUTPUT);

    // checking the xHigherProrityTaskWoken to be pdFALSE   so the the  deferrred task
    // would  forcfully requesta  context switch
    xSemaphoreGiveFromISR(xBinarySemaphore, &xHigherProrityTaskWoken);

    gpio_set_level(led17, 1);
    portYIELD_FROM_ISR(xHigherProrityTaskWoken); //  no effect cause its false

    // and no  context switch to  another hiher prority  taks in the ready  queue

    return 23;
}