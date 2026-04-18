
import PublicLib


"""
typedef union{
    uint8 Buffer[8];
    struct{
        uint64 AdcValCompOCU:12;
        uint64 AdcValCompOCV:12;
        uint64 AdcValCompOCW:12;
        uint64 AdcValCompOVBUS:12;
        uint64 AdcValCompUVBUS:12;
        uint64 UnUsed0:1;
        uint64 PhyValCompOCU:1;
        uint64 PhyValCompOCV:1;
        uint64 PhyValCompOCW:1;
    }S;
}MessageType_MCU_DevPC_0x083;
"""


def GenerateContent_SignalBitField_By_SignalList(SignalList):
    Content = ""
    SignalListSorted = sorted(SignalList, key=lambda x: int(x["StartBit"]))
    ReservedStart = 0
    ReservedFildNum = 0
    for Signal in SignalListSorted:
        StartBit = int(Signal["StartBit"])
        Length = int(Signal["Length"])
        SignalName = Signal["SignalName"]

        if StartBit > ReservedStart:
            ReservedFieldLength = StartBit - ReservedStart
            Content += "        uint64 UnUsed" + str(ReservedFildNum) + "\t:" + str(ReservedFieldLength) + ";\n"
            ReservedFildNum += 1
        if Signal["Unit"] != "":
            Comment = "\t\t/* Unit is:" + Signal["Unit"] + " */ \n"
        else:
            Comment = "\n"    
        Content += "        uint64 " + SignalName + ":" + f"{Length}" + ";" + Comment
        ReservedStart = StartBit + Length
    if ReservedStart < 64:
        ReservedFieldLength = 64 - ReservedStart
        Content += "        uint64 UnUsed" + str(ReservedFildNum) + "\t:" + str(ReservedFieldLength) + ";\n"
    return Content


def GenerateContent_MessageTypeDef_By_MessigeDict(MessageDict):
    Content = "typedef union{\n"
    Content += "    uint8 Buffer[8];\n"
    Content += "    struct{\n"
    Content += GenerateContent_SignalBitField_By_SignalList(MessageDict["SignalInfoList"])
    Content += "    }S;\n"
    Content += "}MessageType_" + MessageDict["MessageName"] + ";\n"
    return Content
    

def GenerateFile_MessageTypeDef_By_MessageDictList(MessageDictList, FilePath):
    Content = r"/* ==================DevCAN_Message_Type.h File Start=========================== */"
    Content += "\n\n#ifndef __DevCAN_Message_Type_H\n"
    Content += "#define __DevCAN_Message_Type_H\n\n"
    Content += "typedef unsigned char uint8;\n"
    Content += "typedef unsigned short int uint16;\n"
    Content += "typedef unsigned long uint32;\n"
    Content += "typedef unsigned long long uint64;\n\n"
    Content += "typedef signed char sint8;\n"
    Content += "typedef signed short int sint16;\n"
    Content += "typedef signed long sint32;\n"
    Content += "typedef signed long long sint64;\n\n"
    Content += "typedef float float32;\n"
    Content += "typedef double float64;\n\n"
    Content += "typedef uint8 boolean;\n\n"

    for MessageDict in MessageDictList:
        Content += GenerateContent_MessageTypeDef_By_MessigeDict(MessageDict) + "\n"





    Content += "#endif\n"
    Content += r"/* ==================DevCAN_Message_Type.h File End=========================== */"
    Content += "\n"
    with open(FilePath + "DevCAN_Message_Type.h", 'w') as file:
        file.write(Content)







def Variable_DataType_Calculate(SignalDict):
    DataType = "void"
    Dec_Length = PublicLib.str_to_number(SignalDict["Length"])
    Dec_Factor = PublicLib.str_to_number(SignalDict["Factor"])
    Dec_Offset = PublicLib.str_to_number(SignalDict["Offset"])

    if Dec_Factor%1 != 0:
        DataType = "float32"
    else:
        if Dec_Offset%1 != 0:
            DataType = "float32"
        else:
            if Dec_Offset<0:    #�з���
                if Dec_Length >32:
                    DataType = "sint64"
                elif Dec_Length >16:
                    DataType = "sint32"
                elif Dec_Length >8:
                    DataType = "sint16"
                elif Dec_Length >1:
                    DataType = "sint8"
            else:   #�޷���
                if Dec_Length >32:
                    DataType = "uint64"
                elif Dec_Length >16:
                    DataType = "uint32"
                elif Dec_Length >8:
                    DataType = "uint16"
                elif Dec_Length >1:
                    DataType = "uint8"
                elif Dec_Length ==1:
                    DataType = "boolean"
    return DataType








def GenerateContent_SignalVariable_By_SignalList(SignalList,Prefix):
    Content = ""
    for Signal in SignalList:
        # SignalName = Signal["SignalName"]
        Content += Prefix + Variable_DataType_Calculate(Signal) + "\ts_" + Signal["SignalName"].strip() + ";\n"

    return Content





def GenerateContent_PhysicalToSignal_By_SignalDict(Signal):
    Content = Signal["SignalName"] + " = "
    DataType = Variable_DataType_Calculate(Signal)
    PhyVal = "s_" + Signal["SignalName"].strip()

    if DataType == "boolean":   #布尔类型，直接赋值
        Content += PhyVal
    else:
        if Signal["Offset"] != "0":
            Content += "(" + PhyVal + " - (" + Signal["Offset"] + "))"
        else:
            Content += PhyVal
        if Signal["Factor"] != "1":
            Content += "/(" + Signal["Factor"] + ")"
    Content += ";\n"
    return Content





def GenerateContent_TxPduInfo_By_MessageDict(TxIndex,MessageDict):
    Content = "\t\tcase " + str(TxIndex) + ":\n"
    Content += "\t\t{\n"
    #这里插入 Tx信号Physical值到signal值的计算转换
    SingalList = MessageDict["SignalInfoList"]
    for Signal in SingalList:
        Content += "\t\t\t" + "Message_" + MessageDict["MessageName"] + ".S." + GenerateContent_PhysicalToSignal_By_SignalDict(Signal)
    Content += "\t\t\tTxPdu->id = " + MessageDict["MessageId"] + "u;\n"
    Content += "\t\t\tTxPdu->sdu = Message_" + MessageDict["MessageName"] + ".Buffer;\n"
    Content += "\t\t}break;\n"
    return Content














def GenerateFile_MessageVariable_By_MessageDictList(MessageDictList, FilePath):
    Content = r"/* ==================DevCAN_Message.h File Start=========================== */"
    Content += "\n\n#ifndef __DevCAN_Message_H\n"
    Content += "#define __DevCAN_Message_H\n\n"
    Content += "#include \"DevCAN_Message_Type.h\"\n\n\n\n"

    for MessageDict in MessageDictList:
        Content += "extern MessageType_" + MessageDict["MessageName"] + " Message_" + MessageDict["MessageName"] + ";\n"
        Content += GenerateContent_SignalVariable_By_SignalList(MessageDict["SignalInfoList"],"extern ")
        Content += "\n"


    Content += "extern "

    Content += "\n\n\n\n#endif\n"
    Content += r"/* ==================DevCAN_Message.h File End=========================== */"
    Content += "\n"
    with open(FilePath + "DevCAN_Message.h", 'w') as file:
        file.write(Content)

    ################################################################
    Content = r"/* ==================DevCAN_Message.c File Start=========================== */"
    Content += "\n\n#include \"DevCAN_Message.h\"\n\n\n\n"

    for MessageDict in MessageDictList:
        Content += "MessageType_" + MessageDict["MessageName"] + " Message_" + MessageDict["MessageName"] + " = {\n"
        SingalList = MessageDict["SignalInfoList"]
        for Signal in SingalList:
            SignalName = Signal["SignalName"].strip()
            InitVal = Signal["InitVal"]
            Content += "    .S." + SignalName + " = " + InitVal + ",\n"
        Content += "};\n"
        Content += GenerateContent_SignalVariable_By_SignalList(MessageDict["SignalInfoList"],"")
        Content += "\n\n"

    Content += "\n\n\n\n\n"
    Content += r"/* ==================DevCAN_Message.c File End=========================== */"
    Content += "\n"

    with open(FilePath + "DevCAN_Message.c", 'w') as file:
        file.write(Content)








def GenerateFile_SWC_By_MessageDictList(MessageDictList, FilePath):
    Content = r"/* ==================DevCAN_SWC.h File Start=========================== */"
    Content += "\n\n#ifndef __DevCAN_SWC_H\n"
    Content += "#define __DevCAN_SWC_H\n\n"
    Content += "#include \"DevCAN_Message.h\"\n\n\n\n"

    # for MessageDict in MessageDictList:
    #     Content += "extern MessageType_" + MessageDict["MessageName"] + " Message_" + MessageDict["MessageName"] + ";\n"
    #     Content += GenerateContent_SignalVariable_By_SignalList(MessageDict["SignalInfoList"],"extern ")
    #     Content += "\n"
    Content += "typedef uint16 DevCan_MailboxType; /* USER_INTEGRATION_CONFIG_CONTENT */ \n\n"

    Content += "extern void DevCan_SWC_INPUT(void);\n"
    Content += "extern void DevCan_SWC_OUTPUT(void);\n"

    Content += "extern void DevCan_MainFunction_Tx(void);\n"



    Content += "\n\n\n\n#endif\n"
    Content += r"/* ==================DevCAN_SWC.h File End=========================== */"
    Content += "\n"
    with open(FilePath + "DevCAN_SWC.h", 'w') as file:
        file.write(Content)

    ################################################################################################################################################################
    Content = r"/* ==================DevCAN_SWC.c File Start=========================== */"
    Content += "\n\n#include \"DevCAN_SWC.h\"\n\n\n\n"

    # for MessageDict in MessageDictList:
    #     Content += "MessageType_" + MessageDict["MessageName"] + " Message_" + MessageDict["MessageName"] + " = {\n"
    #     SingalList = MessageDict["SignalInfoList"]
    #     for Signal in SingalList:
    #         SignalName = Signal["SignalName"].strip()
    #         InitVal = Signal["InitVal"]
    #         Content += "    .S." + SignalName + " = " + InitVal + ",\n"
    #     Content += "};\n"
    #     Content += GenerateContent_SignalVariable_By_SignalList(MessageDict["SignalInfoList"],"")
    #     Content += "\n\n"

    Content += "#define DEVCAN_MAILBOX_TX_NUM   (3u) /* USER_INTEGRATION_CONFIG_CONTENT */ \n"
    Content += "const DevCan_MailboxType DevCanMailboxTable[DEVCAN_MAILBOX_TX_NUM] = {\n"
    Content += "    0u, /* USER_INTEGRATION_CONFIG_CONTENT */ \n"
    Content += "    1u, /* USER_INTEGRATION_CONFIG_CONTENT */ \n"
    Content += "    2u, /* USER_INTEGRATION_CONFIG_CONTENT */ \n"
    Content += "};\n\n\n"




    # Content += """void DevCan_SWC_INPUT(void)
    # {
    
    
    # }

    
    # void DevCan_SWC_OUTPUT(void)
    # {
    
    
    # }\n\n
    # """

    Content += "static void DevCan_GetTxPduInfo(uint16 Index,Can_PduType *TxPdu)\n"
    Content += "{\n"
    Content += "\tswitch(Index)\n"
    Content += "\t{\n"
    TxMessageCnt = 0
    for MessageDict in MessageDictList:
        if MessageDict["MessageTxNode"] == "MCU":
            Content += GenerateContent_TxPduInfo_By_MessageDict(TxMessageCnt,MessageDict)
            TxMessageCnt += 1
    Content += "\t}\n"
    Content += "}\n\n\n"


    Content += "#define DEVCAN_MESSAGE_TX_NUM\t(" + str(TxMessageCnt) + "u)\n"
    Content += "void DevCan_MainFunction_Tx(void)\n"
    Content += "{\n"
    Content += "\tstatic uint16 MessageIndex = 0u;\n"
    Content += "\tuint8 MailboxIndex = 0u;\n"
    Content += "\tCan_PduType DevTxPdu = {.length=8u};\n"
    Content += "\tfor(MailboxIndex = 0u; MailboxIndex < DEVCAN_MAILBOX_TX_NUM; MailboxIndex++)\n"
    Content += "\t{\n"
    Content += "\t\tDevCan_GetTxPduInfo(MessageIndex,&DevTxPdu);\n"
    Content += "\t\tCan_Write(MailboxIndex, &DevTxPdu);\n"
    Content += "\t\tMessageIndex++;\n"
    Content += "\t\tif(MessageIndex >= DEVCAN_MESSAGE_TX_NUM)\n"
    Content += "\t\t\tMessageIndex = 0u;\n"
    Content += "\t}\n"
    Content += "}\n\n\n"



    Content += "\n\n\n\n\n"
    Content += r"/* ==================DevCAN_SWC.c File End=========================== */"
    Content += "\n"

    with open(FilePath + "DevCAN_SWC.c", 'w') as file:
        file.write(Content)




