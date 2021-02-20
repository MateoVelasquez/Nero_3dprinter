/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  0xF1,0xFF,0xFF,0xC7,0x80,
  0xF0,0xFF,0xFF,0x87,0x80,
  0xF0,0x7F,0xFF,0x07,0x80,
  0xF0,0x3F,0xFE,0x07,0x80,
  0xFA,0x08,0x08,0x2F,0x80,
  0xFB,0x00,0x00,0x6F,0x80,
  0xF9,0x00,0x00,0x4F,0x80,
  0xFC,0x00,0x00,0x1F,0x80,
  0xFE,0x00,0x00,0x3F,0x80,
  0xFC,0x70,0x07,0x1F,0x80,
  0xFC,0x60,0x03,0x1F,0x80,
  0xFC,0x24,0x12,0x1F,0x80,
  0xFC,0x1C,0x1C,0x1F,0x80,
  0xFE,0x00,0x00,0x3F,0x80,
  0xFE,0x01,0xC0,0x3F,0x80,
  0xFF,0x00,0x80,0x7F,0x80,
  0xC3,0x81,0x40,0xE1,0x80,
  0x81,0xE2,0x23,0xC0,0x80,
  0xA5,0xF8,0x0F,0xD2,0x80
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif