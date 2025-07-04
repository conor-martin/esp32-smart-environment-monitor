#ifndef WIFI_MQTT_H
#define WIFI_MQTT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void wifi_connect();
void mqtt_connect();
void mqtt_publish_readings(float temperature, int light, bool motion);
bool wifi_is_connected();
bool mqtt_is_connected();

#ifdef __cplusplus
}
#endif

#endif // WIFI_MQTT_H
