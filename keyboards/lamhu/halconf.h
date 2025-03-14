#pragma once

// #define HAL_USE_PWM TRUE
// #define HAL_USE_PAL TRUE
#define HAL_USE_I2C TRUE
#define DYNAMIC_KEYMAP_LAYER_COUNT 5 //定义VIA层数
#define VIA_EEPROM_SIZE 2048
#include_next <halconf.h>