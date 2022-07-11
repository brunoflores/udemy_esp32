#ifndef MAIN_RGB_LED_H_
#define MAIN_RGB_LED_H_

#define RGB_LED_GPIO 8

void rgb_led_init(void);

void rgb_led_wifi_started(void);
void rgb_led_http_server_started(void);
void rgb_led_wifi_connected(void);

#endif
