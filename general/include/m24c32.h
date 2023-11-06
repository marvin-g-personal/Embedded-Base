#ifndef M24C32_H
#define M24C32_H

#include <stdint.h>
#include <string.h>
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_i2c.h"

#define M24C32_I2C_ADDR     0x50
#define M24C32_PAGE_SIZE    32

I2C_HandleTypeDef *i2c_handle;

HAL_StatusTypeDef eeprom_write(uint16_t mem_address, uint8_t *data, uint16_t size);

HAL_StatusTypeDef eeprom_read(uint16_t mem_address, uint8_t *data, uint16_t size);

HAL_StatusTypeDef eeprom_delete(uint16_t mem_address, uint16_t size);

#endif // M24C32_H