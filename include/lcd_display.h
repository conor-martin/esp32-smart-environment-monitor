#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void lcd_init();
void lcd_show_readings(float temperature, int light, bool motion);
void lcd_show_status(const char* message);

#ifdef __cplusplus
}
#endif

#endif // LCD_DISPLAY_H
