#include <FreeRTOSConfig.h>

#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
#include <freertos/portmacro.h>
#include "esp_log.h"
#include "esp_err.h"
#include "tasks.h"
#include "queues.h"
#include "interrupts.h"
#include "semaphore.h"
#include <iostream>
#ifdef __cplusplus
extern "C"
{

#endif

    void app_main(int argc, char **argv)
    {
        if (xBinarySemaphore != NULL)
        {
            xTaskCreate(vDefferedTaskHandler,
                        "hadling deferred task",
                        1000,
                        nullptr,
                        3,
                        nullptr);
            xTaskCreate(periodicTask,
                        "hadling peroidic task",
                        1000,
                        nullptr,
                        1, // non prority  task
                        nullptr);
            // vPortSetInterruptHandler(mainINTERRUPTNUM, ulInterruptHandler);
            // for a particular port
            xTaskCreate((void (*)(void *))ulInterruptHandler,

                        "hadling isr task",

                        1000,

                        nullptr,

                        7, // non prority  task

                        nullptr);
        }
    }

#ifdef __cplusplus
}
#endif
