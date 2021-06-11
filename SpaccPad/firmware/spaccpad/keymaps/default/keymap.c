#include QMK_KEYBOARD_H

enum _layer {
  _MAIN,
  _FUNC
};

enum encoder_names {
  _LEFT,
  _RIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT(
           KC_MUTE,  KC_TAB, KC_BSPC, KC_SLCK,  \
           KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,  \
  KC_HOME,   KC_P7,   KC_P8,   KC_P9, KC_PPLS,  \
  KC_PGUP,   KC_P4,   KC_P5,   KC_P6,           \
  KC_PGDN,   KC_P1,   KC_P2,   KC_P3, KC_PENT,  \
   KC_END,   KC_P0,          KC_PDOT
  ),

[_FUNC] = LAYOUT(
       ___, ___, ___, ___,  \
       ___, ___, ___, ___,  \
  ___, ___, ___, ___, ___,  \
  ___, ___, ___, ___,       \
  ___, ___, ___, ___, ___,  \
  ___, ___,      ___
  )
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _LEFT) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == _RIGHT) {
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    }
}