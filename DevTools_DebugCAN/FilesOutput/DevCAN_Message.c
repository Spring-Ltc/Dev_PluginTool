/* ==================DevCAN_Message.c File Start=========================== */

#include "DevCAN_Message.h"



MessageType_DevPC_MCU_0x061 Message_DevPC_MCU_0x061 = {
    .S.CmdPwmDeadTime  = 100,
    .S.CmdPwmDutyU  = 500,
    .S.CmdPwmDutyV  = 500,
    .S.CmdPwmDutyW  = 500,
    .S.CmdPwmFreq  = 10000,
    .S.CmdPwmOutEn  = 0,
};

MessageType_MCU_DevPC_0x081 Message_MCU_DevPC_0x081 = {
    .S.AdcValTPcbU  = 0,
    .S.AdcValTPcbV  = 0,
    .S.AdcValTPcbW  = 0,
    .S.AdcValTPmic  = 0,
    .S.AdcValTEtherCat  = 0,
};

MessageType_MCU_DevPC_0x082 Message_MCU_DevPC_0x082 = {
    .S.AdcValVersionBrd  = 0,
    .S.AdcValIref2V5  = 0,
    .S.AdcValGate15V  = 0,
    .S.AdcValV24V  = 0,
    .S.AdcValV15V  = 0,
};

MessageType_MCU_DevPC_0x083 Message_MCU_DevPC_0x083 = {
    .S.AdcValCompOCU  = 0,
    .S.AdcValCompOCV  = 0,
    .S.AdcValCompOCW  = 0,
    .S.AdcValCompOVBUS  = 0,
    .S.AdcValCompUVBUS  = 0,
    .S.PhyValCompOCU  = 0,
    .S.PhyValCompOCV  = 0,
    .S.PhyValCompOCW  = 0,
};

MessageType_MCU_DevPC_0x084 Message_MCU_DevPC_0x084 = {
    .S.AdcValCurrentU  = 0,
    .S.AdcValCurrentV  = 0,
    .S.AdcValCurrentW  = 0,
    .S.AdcValVoltageBUS  = 0,
    .S.AdcValTMotor  = 0,
};

MessageType_MCU_DevPC_0x085 Message_MCU_DevPC_0x085 = {
    .S.PhyValTPcbU  = 0,
    .S.PhyValTPcbV  = 0,
    .S.PhyValTPcbW  = 0,
    .S.PhyValCompOVBUS  = 0,
};

MessageType_MCU_DevPC_0x086 Message_MCU_DevPC_0x086 = {
    .S.PhyValTMotor  = 0,
    .S.PhyValTPmic  = 0,
    .S.PhyValTEtherCat  = 0,
    .S.PhyValCompUVBUS  = 0,
};

MessageType_MCU_DevPC_0x087 Message_MCU_DevPC_0x087 = {
    .S.PhyValVoltageBUS  = 0,
    .S.PhyValCurrentU  = 0,
    .S.PhyValCurrentV  = 0,
    .S.PhyValCurrentW  = 0,
};

MessageType_MCU_DevPC_0x088 Message_MCU_DevPC_0x088 = {
    .S.PhyValIref2V5  = 0,
    .S.PhyValVoltageVerBrd  = 0,
    .S.PhyValGate15V  = 0,
    .S.PhyValV15V  = 0,
    .S.PhyValV24V  = 0,
};






/* ==================DevCAN_Message.c File End=========================== */
