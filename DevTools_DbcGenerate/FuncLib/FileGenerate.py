



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


######################################################################


DbcFragment_Start = """VERSION ""


NS_ : 
	NS_DESC_
	CM_
	BA_DEF_
	BA_
	VAL_
	CAT_DEF_
	CAT_
	FILTER
	BA_DEF_DEF_
	EV_DATA_
	ENVVAR_DATA_
	SGTYPE_
	SGTYPE_VAL_
	BA_DEF_SGTYPE_
	BA_SGTYPE_
	SIG_TYPE_REF_
	VAL_TABLE_
	SIG_GROUP_
	SIG_VALTYPE_
	SIGTYPE_VALTYPE_
	BO_TX_BU_
	BA_DEF_REL_
	BA_REL_
	BA_DEF_DEF_REL_
	BU_SG_REL_
	BU_EV_REL_
	BU_BO_REL_
	SG_MUL_VAL_

BS_:"""


DbcFragment_2 = """BA_DEF_ SG_  "GenSigStartValue" HEX 0 0;
BA_DEF_ BO_  "GenMsgCycleTime" INT 0 65535;
BA_DEF_  "BusType" STRING ;
BA_DEF_DEF_  "GenSigStartValue" 0;
BA_DEF_DEF_  "GenMsgCycleTime" 0;
BA_DEF_DEF_  "BusType" "CAN";"""



def GenerateContent_NodeInfo_By_MessageDictList(MessageDictList):
    Content = "BU_: "
    NetworkNodes = set()
    for Message in MessageDictList:
        NetworkNodes.add(Message["MessageTxNode"])
        SignalList = Message["SignalInfoList"]
        for Signal in SignalList:
            NetworkNodes.add(Signal["RxNode"])
    # print(NetworkNodes)
    # input("Debug hold on")
    for Node in NetworkNodes:
        Content += Node + " "
    return Content


def GenerateContent_SignalInfo_By_SignalDict(SignalDict):
    Content = " SG_ "
    Content += SignalDict["SignalName"] + " : "
    Content += SignalDict["StartBit"] + r'|' + SignalDict["Length"] + "@1+ "
    Content += r'(' + SignalDict["Factor"] + r',' + SignalDict["Offset"] + r') ['
    Content += SignalDict["Minmum"] + "|" + SignalDict["Maxmum"] + r'] "'
    Content += SignalDict["Unit"] + r'" ' + SignalDict["RxNode"]
    return Content



def GenerateContent_MessageSignalsInfo_By_MessageDict(MessageDict):
    import PublicLib
    Content = "BO_ "
    MessageID_Dec = PublicLib.hex_to_decimal_str(MessageDict["MessageId"])
    Content += MessageID_Dec + " " + MessageDict["MessageName"] + ": "
    Content += MessageDict["MessageLength"] + " " + MessageDict["MessageTxNode"] + "\n"

    SignalList = MessageDict["SignalInfoList"]
    for Signal in SignalList:
        Content += GenerateContent_SignalInfo_By_SignalDict(Signal) + "\n"
    Content += "\n"
    return Content


def GenerateContent_CycleTimeInfo_By_MessageDictList(MessageDictList):
    import PublicLib
    # Content = "BA_ "GenMsgCycleTime" BO_ 129 50;"
    FixedPre = r'BA_ "GenMsgCycleTime" BO_ '
    Content = ""
    for Message in MessageDictList:
        MessageID_Dec = PublicLib.hex_to_decimal_str(Message["MessageId"])
        Content += FixedPre + MessageID_Dec + " " + Message["MessageCycleTime"] + ";\n"
    return Content


def GenerateContent_SignalInitValInfo_By_By_MessageDictList(MessageDictList):
    import PublicLib
    # BA_ "GenSigStartValue" SG_ 97 CmdPwmDeadTime 100;
    FixedPre = r'BA_ "GenSigStartValue" SG_ '
    Content = ""
    for Message in MessageDictList:
        MessageID_Dec = PublicLib.hex_to_decimal_str(Message["MessageId"])
        SignalList = Message["SignalInfoList"]
        for Signal in SignalList:
            SignalInitVal = Signal["InitVal"]
            if SignalInitVal != "":
                Content += FixedPre + MessageID_Dec + " " + Signal["SignalName"] + " " + SignalInitVal + ";\n"

    return Content





def GenerateFile_DbcFile_By_MessageDictList(MessageDictList, FilePath):

    Content = DbcFragment_Start + "\n\n\n"
    Content += GenerateContent_NodeInfo_By_MessageDictList(MessageDictList) + "\n\n\n"
    for Message in MessageDictList:
        Content += GenerateContent_MessageSignalsInfo_By_MessageDict(Message)
    Content += "\n\n\n" + DbcFragment_2 + "\n\n"

    Content += GenerateContent_CycleTimeInfo_By_MessageDictList(MessageDictList) + "\n\n\n"

    Content += GenerateContent_SignalInitValInfo_By_By_MessageDictList(MessageDictList) + "\n\n\n"

    with open(FilePath + "DevCAN_User.dbc", 'w') as file:
        file.write(Content)


