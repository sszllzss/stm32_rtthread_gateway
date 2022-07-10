/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOE
#define KEY0_Pin GPIO_PIN_4
#define KEY0_GPIO_Port GPIOE
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOE
#define MPU6050_INT_Pin GPIO_PIN_6
#define MPU6050_INT_GPIO_Port GPIOE
#define LCD_RES_Pin GPIO_PIN_13
#define LCD_RES_GPIO_Port GPIOC
#define LCD_DB0_Pin GPIO_PIN_0
#define LCD_DB0_GPIO_Port GPIOF
#define LCD_DB1_Pin GPIO_PIN_1
#define LCD_DB1_GPIO_Port GPIOF
#define LCD_DB2_Pin GPIO_PIN_2
#define LCD_DB2_GPIO_Port GPIOF
#define LCD_DB3_Pin GPIO_PIN_3
#define LCD_DB3_GPIO_Port GPIOF
#define LCD_DB4_Pin GPIO_PIN_4
#define LCD_DB4_GPIO_Port GPIOF
#define LCD_DB5_Pin GPIO_PIN_5
#define LCD_DB5_GPIO_Port GPIOF
#define LCD_DB6_Pin GPIO_PIN_6
#define LCD_DB6_GPIO_Port GPIOF
#define LCD_DB7_Pin GPIO_PIN_7
#define LCD_DB7_GPIO_Port GPIOF
#define WKUP_Pin GPIO_PIN_0
#define WKUP_GPIO_Port GPIOA
#define HC_SR04_trig_Pin GPIO_PIN_1
#define HC_SR04_trig_GPIO_Port GPIOA
#define HC_06_RXD_Pin GPIO_PIN_2
#define HC_06_RXD_GPIO_Port GPIOA
#define HC_06_TXD_Pin GPIO_PIN_3
#define HC_06_TXD_GPIO_Port GPIOA
#define LCD_ROM_CS_Pin GPIO_PIN_4
#define LCD_ROM_CS_GPIO_Port GPIOA
#define LCD_ROM_SCK_Pin GPIO_PIN_5
#define LCD_ROM_SCK_GPIO_Port GPIOA
#define LCD_ROM_OUT_Pin GPIO_PIN_6
#define LCD_ROM_OUT_GPIO_Port GPIOA
#define LCD_ROM_IN_Pin GPIO_PIN_7
#define LCD_ROM_IN_GPIO_Port GPIOA
#define LCD_WR_Pin GPIO_PIN_1
#define LCD_WR_GPIO_Port GPIOG
#define SCAN_KEY_Pin GPIO_PIN_12
#define SCAN_KEY_GPIO_Port GPIOE
#define SCAN_KEYE13_Pin GPIO_PIN_13
#define SCAN_KEYE13_GPIO_Port GPIOE
#define SCAN_KEYE14_Pin GPIO_PIN_14
#define SCAN_KEYE14_GPIO_Port GPIOE
#define SCAN_KEYE15_Pin GPIO_PIN_15
#define SCAN_KEYE15_GPIO_Port GPIOE
#define ESP_01_RXD_Pin GPIO_PIN_10
#define ESP_01_RXD_GPIO_Port GPIOB
#define ESP_01_TXD_Pin GPIO_PIN_11
#define ESP_01_TXD_GPIO_Port GPIOB
#define Flash_CS_Pin GPIO_PIN_12
#define Flash_CS_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_11
#define LCD_RS_GPIO_Port GPIOD
#define t18B20_DQ_Pin GPIO_PIN_12
#define t18B20_DQ_GPIO_Port GPIOD
#define SCAN_KEYG3_Pin GPIO_PIN_3
#define SCAN_KEYG3_GPIO_Port GPIOG
#define SCAN_KEYG4_Pin GPIO_PIN_4
#define SCAN_KEYG4_GPIO_Port GPIOG
#define SCAN_KEYG5_Pin GPIO_PIN_5
#define SCAN_KEYG5_GPIO_Port GPIOG
#define NRF_CE_Pin GPIO_PIN_6
#define NRF_CE_GPIO_Port GPIOG
#define NRF_CS_Pin GPIO_PIN_7
#define NRF_CS_GPIO_Port GPIOG
#define NRF_IRQ_Pin GPIO_PIN_8
#define NRF_IRQ_GPIO_Port GPIOG
#define HC_SR04_echo_Pin GPIO_PIN_6
#define HC_SR04_echo_GPIO_Port GPIOC
#define BEEP_Pin GPIO_PIN_7
#define BEEP_GPIO_Port GPIOC
#define Lora_MD1_Pin GPIO_PIN_9
#define Lora_MD1_GPIO_Port GPIOC
#define VS1838B_OUT_Pin GPIO_PIN_8
#define VS1838B_OUT_GPIO_Port GPIOA
#define DEBG_TX_Pin GPIO_PIN_9
#define DEBG_TX_GPIO_Port GPIOA
#define DEBG_RX_Pin GPIO_PIN_10
#define DEBG_RX_GPIO_Port GPIOA
#define Lora_MD0_Pin GPIO_PIN_1
#define Lora_MD0_GPIO_Port GPIOD
#define LCD_RD_Pin GPIO_PIN_3
#define LCD_RD_GPIO_Port GPIOD
#define LCD_LEDA_Pin GPIO_PIN_4
#define LCD_LEDA_GPIO_Port GPIOB
#define LED0_Pin GPIO_PIN_5
#define LED0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
