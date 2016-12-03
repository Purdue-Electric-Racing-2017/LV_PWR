/*
 * LV_CAN.h
 *
 *  Created on: Nov 19, 2016
 *      Author: Josh Shao
 */

#ifndef LV_CAN_H_
#define LV_CAN_H_

#include "stm32f4xx_hal_can.h";

CanRxMsgTypeDef CAN_RX(void);
void CAN_TX(uint32_t ID, uint8_t * valueary, uint8_t * nameary);
void Read_Msg(CanRxMsgTypeDef msg, uint8_t * name, uint8_t * value);


#endif /* LV_CAN_H_ */
