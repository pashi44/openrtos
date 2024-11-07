#ifndef __QUEUEH__
#define __QUEUEH__
#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
#include <driver/gpio.h>
#include <freertos/task.h>
#include <freertos/stack_macros.h>
#include <freertos/queue.h>
#include <freertos/timers.h>
#include "esp_log.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct queuestruct
{

    struct queuestruct *
        make;

    char *name;
    unsigned int age;
} queuetype;

typedef int32_t queueDatatype;
extern const char *QUEUETAG;
#ifdef __cplusplus
extern "C"
{
#endif
    extern void queueWrapper();

    extern "C" void sendingToQueueByTasks();

#ifdef __cplusplus
}
#endif

#endif
