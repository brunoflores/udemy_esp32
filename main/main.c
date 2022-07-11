#include <stdbool.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "freertos/task.h"
#include "sdkconfig.h"

#include "rgb_led.h"

void app_main(void) {
  rgb_led_init();
  while (true) {
    rgb_led_wifi_started();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    rgb_led_http_server_started();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    rgb_led_wifi_connected();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
