/*
 * Copyright 2022 Kevin Gee <info@controller.works>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// enum layers {
//   BASE,
//   SYM,
//   NAV,
//   NUM,
// };

enum combos {
  A_SCLN_ESC,
  Z_SLSH_CWORD,
};

const uint16_t PROGMEM a_scln_esc[] = { KC_A, KC_SCLN, COMBO_END};
const uint16_t PROGMEM z_slsh_cword[] = { KC_Z, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [A_SCLN_ESC] = COMBO(a_scln_esc, KC_ESC),
  [Z_SLSH_CWORD] = COMBO(z_slsh_cword, CW_TOGG),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_NO,   LT(3, KC_TAB),  LT(2, KC_BSPC),     LT(1, KC_SPC),   KC_ENT, KC_NO
                            //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
     KC_QUOT, KC_LT,    KC_GT,  KC_DQUO, KC_DOT,                       KC_AMPR, KC_UNDS, KC_LBRC, KC_RBRC, KC_PERC,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_EXLM, KC_MINS, KC_PLUS, KC_EQL,  KC_HASH,                      KC_PIPE, KC_COLN, KC_LPRN, KC_RPRN, KC_QUES,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_GRV,                      KC_TILD, KC_DLR, KC_LCBR, KC_RCBR, KC_AT,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_NO, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_NO
                             //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO,                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI),OSM(KC_HYPR),    OSM(KC_MEH), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_NO, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                             //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_1, KC_2, KC_3, KC_4, KC_5,                                     KC_6, KC_7, KC_8, KC_9, KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(KC_HYPR), OSM(KC_MEH), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT),
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_NO, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                             //`--------------------------'  `--------------------------'
  ),
};
