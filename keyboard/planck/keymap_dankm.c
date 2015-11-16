/* vim: set ts=4 sw=4 expandtab:
 * Based on pcarrier's layout at http://thumbs.club/
 */
#include "keymap_common.h"

const uint8_t KEYMAPS keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP_GRID( /* Native */
      TAB,   Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC,
      LCTRL, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,
      LSFT,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, ENT,
      ESC,   LGUI, LALT, RSFT, FN1,  SPC,  FN26, FN2,  LEFT, DOWN, UP,   RGHT),
    [1] = KEYMAP_GRID( /* QWERTY->Colemak */
      TAB,   Q,    W,    F,    P,    G,    J,    L,    U,    Y,    SCLN, BSPC,
      LCTRL, A,    R,    S,    T,    D,    H,    N,    E,    I,    O,    QUOT,
      LSFT,  Z,    X,    C,    V,    B,    K,    M,    COMM, DOT,  SLSH, ENT,
      ESC,   LGUI, LALT, RSFT, FN1,  SPC,  FN26, FN2,  LEFT, DOWN, UP,   RGHT),
    [2] = KEYMAP_GRID( /* 2: QWERTY->Dvorak */
      TAB,   QUOT, COMM, DOT,  P,    Y,    F,    G,    C,    R,    L,    BSPC,
      LCTRL, A,    O,    E,    U,    I,    D,    H,    T,    N,    S,    SLSH,
      LSFT,  SCLN, Q,    J,    K,    X,    B,    M,    W,    V,    Z,    ENT,
      ESC,   LGUI, LALT, RSFT, FN1,  SPC,  FN26, FN2,  LEFT, DOWN, UP,   RGHT),
    [4] = KEYMAP_GRID( /* fn1 */
      ESC,   FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, DEL,
      MINS,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    EQL,
      TRNS,  FN20, BSLS, GRV,  FN22, NO,   NO,   LBRC, RBRC, NO,   NO,   RETURN,
      TRNS,  TRNS, TRNS, TRNS, FN1,  NUHS, TRNS, FN3,  HOME, PGDN, PGUP, END),
    [5] = KEYMAP_GRID( /* fn2 */
      F1,    F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,
      TRNS,  FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN21,
      TRNS,  NO,   FN20, NO,   GRV,  NO,   NO,   FN23, FN24, NO,   NO,   TRNS,
      RCTRL, TRNS, TRNS, LSFT, FN3,  NUBS, TRNS, FN2,  MUTE, VOLD, VOLU, MPLY),
    [6] = KEYMAP_GRID( /* fn1+fn2 */
      FN7,   FN8,  FN9,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   PWR,
      NO,    NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   SLEP,
      NO,    NO,   NO,   NO,   NO,   NO,   NO,   INS,  PSCR, SLCK, PAUS, WAKE,
      FN30,  NO,   NO,   NO,   FN3,  BTN3, NO,   FN3,  MSTP, MPRV, MNXT, MPLY),
};

const uint16_t KEYMAP_FN fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(4),
    [2] = ACTION_LAYER_MOMENTARY(5),              
    [3] = ACTION_LAYER_SET_CLEAR(6),

    [7] = ACTION_DEFAULT_LAYER_SET(0),  // set Qwerty layout
    [8] = ACTION_DEFAULT_LAYER_SET(1),  // set Colemak layout
    [9] = ACTION_DEFAULT_LAYER_SET(2),  // set Dvorak layout

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [26] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_SPC),

    [30] = ACTION_MODS_KEY(MOD_RCTL, KC_DEL),
};
