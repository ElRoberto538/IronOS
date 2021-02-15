/*
 * Pins.h
 *
 *  Created on: 29 May 2020
 *      Author: Ralim
 */

#ifndef OTTER_IRON_PINS_H_
#define OTTER_IRON_PINS_H_
#include "Model_Config.h"

#define KEY_A_Pin GPIO_PIN_3
#define KEY_A_GPIO_Port GPIOA
#define KEY_B_Pin GPIO_PIN_4
#define KEY_B_GPIO_Port GPIOA

// #define TMP36_INPUT_Pin       GPIO_PIN_4
// #define TMP36_INPUT_GPIO_Port GPIOA
// #define TMP36_ADC1_CHANNEL    ADC_CHANNEL_4
// #define TMP36_ADC2_CHANNEL    ADC_CHANNEL_4

#define STUSB_SCL_Pin 			GPIO_PIN_10
#define STUSB_SCL_GPIO_Port 	GPIOB
#define STUSB_SDA_Pin 			GPIO_PIN_11
#define STUSB_SDA_GPIO_Port 	GPIOB

#define TIP_TEMP_Pin GPIO_PIN_1
#define TIP_TEMP_GPIO_Port GPIOA
// #define TIP_TEMP_ADC1_CHANNEL 	ADC_CHANNEL_3
// #define TIP_TEMP_ADC2_CHANNEL 	ADC_CHANNEL_3
#define TREF_Pin GPIO_PIN_5
#define TREF_GPIO_Port GPIOA

#define VIN_Pin GPIO_PIN_2
#define VIN_GPIO_Port GPIOA
// #define VIN_ADC1_CHANNEL          ADC_CHANNEL_2
// #define VIN_ADC2_CHANNEL          ADC_CHANNEL_2

#define IIN_Pin 				GPIO_PIN_0
#define IIN_GPIO_Port 			GPIOA				  


#define OLED_SCL_Pin GPIO_PIN_6
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_7
#define OLED_SDA_GPIO_Port GPIOB
// #define OLED_RESET_Pin            GPIO_PIN_15
// #define OLED_RESET_GPIO_Port      GPIOA

#define PWM_Out_Pin GPIO_PIN_3
#define PWM_Out_GPIO_Port GPIOB
// #define PWM_Out_CHANNEL           TIM_CHANNEL_1

// #define SCL_Pin                   GPIO_PIN_6
// #define SCL_GPIO_Port             GPIOB

// #define SDA_Pin                   GPIO_PIN_7
// #define SDA_GPIO_Port             GPIOB

// #define SCL2_Pin                  GPIO_PIN_5
// #define SCL2_GPIO_Port            GPIOA

// #define SDA2_Pin                  GPIO_PIN_1
// #define SDA2_GPIO_Port            GPIOA

#endif /* OTTER_IRON_PINS_H_ */
