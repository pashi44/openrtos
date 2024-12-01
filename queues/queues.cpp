// queues.c
#include "queues.h"

void vSenderTask(void *argsender)

{

    BaseType_t QueueStats;

    for (;;)
    {
        QueueStats = xQueueSend(xQueuHandler, argsender, pdMS_TO_TICKS(100));
    }
    if (QueueStats != pdPASS)
    {
        ESP_LOGI("", "%s\n", "couldnt send to  the queue");
        return;
    }
}