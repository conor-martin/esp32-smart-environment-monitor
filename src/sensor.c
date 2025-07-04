#include "sensor.h"

void sensor_init_motion() {}
bool sensor_detect_motion() { return false; }

void sensor_init_light() {}
int sensor_read_light() { return 0; }

void sensor_init_temperature() {}
float sensor_read_temperature() { return 0.0f; }
