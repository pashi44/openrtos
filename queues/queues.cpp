// queues.c
#include "queues.h"

QueueHandle_t xQueue = NULL;

void vSenderTask(void *pvParameters)
{
    BaseType_t xStatus;
    const TickType_t xTicksToWait = pdMS_TO_TICKS(100);
    /* As per most tasks, this task is implemented within an infinite loop. */
    for (;;)
    {
        xStatus = xQueueSendToBack(xQueue, pvParameters, xTicksToWait);
        if (xStatus != pdPASS)
        {
            ESP_LOGI("", "%s\n", "Could not send to the queue");
        }
    }
}

void vRecieverTask(void *pvParameters)
{
    /* Declare the structure that will hold the values received from the queue. */
    Data_t xReceivedStructure;
    BaseType_t xStatus;
    for (;;)
    {
        if (uxQueueMessagesWaiting(xQueue) != 4)
        {
            ESP_LOGI("", "%s\n", "Queue should have been full!\r");
        }
        xStatus = xQueueReceive(xQueue, &xReceivedStructure, 0);
        if (xStatus == pdPASS)
        {
            if (xReceivedStructure.eDataSource == eSender1)
            {
                ESP_LOGI("From Sender 1 = ", "%d\n", xReceivedStructure.ucValue);
            }
            else
            {
                ESP_LOGI("From Sender 2 = ", "%d\n", xReceivedStructure.ucValue);
            }
        }
        else
        {
            ESP_LOGI("", "%s\n", "Could not receive from the queue.\r");
        }
    }
}