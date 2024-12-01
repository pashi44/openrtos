#ifndef __INTERRUPTSH__
#define __INTERRUPTSH__

#include <FreeRTOSConfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/idf_additions.h>
// #include <FreeRTOS_IP_Private.h>
#include <freertos/semphr.h>

#include <driver/gpio.h>
#include <freertos/task.h>
#include <freertos/queue.h>
#include <freertos/timers.h>
#include "esp_log.h"
#include <stdio.h>
#include <stdlib.h>
#include <driver/gpio.h>
#include <iostream>

using namespace std;

typedef struct ma
{
    int age;
    std::string name;
} __stru;
// __stru make[4] = {
// {.age = 23, .name = "prashanrh"},
// {.age = 27, .name = "prashanrh"},
// {.age = 27, .name = "prashanrh"},
// {.age = 25, .name = "prashanrh"},
// };
// for (const auto &entry : make)
// {
// std::cout << "age is :" << entry.age << "\t" << "anme is :" << entry.name << std::endl;
// };

extern SemaphoreHandle_t xBinarySemaphore;

#define led17 GPIO_NUM_17

esp_err_t gpio_reset_pin(gpio_num_t pin);
esp_err_t gpio_set_direction(gpio_num_t pin, gpio_mode_t mode);
esp_err_t gpio_set_level(gpio_num_t pin, uint32_t level);

#define mainINTERRUPTNUM 3
extern "C" void periodicTask(void *);
// static void vPortGenerateSimulatedInterrupt(int);
extern "C" void vDefferedTaskHandler(void *);
extern "C" uint32_t IRAM_ATTR ulInterruptHandler(void);

#endif