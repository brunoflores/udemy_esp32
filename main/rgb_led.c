#include <stdbool.h>

#include "led_strip.h"
#include "rgb_led.h"

static led_strip_handle_t led_strip;

void rgb_led_init(void) {
  led_strip_config_t strip_config = {
      .strip_gpio_num = RGB_LED_GPIO,
      .max_leds = 1,
  };
  ESP_ERROR_CHECK(led_strip_new_rmt_device(&strip_config, &led_strip));
  led_strip_clear(led_strip);
}

void rgb_led_wifi_started(void) {
  led_strip_set_pixel(led_strip, 0, 30, 5, 30);
  led_strip_refresh(led_strip);
}

void rgb_led_http_server_started(void) {
  led_strip_set_pixel(led_strip, 0, 20, 30, 5);
  led_strip_refresh(led_strip);
}
void rgb_led_wifi_connected(void) {
  led_strip_set_pixel(led_strip, 0, 0, 30, 15);
  led_strip_refresh(led_strip);
}
