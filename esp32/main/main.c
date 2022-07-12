#include <string.h>

#include "esp_event.h"
#include "esp_log.h"
#include "esp_system.h"

static const char* TAG = "MAIN";

int app_main(void) {
    esp_log_level_set("*", ESP_LOG_INFO);
    ESP_LOGI(TAG, "Hello world!\n");

    // Wait forever
    while (true) {
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }

    return 0;
}