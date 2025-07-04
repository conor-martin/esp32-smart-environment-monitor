#ifndef SENSOR_H
#define SENSOR_H

#include <stdbool.h>

void sensor_init_motion();
bool sensor_detect_motion();
void sensor_init_light();
int sensor_read_light();
void sensor_init_temperature();
float sensor_read_temperature();

#endif // SENSOR_H
