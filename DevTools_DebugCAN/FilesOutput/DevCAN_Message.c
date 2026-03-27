/* ==================DevCAN_Message.c File Start=========================== */

#include "DevCAN_Message.h"



MessageType_DevPC_MCU_0x061 Message_DevPC_MCU_0x061 = {
    .S.CmdPwmDeadTime = 100,
    .S.CmdPwmDutyU = 500,
    .S.CmdPwmDutyV = 500,
    .S.CmdPwmDutyW = 500,
    .S.CmdPwmFreq = 10000,
    .S.CmdPwmOutEn = 0,
};
float32	s_CmdPwmDeadTime;
float32	s_CmdPwmDutyU;
float32	s_CmdPwmDutyV;
float32	s_CmdPwmDutyW;
uint16	s_CmdPwmFreq;
boolean	s_CmdPwmOutEn;


MessageType_MCU_DevPC_0x081 Message_MCU_DevPC_0x081 = {
    .S.AdcValTPcbU = 0,
    .S.AdcValTPcbV = 0,
    .S.AdcValTPcbW = 0,
    .S.AdcValTPmic = 0,
    .S.AdcValTEtherCat = 0,
};
uint16	s_AdcValTPcbU;
uint16	s_AdcValTPcbV;
uint16	s_AdcValTPcbW;
uint16	s_AdcValTPmic;
uint16	s_AdcValTEtherCat;


MessageType_MCU_DevPC_0x082 Message_MCU_DevPC_0x082 = {
    .S.AdcValVersionBrd = 0,
    .S.AdcValIref2V5 = 0,
    .S.AdcValGate15V = 0,
    .S.AdcValV24V = 0,
    .S.AdcValV15V = 0,
};
uint16	s_AdcValVersionBrd;
uint16	s_AdcValIref2V5;
uint16	s_AdcValGate15V;
uint16	s_AdcValV24V;
uint16	s_AdcValV15V;


MessageType_MCU_DevPC_0x083 Message_MCU_DevPC_0x083 = {
    .S.AdcValCompOCU = 0,
    .S.AdcValCompOCV = 0,
    .S.AdcValCompOCW = 0,
    .S.AdcValCompOVBUS = 0,
    .S.AdcValCompUVBUS = 0,
    .S.PhyValCompOCU = 0,
    .S.PhyValCompOCV = 0,
    .S.PhyValCompOCW = 0,
};
uint16	s_AdcValCompOCU;
uint16	s_AdcValCompOCV;
uint16	s_AdcValCompOCW;
uint16	s_AdcValCompOVBUS;
uint16	s_AdcValCompUVBUS;
boolean	s_PhyValCompOCU;
boolean	s_PhyValCompOCV;
boolean	s_PhyValCompOCW;


MessageType_MCU_DevPC_0x084 Message_MCU_DevPC_0x084 = {
    .S.AdcValCurrentU = 0,
    .S.AdcValCurrentV = 0,
    .S.AdcValCurrentW = 0,
    .S.AdcValVoltageBUS = 0,
    .S.AdcValTMotor = 0,
};
uint16	s_AdcValCurrentU;
uint16	s_AdcValCurrentV;
uint16	s_AdcValCurrentW;
uint16	s_AdcValVoltageBUS;
uint16	s_AdcValTMotor;


MessageType_MCU_DevPC_0x085 Message_MCU_DevPC_0x085 = {
    .S.PhyValTPcbU = 0,
    .S.PhyValTPcbV = 0,
    .S.PhyValTPcbW = 0,
    .S.PhyValCompOVBUS = 0,
};
float32	s_PhyValTPcbU;
float32	s_PhyValTPcbV;
float32	s_PhyValTPcbW;
boolean	s_PhyValCompOVBUS;


MessageType_MCU_DevPC_0x086 Message_MCU_DevPC_0x086 = {
    .S.PhyValTMotor = 0,
    .S.PhyValTPmic = 0,
    .S.PhyValTEtherCat = 0,
    .S.PhyValCompUVBUS = 0,
};
float32	s_PhyValTMotor;
float32	s_PhyValTPmic;
float32	s_PhyValTEtherCat;
boolean	s_PhyValCompUVBUS;


MessageType_MCU_DevPC_0x087 Message_MCU_DevPC_0x087 = {
    .S.PhyValVoltageBUS = 0,
    .S.PhyValCurrentU = 0,
    .S.PhyValCurrentV = 0,
    .S.PhyValCurrentW = 0,
};
float32	s_PhyValVoltageBUS;
float32	s_PhyValCurrentU;
float32	s_PhyValCurrentV;
float32	s_PhyValCurrentW;


MessageType_MCU_DevPC_0x088 Message_MCU_DevPC_0x088 = {
    .S.PhyValIref2V5 = 0,
    .S.PhyValVoltageVerBrd = 0,
    .S.PhyValGate15V = 0,
    .S.PhyValV15V = 0,
    .S.PhyValV24V = 0,
};
float32	s_PhyValIref2V5;
float32	s_PhyValVoltageVerBrd;
float32	s_PhyValGate15V;
float32	s_PhyValV15V;
float32	s_PhyValV24V;







/* ==================DevCAN_Message.c File End=========================== */
