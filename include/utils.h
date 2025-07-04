#ifndef UTILS_H
#define UTILS_H

#include "driver/adc.h"
#include <stdbool.h>

int read_filtered_adc(adc1_channel_t channel);
void log_sensor_data(float temperature, int light, bool motion);

#endif // UTILS_H
