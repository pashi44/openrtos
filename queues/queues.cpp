#include <stdio.h>
#include "queues.h"
#define writingQueueDelay pdMS_TO_TICKS(0)
#define queueTickDelay pdMS_TO_TICKS(100)
// 100ms seconddelay  for queue

const char *QUEUETAG = "from queue module";
TaskHandle_t qth1 = nullptr;

static QueueHandle_t qh1;

static void queueWrapper(void *)
{

    queueDatatype *infucntinDataitesm = (queueDatatype *)dataitems;

    BaseType_t
        xStatus;
    qh1 = xQueueCreate(10, sizeof(queueDatatype));

    if (qh1 != NULL)
    {
    }

    vTaskDelete(nullptr);
    qh1 = nullptr;

    qth1 = nullptr;
}
