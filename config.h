#ifndef LCONFIG_H_
#define LCONFIG_H_


// LCD conf
#define LCD_PINS            8, 13, 9, 4, 5, 6, 7
//#define LCD_BLPIN           10
#define LCD_BLPOLARITY      POSITIVE // or POSITIVE, see ./library/LCD.h tpol, t_backlighPol
#define LCD_ABTN            0 // analog pin of buttons
#define LCD_WIDTH           16
#define LCD_HEIGHT          2
#define LCDPAD_LATENCY1_MS  10    // detect press down
#define LCDPAD_LATENCYX_MS  500   // switch mode from ONCE to MULTI
#define LCDPAD_SPEED_MS     200   // considering new press down

#define KEYPAD_MAXVALUE_RIGHT       /* */ 30  /* * / 50  /* */
#define KEYPAD_MAXVALUE_UP          /* */ 150 /* * / 200 /* */
#define KEYPAD_MAXVALUE_DOWN        /* */ 360 /* * / 400 /* */
#define KEYPAD_MAXVALUE_LEFT        /* */ 535 /* * / 600 /* */
#define KEYPAD_MAXVALUE_SELECT      /* */ 760 /* * / 800 /* */


#endif
