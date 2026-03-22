



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
            Content += "        uint64 UnUsed" + str(ReservedFildNum) + ":" + str(ReservedFieldLength) + ";\n"
            ReservedFildNum += 1
        if Signal["Unit"] != "":
            Comment = "\t\t/* Unit is:" + Signal["Unit"] + " */ \n"
        else:
            Comment = "\n"    
        Content += "        uint64 " + SignalName + ":" + f"{Length}" + ";" + Comment
        ReservedStart = StartBit + Length
    if ReservedStart < 64:
        ReservedFieldLength = 64 - ReservedStart
        Content += "        uint64 UnUsed" + str(ReservedFildNum) + ":" + str(ReservedFieldLength) + ";\n"
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
    Content += "typedef unsigned long long uint64;\n\n"

    for MessageDict in MessageDictList:
        Content += GenerateContent_MessageTypeDef_By_MessigeDict(MessageDict) + "\n"

    Content += "#endif\n"
    Content += r"/* ==================DevCAN_Message_Type.h File End=========================== */"
    Content += "\n"
    with open(FilePath + "DevCAN_Message_Type.h", 'w') as file:
        file.write(Content)




def GenerateFile_MessageVariable_By_MessageDictList(MessageDictList, FilePath):
    Content = r"/* ==================DevCAN_Message.h File Start=========================== */"
    Content += "\n\n#ifndef __DevCAN_Message_H\n"
    Content += "#define __DevCAN_Message_H\n\n"
    Content += "#include \"DevCAN_Message_Type.h\"\n\n\n\n"

    for MessageDict in MessageDictList:
        Content += "extern MessageType_" + MessageDict["MessageName"] + " Message_" + MessageDict["MessageName"] + ";\n"

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
            SignalName = Signal["SignalName"]
            InitVal = Signal["InitVal"]
            Content += "    .S." + SignalName + " = " + InitVal + ",\n"
        Content += "};\n\n"

    Content += "\n\n\n\n\n"
    Content += r"/* ==================DevCAN_Message.c File End=========================== */"
    Content += "\n"

    with open(FilePath + "DevCAN_Message.c", 'w') as file:
        file.write(Content)









