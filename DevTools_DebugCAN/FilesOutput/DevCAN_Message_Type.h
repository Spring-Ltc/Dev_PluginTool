/* ==================DevCAN_Message_Type.h File Start=========================== */

#ifndef __DevCAN_Message_Type_H
#define __DevCAN_Message_Type_H

typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short int sint16;
typedef signed long sint32;
typedef signed long long sint64;

typedef float float32;
typedef double float64;

typedef uint8 boolean;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValTMotor :16;
        uint64 VoltageTMotor :16;		/* Unit is:mV */ 
        uint64 PhyValTMotor :32;		/* Unit is:ohm */ 
    }S;
}MessageType_MCU_DevPC_0x050;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValTPcb :16;
        uint64 VoltageTPcb :16;		/* Unit is:mV */ 
        uint64 PhyValTPcb :32;		/* Unit is:ohm */ 
    }S;
}MessageType_MCU_DevPC_0x051;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValTEth :16;
        uint64 VoltageTEth :16;		/* Unit is:mV */ 
        uint64 PhyValTEth :32;		/* Unit is:ohm */ 
    }S;
}MessageType_MCU_DevPC_0x052;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentU1 :16;
        uint64 VoltageCurrentU1 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentU1 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x053;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentV1 :16;
        uint64 VoltageCurrentV1 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentV1 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x054;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentW1 :16;
        uint64 VoltageCurrentW1 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentW1 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x055;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentU2 :16;
        uint64 VoltageCurrentU2 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentU2 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x056;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentV2 :16;
        uint64 VoltageCurrentV2 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentV2 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x057;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCurrentW2 :16;
        uint64 VoltageCurrentW2 :16;		/* Unit is:mV */ 
        uint64 PhyValCurrentW2 :32;		/* Unit is:A */ 
    }S;
}MessageType_MCU_DevPC_0x058;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValBusLine :16;
        uint64 VoltageBusLine :16;		/* Unit is:mV */ 
        uint64 PhyValBusLine :32;		/* Unit is:V */ 
    }S;
}MessageType_MCU_DevPC_0x059;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValIref2V5 :16;
        uint64 VoltageIref2V5 :16;		/* Unit is:mV */ 
        uint64 PhyValIref2V5 :32;		/* Unit is:V */ 
    }S;
}MessageType_MCU_DevPC_0x05A;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValGate15V :16;
        uint64 VoltageGate15V :16;		/* Unit is:mV */ 
        uint64 PhyValGate15V :32;		/* Unit is:V */ 
    }S;
}MessageType_MCU_DevPC_0x05B;

typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcVal15V :16;
        uint64 Voltage15V :16;		/* Unit is:mV */ 
        uint64 PhyVal15V :32;		/* Unit is:V */ 
    }S;
}MessageType_MCU_DevPC_0x05C;

#endif
/* ==================DevCAN_Message_Type.h File End=========================== */
