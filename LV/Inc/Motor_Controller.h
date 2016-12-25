/*
 * Motor_Controller.h
 *
 *  Created on: Dec 21, 2016
 *      Author: Josh Shao
 */

#ifndef MOTOR_CONTROLLER_H_
#define MOTOR_CONTROLLER_H_

#define CAN_DATA_LEN1 					1
#define CAN_DATA_LEN2 					2
#define CAN_DATA_LEN3 					3
#define CAN_DATA_LEN4 					4
#define CAN_DATA_LEN5 					5

#define INT_UINT8_MASK					0xF		// Mask for data	0000000000001111
#define INT_UINT8_SHIFT4				4		// Bytes to shift
#define INT_UINT8_SHIFT8				8		// Bytes to shift
#define INT_UINT8_SHIFT12				12		// Bytes to shift

#define CAN_STATION_ADDRESS				0x201	//Station address for receiving
#define REGID_TORQUE					0x90	//REGID for torque reference
#define REGID_INHIBIT					0x51	//REGID for inhibit controller
#define REGID_STATION_ADDRESS_CHANGE	0x68	//REGID for station address change

CanTxMsgTypeDef torque_ref (int data);
CanTxMsgTypeDef inhibit (int data);
CanTxMsgTypeDef station_address (int data);

#endif /* MOTOR_CONTROLLER_H_ */
