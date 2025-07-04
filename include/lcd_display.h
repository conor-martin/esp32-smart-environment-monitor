#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <stdbool.h>

void lcd_init();
void lcd_show_readings(float temperature, int light, bool motion);
void lcd_show_status(const char* message);

#endif // LCD_DISPLAY_H
