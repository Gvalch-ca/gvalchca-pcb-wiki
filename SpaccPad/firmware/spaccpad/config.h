#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x5350
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         SpaccPad

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {F6,F7,B1,B3,B2,B6}
#define MATRIX_COL_PINS {C6,D7,B4,B5,E6}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D4, F5 }
#define ENCODERS_PAD_B { D2, D3 }

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT C6 // usually COL
#define QMK_ESC_INPUT B1 // usually ROW
