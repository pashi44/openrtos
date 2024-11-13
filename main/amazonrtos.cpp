#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
#include "esp_log.h"
#include "esp_err.h"
#include "tasks.h"
#include "queues.h"
#include <iostream>
extern "C" void
app_main(int argc, char **argv)
{
        // taskWrapper();
        xQueue = xQueueCreate(4, sizeof(Data_t));
        if (xQueue != NULL)
        {
                xTaskCreate(vSenderTask, "sender1", 1000, (void *)(xStructsToSend), 2, NULL);
                xTaskCreate(vSenderTask, "sender2", 1000, (void *)(xStructsToSend + 1), 2, NULL);
                xTaskCreate(vSenderTask, "sender3", 1000, (void *)(xStructsToSend + 2), 2, NULL);
                xTaskCreate(vRecieverTask, "reciever", 1000, nullptr, 1, NULL);
        }

#ifdef __cplusplus
}
#endif
