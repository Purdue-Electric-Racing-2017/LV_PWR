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

static int canflgrx = 1;  //CAN receive flag
static int canflgtx = 1;  //CAN transmit flag


/***************************************************************************
*
*     Function Information
*
*     Name of Function: CAN_TX
*
*     Programmer's Name: Josh Shao
*
*     Function Return Type: void
*
*     Parameters (list data type, name, and comment one per line):
*		1. uint32_t, ID, caller / message sender's identifier
*		2. uint8_t *, valueary, an array of the data to be sent
*		3. uint8_t *, nameary, an array of the name of the data to be sent
*
*     Global Dependents:
*		1. static int, canflgtx, CAN transmit flag to indicate if transmit
*								 structure has been created or not
*
*     Function Description:
*
***************************************************************************/
//TODO Create a list of IDs for caller to pass in nameary

void CAN_TX(uint32_t ID, uint8_t * valueary, uint8_t * nameary)
{
	//initialization for message frames
	if(canflgtx == 1)
	{
		canflgtx = 0;

		//Create transmit status
		HAL_StatusTypeDef TX_Status;  //Record transmit status

		//Create transmit message structure
		CanTxMsgTypeDef TxMsg;
		TxMsg.IDE = CAN_ID_STD;  //Standard CAN frame, NOT EXTENDED
		TxMsg.RTR = CAN_RTR_DATA;
		TxMsg.DLC = 2;

		//Set pointers
		hcan1.pTxMsg = &TxMsg;

		//Create timeout value
		uint32_t timeout = 500;
	}

	//Setup sender ID
	TxMsg.StdId = ID;

	//Transmit message
	for(int i = 0; i < 8 && (nameary[i+1] != NULL) && (valueary[i+1 != NULL]); i++)
	{
		TxMsg.Data[0] = nameary[i];
		TxMsg.Data[1] = valueary[i];
		TX_Status = HAL_CAN_Transmit(&hcan1, timeout);

		//Set sent element to NULL
		nameary[i] = NULL;
		valueary[i] = NULL;
	}
}


/***************************************************************************
*
*     Function Information
*
*     Name of Function:
*
*     Programmer's Name:
*
*     Function Return Type:
*
*     Parameters (list data type, name, and comment one per line):
*		1.
*
*     Global Dependents:
*		1.
*
*     Function Description:
*
***************************************************************************/
CanRxMsgTypeDef CAN_RX(void)
{
	//initialization for message frames
	if(canflgrx == 1)
	{
		canflgrx = 0;

		//Create receive status
		HAL_StatusTypeDef RX_Status;  //Record transmit status

		//Create receive message structure
		CanRxMsgTypeDef RxMsg;

		//Set pointers
		hcan1.pRxMsg = &RxMsg;

		//Create timeout value
		uint32_t timeout = 500;
	}

	//Receive message frame
	//TODO Test with CAN_FIFO0 and CAN_FIFO1 and see what it does
	RX_Status = HAL_CAN_Receive(&hcan1, CAN_FIFO0, timeout);

	return RxMsg;
}


/***************************************************************************
*
*     Function Information
*
*     Name of Function:
*
*     Programmer's Name:
*
*     Function Return Type:
*
*     Parameters (list data type, name, and comment one per line):
*		1.
*
*     Global Dependents:
*		1.
*
*     Function Description:
*
***************************************************************************/
void _read_msg(CanRxMsgTypeDef msg, uint8_t * name, uint8_t * value)
{
	* name = msg.data[0];
	* value = msg.data[1];
}
