/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x7B, 0xBB, 0x69, 0x34, 0x11, 0x8A, 0xF3, 0x90}
#define VIAL_UNLOCK_COMBO_ROWS {0, 7}
#define VIAL_UNLOCK_COMBO_COLS {0, 2}

#define VIAL_COMBO_ENTRIES 10
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Tap-Hold configuration for home-row-mods
#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Use Left Ctrl + Right Ctrl to activate the Command feature.
#define IS_COMMAND() (get_mods() == MOD_MASK_CTRL)
// Holding Shift while Caps Word is active inverts the shift state.
#define CAPS_WORD_INVERT_ON_SHIFT
// When idle, turn off Caps Word after 5 seconds.
#define CAPS_WORD_IDLE_TIMEOUT 5000

// for Achordion library
#define ACHORDION_STREAK

