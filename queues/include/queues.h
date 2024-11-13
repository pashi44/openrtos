// queues.h
#ifndef __QUEUEH__
#define __QUEUEH__
#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
#include <driver/gpio.h>
#include <freertos/task.h>
#include <freertos/queue.h>
#include <freertos/timers.h>
#include "esp_log.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum
    {
        eSender1,
        eSender2,
        eSender3
    } DataSource_t;
    /* Define the structure type that will be passed on the queue. */
    typedef struct
    {
        uint8_t ucValue;
        DataSource_t eDataSource;
    } Data_t;
    /* Declare two variables of type Data_t that will be passed on the queue. */
    const Data_t xStructsToSend[3] =
        {
            {100, eSender1}, /* Used by Sender1. */
            {200, eSender2},
            {254, eSender3} /* Used by Sender2. */
    };
    extern QueueHandle_t xQueue;

    void vSenderTask(void *);
    void vRecieverTask(void *);

#ifdef __cplusplus
}
#endif
#endif
