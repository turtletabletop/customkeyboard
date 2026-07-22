// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
     * ┌───┬───┬───┬───┬───┐
     * │ x │ x │ x │ x │ x |
     * ├───┼───┼───┼───┼───┤
     * │ x │ x │ x │ x │ x |
     * ├───┼───┼───┼───┼───┤
     * │ x │ x │ x │ x │ x |
     * ├───┼───┼───┼───┼───┤
     * │ x │ x │ x │ x │ x |
     * └───┴───┴───┴───┴───┘
     */ 
    [_BASE] = LAYOUT(
        KC_Y,   KC_U,   KC_I,   KC_O, KC_P,   
        KC_H,   KC_J,   KC_K, KC_L,   KC_SEMICOLON,   
        KC_N,   KC_M, KC_COMMA,   KC_DOT, KC_SLASH
    )
};

#ifdef OLED_ENABLE
bool oled_task_user {

    oled_set_cursor(0,1);

    switch (get_highest_layer(layer_state)) {
        case _BASE :
        oled_write("main layer", false);
    }

    return false;
}
#endif