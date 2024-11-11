#include <stdio.h>
#include "queues.h"
#define writingQueueDelay pdMS_TO_TICKS(0)
#define queueTickDelay pdMS_TO_TICKS(100)
// 100ms seconddelay  for queue

queueDatatype dataitems[] = {112, 312, 312, 121, 231};

const char *QUEUETAG = "from queue module";
TaskHandle_t qth1 = nullptr;

QueueHandle_t qh1, qh2;
void vSenderTask(void *args)
{
    BaseType_t statusoftask;
    queueDatatype *infucntinDataitems = (queueDatatype *)args;

    for (;;)
    {
        statusoftask = xQueueSend(qh1, infucntinDataitems, 0);
        if (statusoftask != pdPASS)
        {
            ESP_LOGI(QUEUETAG, "%s\n", "failed");
            return;
        }
        else if (statusoftask == errQUEUE_FULL)
        {
            ESP_LOGI(QUEUETAG, "%s\n", "queue full");
            return;
        }
        else
        {
            ESP_LOGI(QUEUETAG, "%s\n", "  wrote to  queue   ");
        }
    }
    vTaskDelete(nullptr);
}
void vrecieverTask(void *args)
{

    queueDatatype *lReceivedValue = (queueDatatype *)heap_caps_malloc(sizeof(queueDatatype) * 10,
                                                                      MALLOC_CAP_32BIT | MALLOC_CAP_8BIT);
    BaseType_t xStatus;
    for (;;)
    {
        if (uxQueueMessagesWaiting(qh1) != 0)
        {
        }

        if (xStatus == pdPASS)
        {
        }
        else
        {
        }
    }

    heap_caps_free(lReceivedValue);
}

void queueWrapper(void *dataitems)
{
    qh1 = xQueueCreate(10, sizeof(queueDatatype));

    if (qh1 != NULL)
    {
        xTaskCreate(vSenderTask, "Sender1", 1000, (void *)dataitems, 1, &qth1);
        xTaskCreate(vSenderTask, "Sender2", 1000, (void *)dataitems, 1, &qth2);
    }
    if (qh1 == errQUEUE_FULL)
    {

        xTaskCreate(vSenderTask, "Sender2", 1000, (void *)dataitems, 1, &qth2);
    }
    qh1 = nullptr;
    qth1 = nullptr;
}
