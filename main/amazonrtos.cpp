
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

        queueWrapper();
}
