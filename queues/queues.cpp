#include <stdio.h>
#include "queues.h"

const char *QUEUETAG = "from queue module";

void createQueue()
{
    QueueHandle_t qh1 = nullptr;

    qh1 = xQueueCreate(10, sizeof(queuetype));

    //  LENGHT OF QUEU AND LENGTH OF EACH DATA TYPE

    if (qh1 != NULL)
        ESP_LOGI(QUEUETAG, " %d\t%p\t%s\n", sizeof(qh1), (void *)qh1, "Queu have been created");

    else
        ESP_LOGI(QUEUETAG, "%s\n", "Queu  havent created");
}