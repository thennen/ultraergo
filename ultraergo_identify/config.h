#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    0xBEEF
#define PRODUCT

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

// COLS: AVR pins used for columns, left to right
// ROWS: AVR pins used for rows, top to bottom

#define MATRIX_ROW_PINS { B3, B2, B1, F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { D4, D2, D3, D1, D0, C6, E6, B5, B6, B7, D6, C7}

#define DIODE_DIRECTION ROW2COL
