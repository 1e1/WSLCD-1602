#ifndef LCONFIG_H_
#define LCONFIG_H_


#define PIN_LCD_RS      PIN_D08
#define PIN_LCD_RW      /* GND */
#define PIN_LCD_E       PIN_D09

#define PIN_LCD_DB4     PIN_D04
#define PIN_LCD_DB5     PIN_D05
#define PIN_LCD_DB6     PIN_D06
#define PIN_LCD_DB7     PIN_D07

#define PIN_LCD_BL      PIN_D10
#define LCD_BLPOLARITY  POSITIVE // { POSITIVE, NEGATIVE }, see ./library/LCD.h tpol, t_backlighPol


#define LCD_PINS            8, 13, 9, 4, 5, 6, 7
//#define LCD_BLPIN           10
#define LCD_BLPOLARITY      POSITIVE // or POSITIVE, see ./library/LCD.h tpol, t_backlighPol
#define LCD_WIDTH           16
#define LCD_HEIGHT          2


#endif
