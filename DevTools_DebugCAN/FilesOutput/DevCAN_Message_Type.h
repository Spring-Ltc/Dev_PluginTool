/* ==================DevCAN_Message_Type.h File Start=========================== */

#ifndef __DevCAN_Message_Type_H
#define __DevCAN_Message_Type_H

typedef unsigned char uint8;
typedef unsigned long long uint64;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 CmdPwmDeadTime :10;		/* Unit is:us */ 
        uint64 CmdPwmDutyU :10;		/* Unit is:% */ 
        uint64 CmdPwmDutyV :10;		/* Unit is:% */ 
        uint64 CmdPwmDutyW :10;		/* Unit is:% */ 
        uint64 CmdPwmFreq :16;		/* Unit is:Hz */ 
        uint64 CmdPwmOutEn :1;
        uint64 UnUsed0:7;
    }S;
}MessageType_DevPC_MCU_0x061;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValTPcbU :12;
        uint64 AdcValTPcbV :12;
        uint64 AdcValTPcbW :12;
        uint64 AdcValTPmic :12;
        uint64 AdcValTEtherCat :12;
        uint64 UnUsed0:4;
    }S;
}MessageType_MCU_DevPC_0x081;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValVersionBrd :12;
        uint64 AdcValIref2V5 :12;
        uint64 AdcValGate15V :12;
        uint64 AdcValV24V :12;
        uint64 AdcValV15V :12;
        uint64 UnUsed0:4;
    }S;
}MessageType_MCU_DevPC_0x082;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCompOCU :12;
        uint64 AdcValCompOCV :12;
        uint64 AdcValCompOCW :12;
        uint64 AdcValCompOVBUS :12;
        uint64 AdcValCompUVBUS :12;
        uint64 UnUsed0:1;
        uint64 PhyValCompOCU :1;
        uint64 PhyValCompOCV :1;
        uint64 PhyValCompOCW :1;
    }S;
}MessageType_MCU_DevPC_0x083;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentU :12;
        uint64 AdcValCurrentV :12;
        uint64 AdcValCurrentW :12;
        uint64 AdcValVoltageBUS :12;
        uint64 AdcValTMotor :12;
        uint64 UnUsed0:4;
    }S;
}MessageType_MCU_DevPC_0x084;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 PhyValTPcbU :21;		/* Unit is:ohm */ 
        uint64 PhyValTPcbV :21;		/* Unit is:ohm */ 
        uint64 PhyValTPcbW :21;		/* Unit is:ohm */ 
        uint64 PhyValCompOVBUS :1;
    }S;
}MessageType_MCU_DevPC_0x085;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 PhyValTMotor :21;		/* Unit is:ohm */ 
        uint64 PhyValTPmic :21;		/* Unit is:ohm */ 
        uint64 PhyValTEtherCat :21;		/* Unit is:ohm */ 
        uint64 PhyValCompUVBUS :1;
    }S;
}MessageType_MCU_DevPC_0x086;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 PhyValVoltageBUS :16;		/* Unit is:V */ 
        uint64 PhyValCurrentU :16;		/* Unit is:A */ 
        uint64 PhyValCurrentV :16;		/* Unit is:A */ 
        uint64 PhyValCurrentW :16;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x087;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 PhyValIref2V5 :10;		/* Unit is:V */ 
        uint64 PhyValVoltageVerBrd :10;		/* Unit is:V */ 
        uint64 PhyValGate15V :14;		/* Unit is:V */ 
        uint64 PhyValV15V :14;		/* Unit is:V */ 
        uint64 PhyValV24V :14;		/* Unit is:V */ 
        uint64 UnUsed0:2;
    }S;
}MessageType_MCU_DevPC_0x088;

#endif
/* ==================DevCAN_Message_Type.h File End=========================== */
