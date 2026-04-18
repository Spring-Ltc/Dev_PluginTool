/* ==================DevCAN_Message.h File Start=========================== */

#ifndef __DevCAN_Message_H
#define __DevCAN_Message_H

#include "DevCAN_Message_Type.h"



extern MessageType_DevPC_MCU_0x061 Message_DevPC_MCU_0x061;
extern float32	s_CmdPwmDeadTime;
extern float32	s_CmdPwmDutyU;
extern float32	s_CmdPwmDutyV;
extern float32	s_CmdPwmDutyW;
extern uint16	s_CmdPwmFreq;
extern boolean	s_CmdPwmOutEn;

extern MessageType_MCU_DevPC_0x081 Message_MCU_DevPC_0x081;
extern uint16	s_AdcValTPcbU;
extern uint16	s_AdcValTPcbV;
extern uint16	s_AdcValTPcbW;
extern uint16	s_AdcValTPmic;
extern uint16	s_AdcValTEtherCat;

extern MessageType_MCU_DevPC_0x082 Message_MCU_DevPC_0x082;
extern uint16	s_AdcValVersionBrd;
extern uint16	s_AdcValIref2V5;
extern uint16	s_AdcValGate15V;
extern uint16	s_AdcValV24V;
extern uint16	s_AdcValV15V;

extern MessageType_MCU_DevPC_0x083 Message_MCU_DevPC_0x083;
extern uint16	s_AdcValCompOCU;
extern uint16	s_AdcValCompOCV;
extern uint16	s_AdcValCompOCW;
extern uint16	s_AdcValCompOVBUS;
extern uint16	s_AdcValCompUVBUS;
extern boolean	s_PhyValCompOCU;
extern boolean	s_PhyValCompOCV;
extern boolean	s_PhyValCompOCW;

extern MessageType_MCU_DevPC_0x084 Message_MCU_DevPC_0x084;
extern uint16	s_AdcValCurrentU;
extern uint16	s_AdcValCurrentV;
extern uint16	s_AdcValCurrentW;
extern uint16	s_AdcValVoltageBUS;
extern uint16	s_AdcValTMotor;

extern MessageType_MCU_DevPC_0x085 Message_MCU_DevPC_0x085;
extern float32	s_PhyValTPcbU;
extern float32	s_PhyValTPcbV;
extern float32	s_PhyValTPcbW;
extern boolean	s_PhyValCompOVBUS;

extern MessageType_MCU_DevPC_0x086 Message_MCU_DevPC_0x086;
extern float32	s_PhyValTMotor;
extern float32	s_PhyValTPmic;
extern float32	s_PhyValTEtherCat;
extern boolean	s_PhyValCompUVBUS;

extern MessageType_MCU_DevPC_0x087 Message_MCU_DevPC_0x087;
extern float32	s_PhyValVoltageBUS;
extern float32	s_PhyValCurrentU;
extern float32	s_PhyValCurrentV;
extern float32	s_PhyValCurrentW;

extern MessageType_MCU_DevPC_0x088 Message_MCU_DevPC_0x088;
extern float32	s_PhyValIref2V5;
extern float32	s_PhyValVoltageVerBrd;
extern float32	s_PhyValGate15V;
extern float32	s_PhyValV15V;
extern float32	s_PhyValV24V;

extern 



#endif
/* ==================DevCAN_Message.h File End=========================== */
