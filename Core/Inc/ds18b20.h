#ifndef __DS18B20_H
#define __DS18B20_H

#include "main.h"

#define DS18B20_Dout_LOW()   HAL_GPIO_WritePin(DS18b20_GPIO_Port, DS18b20_Pin, GPIO_PIN_RESET)
#define DS18B20_Dout_HIGH()  HAL_GPIO_WritePin(DS18b20_GPIO_Port, DS18b20_Pin, GPIO_PIN_SET)
#define DS18B20_Data_IN()    HAL_GPIO_ReadPin(DS18b20_GPIO_Port, DS18b20_Pin)

float   DS18B20_GetTemp_SkipRom(void);
uint8_t DS18B20_Init(void);
void    DS18B20_Delay(__IO uint32_t delay);

#endif
