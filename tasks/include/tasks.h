#ifndef __TASKSH__
#define __TASKSH__

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
#include <iostream>

extern const char *TAG;

extern void
TaskFunctionOne(void *);
extern void TaskFunctionTwo(void *);

// extern TaskHandle_t th1, th2;

#endif