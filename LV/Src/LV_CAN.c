/*
 * LV_CAN.c
 *
 *  Created on: Nov 19, 2016
 *      Author: Josh Shao
 */

#include "main.h"
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "can.h"
#include "gpio.h"
#include "LV_CAN.h"



void CAN_RX()
{
}




void CAN_TX()
{
	//Read 2 arrays or queues 	(1 is the actual value/message to be sent
	//							 2 is the identifier / name of the value, current readings etc.)

	CanTxMsgTypeDef msg;
}




