/*
 * LV_GPIO.c
 *
 *  Created on: Dec 3, 2016
 *      Author: Anoop Jain
 */

#include "main.h"
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "can.h"
#include "gpio.h"
#include "LV_CAN.h"

//TODO read all GPIO pins
GPIO_PinState state;
int32_t BMSalert=2;
int32_t IMDalert=2;
int32_t Pumpalert=2;
int32_t Fanalert=2;
int32_t MCalert=2;
int32_t Emeteralert=2;
uint8_t * pinsArray = NULL;
int arrIndex = 0;

void readPins(){
	pinsArray = malloc(6*(sizeof(uint8_t)));
	state=HAL_GPIO_ReadPin(GPIOE,BMS_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			BMSalert = 1; //there is an alert
			pinsArray[arrIndex] = 1;
			arrIndex++;
		}
		else{
			BMSalert = 0;
		}
	}
	state=HAL_GPIO_ReadPin(GPIOE,IMD_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			IMDalert = 1; //there is an alert
			pinsArray[arrIndex] = 2;
			arrIndex++;
		}
		else{
			IMDalert = 0;
		}
	}
	state=HAL_GPIO_ReadPin(GPIOE,Emeter_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			Emeteralert = 1; //there is an alert
			pinsArray[arrIndex] = 3;
			arrIndex++;
		}
		else{
			Emeteralert = 0;
		}
	}
	state=HAL_GPIO_ReadPin(GPIOB,Pump_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			Pumpalert = 1; //there is an alert
			pinsArray[arrIndex] = 4;
			arrIndex++;
		}
		else{
			Pumpalert = 0;
		}
	}
	state=HAL_GPIO_ReadPin(GPIOB,Fan_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			Fanalert = 1; //there is an alert
			pinsArray[arrIndex] = 5;
			arrIndex++;
		}
		else{
			Fanalert = 0;
		}
	}
	state=HAL_GPIO_ReadPin(MC_ALERT_GPIO_Port,MC_ALERT_Pin);
	if(){
		if(state == GPIO_PIN_SET){
			MCalert = 1; //there is an alert
			pinsArray[arrIndex] = 6;
			arrIndex++;
		}
		else{
			MCalert = 0;
		}
	}
	//return pinsArray;
}
void checkGPIO(){

	readPins();
	int iter = 0;
	for(iter = 0;iter < arrIndex; iter++){
		uint8_t currState = pinsArray[iter];
		switch(currState){
			case 1:
				HAL_GPIO_WritePin(GPIOE,BMS_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,1);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOE,IMD_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,2);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOE,Emeter_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,3);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB,Pump_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,4);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB,Fan_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,5);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOD,MC_Control_Pin,GPIO_PIN_RESET);
				CAN_TX(0,0,6);
				break;
		}
	}

}
