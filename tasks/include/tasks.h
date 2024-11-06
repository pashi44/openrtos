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

#ifndef configIDLE_SHOULD_YIELD
#define configIDLE_SHOULD_YIELD 1
#endif

#ifndef INCLUDE_vTaskDelay
#define INCLUDE_vTaskDelay 1
#endif
#ifndef INCLUDE_vTaskDelete
#define INCLUDE_vTaskDelete 1
#endif

#ifndef configUSE_IDLE_HOOK
#define configUSE_IDLE_HOOK 0
#endif
extern const char *TAG;

// void vApplicationIdleHook(void);

extern "C" void
TaskFunctionOne(void *);
extern "C" void TaskFunctionTwo(void *);

extern "C" void taskWrapper();

// extern TaskHandle_t th1, th2;

extern TaskHandle_t th1, th2;

#endif