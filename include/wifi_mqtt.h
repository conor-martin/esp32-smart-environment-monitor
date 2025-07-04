#ifndef WIFI_MQTT_H
#define WIFI_MQTT_H

#include <stdbool.h>

void wifi_connect();
void mqtt_connect();
void mqtt_publish_readings(float temperature, int light, bool motion);
bool wifi_is_connected();
bool mqtt_is_connected();

#endif // WIFI_MQTT_H
