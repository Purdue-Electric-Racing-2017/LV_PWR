/*
 * Motor_Controller.c
 *
 *  Created on: Dec 21, 2016
 *      Author: Josh Shao
 */

#include "Motor_Controller.h"

/***************************************************************************
*
*     Function Information
*
*     Name of Function: torque_ref
*
*     Programmer's Name: Josh Shao
*
*     Function Return Type: CanTxMsgTypeDef
*
*     Parameters (list data type, name, and comment one per line):
*		1. int, data, data to be filled in can frame
*
*     Global Dependents:
*		1.
*
*     Function Description: create frame for motor controller torque reference
*
***************************************************************************/
CanTxMsgTypeDef torque_ref (int data)
{
	CanTxMsgTypeDef Msg;
	uint8_t data0 = REGID_TORQUE;
	uint8_t data1 = INT_UINT8_MASK & data;
	uint8_t data2 = INT_UINT8_MASK & (data >> INT_UINT8_SHIFT4);

	Msg.IDE = CAN_ID_STD;  //Standard CAN frame, NOT EXTENDED
	Msg.RTR = CAN_RTR_DATA;
	Msg.DLC = CAN_DATA_LEN3;

	//Station address for receiving
	Msg.StdId = CAN_STATION_ADDRESS;

	//Fill in data
	Msg.Data[0] = data0;

	//data are in unit8_t
	Msg.Data[1] = data1;
	Msg.Data[2] = data2;

	return Msg;
}

/***************************************************************************
*
*     Function Information
*
*     Name of Function: torque_ref
*
*     Programmer's Name: Josh Shao
*
*     Function Return Type: CanTxMsgTypeDef
*
*     Parameters (list data type, name, and comment one per line):
*		1. int, data, data to be filled in can frame
*
*     Global Dependents:
*		1.
*
*     Function Description: create frame for motor controller inhibit control
*
***************************************************************************/
CanTxMsgTypeDef inhibit (int data)
{
	CanTxMsgTypeDef Msg;
	uint8_t data0 = REGID_INHIBIT;
	uint8_t data1 = INT_UINT8_MASK & data;
	uint8_t data2 = INT_UINT8_MASK & (data >> INT_UINT8_SHIFT4);

	Msg.IDE = CAN_ID_STD;  //Standard CAN frame, NOT EXTENDED
	Msg.RTR = CAN_RTR_DATA;
	Msg.DLC = CAN_DATA_LEN3;

	//Station address for receiving
	Msg.StdId = CAN_STATION_ADDRESS;

	//Fill in data
	Msg.Data[0] = data0;

	//data are in unit8_t
	Msg.Data[1] = data1;
	Msg.Data[2] = data2;

	return Msg;
}

/***************************************************************************
*
*     Function Information
*
*     Name of Function: torque_ref
*
*     Programmer's Name: Josh Shao
*
*     Function Return Type: CanTxMsgTypeDef
*
*     Parameters (list data type, name, and comment one per line):
*		1. int, data, data to be filled in can frame
*
*     Global Dependents:
*		1.
*
*     Function Description: create frame for motor controller station address change
*
***************************************************************************/
CanTxMsgTypeDef station_address (int data)
{
	CanTxMsgTypeDef Msg;
	uint8_t data0 = REGID_STATION_ADDRESS_CHANGE;
	uint8_t data1 = INT_UINT8_MASK & data;
	uint8_t data2 = INT_UINT8_MASK & (data >> INT_UINT8_SHIFT4);

	Msg.IDE = CAN_ID_STD;  //Standard CAN frame, NOT EXTENDED
	Msg.RTR = CAN_RTR_DATA;
	Msg.DLC = CAN_DATA_LEN3;

	//Station address for receiving
	Msg.StdId = CAN_STATION_ADDRESS;

	//Fill in data
	Msg.Data[0] = data0;

	//data are in unit8_t
	Msg.Data[1] = data1;
	Msg.Data[2] = data2;

	return Msg;
}

