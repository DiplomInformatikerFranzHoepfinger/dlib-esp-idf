#include <stdio.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include "esp_err.h"
#include "esp_log.h"

static const char *TAG = "example";




extern "C" void app_main(void)
{
    // Do example setup
    ESP_LOGI(TAG, "Setting up...");

    ESP_LOGI(TAG, "Example end");
}
