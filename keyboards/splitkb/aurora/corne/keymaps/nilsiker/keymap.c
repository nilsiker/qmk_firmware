#include QMK_KEYBOARD_H
#include "./config/tap_dance.c"
#include "./config/led.c"
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum {
    LAYOUT_BASE,
    LAYOUT_LOWER,
    LAYOUT_RAISE,
    LAYOUT_LAYER_HUB,
    LAYOUT_RPG,
    LAYOUT_RPG_LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYOUT_BASE] = LAYOUT_split_3x6_3(
        TD(TD_TAB_HOLD_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T,                 KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, 
        KC_LCTL,             KC_A, KC_S, KC_D, KC_F, KC_G,                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
        KC_LSFT,             LALT_T(KC_Z), KC_X, KC_C, KC_V, KC_B,                 KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, 
                                    KC_LGUI, MO(1), KC_SPC,                KC_ENT, MO(2), RALT_T(KC_BSPC)),

    [LAYOUT_LOWER] = LAYOUT_split_3x6_3(
        _______, KC_1, KC_2, KC_3, KC_4, KC_5,                       KC_6, KC_7, KC_8, KC_9, KC_0, _______, 
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                    KC_LGUI, _______, KC_SPC,       KC_ENT, MO(3), _______),

    [LAYOUT_RAISE] = LAYOUT_split_3x6_3(
        _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, 
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_8), ALGR(KC_7),       KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, 
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_9), ALGR(KC_0),       KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD, 
                                            KC_LGUI, MO(3), KC_BSPC,      KC_ENT, _______, _______),

    [LAYOUT_LAYER_HUB] = LAYOUT_split_3x6_3(
        QK_BOOT, DF(0), DF(1), DF(2), DF(3), DF(4),                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                KC_LGUI, _______, KC_SPC,               KC_ENT, _______, _______),

    [LAYOUT_RPG] = LAYOUT_split_3x6_3(
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T,                 KC_Y, KC_U, KC_I, KC_O, KC_P, _______, 
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, TD(TD_B_HOLD_M),      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, DF(0), 
                                  KC_LGUI, MO(5), KC_SPC,      KC_ENT, _______, _______),

     [LAYOUT_RPG_LOWER] = LAYOUT_split_3x6_3(
        _______, KC_1, KC_2, KC_3, KC_4, KC_5,          KC_6, KC_7, KC_8, KC_9, KC_0, _______, 
        KC_LCTL, KC_A, KC_S, KC_D, KC_J, KC_K,          KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_M,          KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, DF(0), 
                    KC_LGUI, _______, KC_BSPC,          KC_ENT, _______, _______)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)