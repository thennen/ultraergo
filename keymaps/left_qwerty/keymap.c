#include QMK_KEYBOARD_H

// While the neckbeards feel like hosting this:
// https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_LEFT(
        KC_ESC,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL, KC_LGUI,  KC_BSLS, KC_LALT, KC_SPC
        ),
};
