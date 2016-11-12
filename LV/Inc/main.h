/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define Battery_Readings_Pin GPIO_PIN_0
#define Battery_Readings_GPIO_Port GPIOC
#define _5V_Readings_Pin GPIO_PIN_1
#define _5V_Readings_GPIO_Port GPIOC
#define _12V_Readings_Pin GPIO_PIN_2
#define _12V_Readings_GPIO_Port GPIOC
#define _24V_Readings_Pin GPIO_PIN_3
#define _24V_Readings_GPIO_Port GPIOC
#define MC_Readings_Pin GPIO_PIN_5
#define MC_Readings_GPIO_Port GPIOA
#define Fan_Readings_Pin GPIO_PIN_6
#define Fan_Readings_GPIO_Port GPIOA
#define Pump_Readings_Pin GPIO_PIN_7
#define Pump_Readings_GPIO_Port GPIOA
#define Emeter_Readings_Pin GPIO_PIN_4
#define Emeter_Readings_GPIO_Port GPIOC
#define IMD_Readings_Pin GPIO_PIN_5
#define IMD_Readings_GPIO_Port GPIOC
#define BMS_Readings_Pin GPIO_PIN_0
#define BMS_Readings_GPIO_Port GPIOB
#define TSAL_Readings_Pin GPIO_PIN_1
#define TSAL_Readings_GPIO_Port GPIOB
#define TSAL_RESET_Pin GPIO_PIN_2
#define TSAL_RESET_GPIO_Port GPIOB
#define BMS_RESET_Pin GPIO_PIN_7
#define BMS_RESET_GPIO_Port GPIOE
#define BMS_ALERT_Pin GPIO_PIN_8
#define BMS_ALERT_GPIO_Port GPIOE
#define BMS_Control_Pin GPIO_PIN_9
#define BMS_Control_GPIO_Port GPIOE
#define IMD_RESET_Pin GPIO_PIN_10
#define IMD_RESET_GPIO_Port GPIOE
#define IMD_ALERT_Pin GPIO_PIN_11
#define IMD_ALERT_GPIO_Port GPIOE
#define IMD_Control_Pin GPIO_PIN_12
#define IMD_Control_GPIO_Port GPIOE
#define Emeter_RESET_Pin GPIO_PIN_13
#define Emeter_RESET_GPIO_Port GPIOE
#define Emeter_ALERT_Pin GPIO_PIN_14
#define Emeter_ALERT_GPIO_Port GPIOE
#define Emeter_Control_Pin GPIO_PIN_15
#define Emeter_Control_GPIO_Port GPIOE
#define Pump_RESET_Pin GPIO_PIN_10
#define Pump_RESET_GPIO_Port GPIOB
#define Pump_ALERT_Pin GPIO_PIN_11
#define Pump_ALERT_GPIO_Port GPIOB
#define Pump_Control_Pin GPIO_PIN_12
#define Pump_Control_GPIO_Port GPIOB
#define Fan_RESET_Pin GPIO_PIN_13
#define Fan_RESET_GPIO_Port GPIOB
#define Fan_ALERT_Pin GPIO_PIN_14
#define Fan_ALERT_GPIO_Port GPIOB
#define Fan_Control_Pin GPIO_PIN_15
#define Fan_Control_GPIO_Port GPIOB
#define MC_RESET_Pin GPIO_PIN_8
#define MC_RESET_GPIO_Port GPIOD
#define MC_ALERT_Pin GPIO_PIN_9
#define MC_ALERT_GPIO_Port GPIOD
#define MC_Control_Pin GPIO_PIN_10
#define MC_Control_GPIO_Port GPIOD
#define Brake_lights_Control_Pin GPIO_PIN_11
#define Brake_lights_Control_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
