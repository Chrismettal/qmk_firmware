#pragma once

/* Work-around for slave half sometimes losing connection with master half:
   https://github.com/qmk/qmk_firmware/issues/19420#issuecomment-1372134274 */
#define usb_lld_disconnect_bus(usbp) do {} while(0)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 4

#define TAP_CODE_DELAY 10

/* communication between sides */
#define SOFT_SERIAL_PIN D2
