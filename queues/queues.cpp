#include <stdio.h>
#include "queues.h"

const char *QUEUETAG = "from queue module";

void sendingToQueueByTasks()
{
}

void queueWrapper()
{
    QueueHandle_t qh1 = nullptr;

    void *queueptr = nullptr; //  to   verify  the heap  address

    qh1 = xQueueCreate(10, sizeof(queueDatatype));
    queueptr = qh1;
    ESP_LOGI(QUEUETAG, "  the  queue is at   location  %p\n\n\n\n", queueptr);
    ESP_LOGI(QUEUETAG, "  the  queue is at   location  %10p\n\n\n\n", (void *)qh1);

    //  LENGHT OF QUEU AND LENGTH OF EACH DATA TYPE

    if (qh1 != NULL)
    {
        ESP_LOGI(QUEUETAG, " %d\t%s\n", sizeof(queueDatatype), "Queu have been created");

        // sending to  queue  by tasks

        sendingToQueueByTasks();
    }
    else
    {
        ESP_LOGI(QUEUETAG, "%s\n", "no space mate");

        return;
    }

    queueptr = nullptr;
    qh1 = nullptr;
}
