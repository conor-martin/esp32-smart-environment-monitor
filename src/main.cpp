#include <Arduino.h>
#include "sensor.h"
#include "lcd_display.h"
#include "wifi_mqtt.h"
#include "utils.h"

void setup() {
    Serial.begin(115200);
    lcd_init();
    sensor_init_motion();
    sensor_init_light();
    sensor_init_temperature();
    wifi_connect();
    mqtt_connect();
    lcd_show_status("System ready");
}

void loop() {
    float temperature = sensor_read_temperature();
    int light = sensor_read_light();
    bool motion = sensor_detect_motion();

    lcd_show_readings(temperature, light, motion);

    if (wifi_is_connected() && mqtt_is_connected()) {
        mqtt_publish_readings(temperature, light, motion);
    }

    log_sensor_data(temperature, light, motion);
    delay(5000);
}
