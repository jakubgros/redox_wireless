/* Copyright 2017 Mattia Dal Ben
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

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 3

#define ONESHOT_TIMEOUT 500

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define DEFAULT_INTERVAL 32
#define MK_C_INTERVAL_UNMOD DEFAULT_INTERVAL
#define MK_C_INTERVAL_0 DEFAULT_INTERVAL
#define MK_C_INTERVAL_1 DEFAULT_INTERVAL
#define MK_C_INTERVAL_2 DEFAULT_INTERVAL
#define MK_C_OFFSET_UNMOD 3
#define MK_C_OFFSET_0 9
#define MK_C_OFFSET_1 16
#define MK_C_OFFSET_2 50



#define TAPPING_TERM 160 //how long before a tap becomes a hold, if set above 500, a key tapped during the tapping term will turn it into a hold too

//ATmega32U4
