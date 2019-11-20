/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017, 2018 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYBUSIO_I2CDISPLAY_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYBUSIO_I2CDISPLAY_H

#include "shared-module/displayio/I2CDisplay.h"

#include "shared-bindings/displayio/__init__.h"
#include "common-hal/microcontroller/Pin.h"

extern const mp_obj_type_t displayio_i2cdisplay_type;

void common_hal_displayio_i2cdisplay_construct(displayio_i2cdisplay_obj_t* self,
    busio_i2c_obj_t* i2c, uint16_t device_address, const mcu_pin_obj_t* reset);

void common_hal_displayio_i2cdisplay_deinit(displayio_i2cdisplay_obj_t* self);

bool common_hal_displayio_i2cdisplay_reset(mp_obj_t self);
bool common_hal_displayio_i2cdisplay_bus_free(mp_obj_t self);

bool common_hal_displayio_i2cdisplay_begin_transaction(mp_obj_t self);

void common_hal_displayio_i2cdisplay_send(mp_obj_t self, display_byte_type_t byte_type, display_chip_select_behavior_t chip_select, uint8_t *data, uint32_t data_length);

void common_hal_displayio_i2cdisplay_end_transaction(mp_obj_t self);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYBUSIO_I2CDISPLAY_H