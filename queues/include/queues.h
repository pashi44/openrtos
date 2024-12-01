// queues.h
#ifndef __QUEUEH__
#define __QUEUEH__
#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
// #include <FreeRTOS_IP_Private.h>

#include <driver/gpio.h>
#include <freertos/task.h>
#include <freertos/queue.h>
#include <freertos/timers.h>
#include "esp_log.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef configUSE_QUEUE_SETS
#define configUSE_QUEUE_SETS 1
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    extern QueueHandle_t xQueuHandler;

    typedef enum

    {
        eNetworkDownEvent = 0, /* The network interface has been lost, or needs (re)connecting. */
        eNetworkRxEvent,       /* A packet has been received from the network. */
        eTCPAcceptEvent,       /* FreeRTOS_accept() called to accept or wait for a new client. */
                               /* Other event types appear here but are not shown in this listing. */
    } eIPEvent_t;
    /* The structure that describes events, and is sent on a queue to the TCP/IP task. */
    typedef struct IP_TASK_COMMANDS
    {
        /* An enumerated type that identifies the event. See the eIPEvent_t definition above. */
        eIPEvent_t eEventType;
        /* A generic pointer that can hold a value, or point to a buffer. */
        void *pvData;
    } IPStackEvent_t;

    extern void vSenderTask(void *);
    extern void vRecieverTask(void *);

#ifdef __cplusplus
}
#endif
#endif
