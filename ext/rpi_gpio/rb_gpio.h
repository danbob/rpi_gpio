/*
Original code by Ben Croston modified for Ruby by Nick Lowery
(github.com/clockvapor)
Copyright (c) 2014-2015 Nick Lowery

Copyright (c) 2013-2014 Ben Croston

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "ruby.h"
#include "c_gpio.h"
#include "event_gpio.h"
#include "cpuinfo.h"
#include "common.h"
#include "constants.h"
#include "rb_pwm.h"

void define_gpio_module_stuff(void);
int mmap_gpio_mem(void);
VALUE GPIO_clean_up(int argc, VALUE *argv, VALUE self);
VALUE GPIO_setup(int argc, VALUE *argv, VALUE self);
VALUE GPIO_set_mode(VALUE self, VALUE mode);
VALUE GPIO_output(VALUE self, VALUE channels, VALUE vals);
VALUE GPIO_input(VALUE self, VALUE channel);
VALUE GPIO_set_warnings(VALUE self, VALUE setting);