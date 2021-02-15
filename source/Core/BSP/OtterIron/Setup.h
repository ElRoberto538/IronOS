/*
 * Setup.h
 *
 *  Created on: 29Aug.,2017
 *      Author: Ben V. Brown
 */

#ifndef SETUP_H_
#define SETUP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f0xx_hal.h"

extern ADC_HandleTypeDef hadc;
extern I2C_HandleTypeDef hi2c1;

extern IWDG_HandleTypeDef hiwdg;

extern TIM_HandleTypeDef htim2;
void                     Setup_HAL();
uint16_t                 getADC(uint8_t channel);

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim); // Since the hal header file does not define this one

void Error_Handler(void);

#ifdef __cplusplus
}
#endif

#endif /* SETUP_H_ */
