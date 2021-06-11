#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x6135
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         GA15.0

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B4,D7,D6,D4,E6}
#define MATRIX_COL_PINS {D2,D1,D0,D3,D5,B5,F0,B6,C6,C7,F1,F4,F5,F6,F7}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT D2 // usually COL
#define QMK_ESC_INPUT B4 // usually ROW
