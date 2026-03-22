# 只提取通信相关的DBC文件 only

import os
import PublicLib




def Get_SignalDict_From_LineStr(line):
    """
    formate eg: SG_ WBS1Battu : 7|16@0+ (0.25,0) [0|16353.8] "V"  VIU
    从信号行字符串中提取信号信息，返回一个字典，包含以下字段：
    - SignalName: 信号名称
    - StartBit: 起始位
    - Length: 信号宽度
    - ValueFormat: 编码格式(0表示 Motorola,1表示 Intel,+表示无符号，-表示有符号)
    - Factor: 比例
    - Offset: 偏移
    - Minmum: 最小值
    - Maxmum: 最大值
    - Unit: 单位
    - RxNode: 接收节点
    """
    import re
    pattern = re.compile(
        r'^\s*SG_\s+(?P<SignalName>[^:]+):\s*'          # 信号名称
        r'(?P<StartBit>\d+)\|(?P<Length>\d+)@(?P<ValueFormat>\d[+-])\s*'  # 起始|长度@编码格式
        r'\((?P<Factor>[^,]+),(?P<Offset>[^)]+)\)\s*'  # (比例,偏移)
        r'\[(?P<Minmum>[^|]+)\|(?P<Maxmum>[^\]]+)\]\s*'      # [最小值|最大值]
        r'"(?P<Unit>[^"]*)"\s*'                         # "单位"
        r'(?P<RxNode>\S+)$'                                # 接收节点
    )
    
    match = pattern.match(line)
    if not match:
        return None  # 或根据需求处理解析失败的情况
    return match.groupdict()  # 返回一个字典，包含所有字段的原始字符串值




def Get_MessageCycleTimeDict_From_DbcFile(FileData):
    import re
    import PublicLib
    Pattern_CycleTime = "BA_ \"GenMsgCycleTime\" BO_ (\\d+) (\\d+);"
    CycleTimeList = re.findall(Pattern_CycleTime,FileData,re.DOTALL)
    CycleTimeDict = dict()
    for Cycletime in CycleTimeList:
        # Key = Cycletime[0]
        Key = PublicLib.to_hex_with_prefix(Cycletime[0])
        TimeVal = Cycletime[1]
        CycleTimeDict[Key] = TimeVal
    return CycleTimeDict  # 得到一个字典，键为消息ID，值为消息的发送周期，单位ms


def Get_SignalInitValDict_From_DbcFile(FileData):
    import re
    Pattern_InitVal = "BA_ \"GenSigStartValue\" SG_ (\\d+) (.*?) (\\d+);"
    InitValList = re.findall(Pattern_InitVal,FileData,re.DOTALL)
    InitValDict = dict()
    for InitVal in InitValList:
        Key = InitVal[1]
        Val = InitVal[2]
        InitValDict[Key] = Val
    return InitValDict  # 得到一个字典，键为信号ID，值为信号的初始值


# 仅内部调用
def Get_MessageList_from_DbcFile(DbcFile_path): 
    import re
    file_path = str(DbcFile_path)
    with open(file_path, 'r', errors='ignore') as file:
        DBC_data = file.read()
    CycleTimeDict = Get_MessageCycleTimeDict_From_DbcFile(DBC_data) # 得到一个字典，键为消息ID，值为消息的发送周期，单位ms
    InitValDict = Get_SignalInitValDict_From_DbcFile(DBC_data)    # 得到一个字典，键为信号名称，值为信号的初始值
    # print(type(InitValDict))
    # print(list(InitValDict.keys()))
    # print("\n")
    # print(InitValDict)
    # print("\n")
    # input("hold on 2")
    # 重新按行读取文件
    with open(file_path, 'r', errors='ignore') as file:
        DBC_dataLines = file.readlines()
    GlobalMessageList = list()  # 全局的 MessageList 列表，存储所有 Message 的信息，每个元素为一个字典，包含 Message 的所有信息 
    MessageInfoDict = dict()
    SignalInfoList = list()
    Pattern_MessageInfo = "BO_ (\\d+) (.*?): (\\d+) (.*?)"
    Pattern_SignalIndo = " SG_ (.*?) : (\\d+)|(\\d+)@"
    MessageState = 0    # 0:未匹配；1:匹配到起始位置；2:匹配到结束位置
    for Dataline in DBC_dataLines:
        if MessageState == 0:   #匹配 Message
            MatchRes = re.match(Pattern_MessageInfo,Dataline)
            if MatchRes:    #匹配成功
                MessageInfoDict = dict() #每次匹配到新的 Message 时，重置 MessageInfoDict 字典，确保每个 Message 的信息独立存储
                SignalInfoList = list() #每次匹配到新的 Message 时，重置 SignalInfoList 列表，确保每个 Message 的信号列表独立存储   
                MessageInfo = Dataline.split()  # 用空格做分隔符进行拆分
                MessageId = PublicLib.to_hex_with_prefix(MessageInfo[1])
                MessageName = MessageInfo[2][:-1]
                MessageLength = MessageInfo[3]
                MessageTxNode = MessageInfo[4]
                MessageCycleTime = CycleTimeDict[MessageId]
                MessageInfoDict["MessageId"] = MessageId
                MessageInfoDict["MessageName"] = MessageName
                MessageInfoDict["MessageLength"] = MessageLength
                MessageInfoDict["MessageTxNode"] = MessageTxNode
                MessageInfoDict["MessageCycleTime"] = MessageCycleTime
                MessageState = 1
        elif MessageState == 1:   #匹配 Signal
            MatchRes = re.match(Pattern_SignalIndo,Dataline)
            if MatchRes:    #匹配成功,添加 signal列表
                SignalInfoDict = Get_SignalDict_From_LineStr(Dataline)
                Index = SignalInfoDict["SignalName"]
                Index = Index.strip()  # 去除字符串首尾的空格
                InitVal = InitValDict.get(Index, "0")  # 获取信号的初始值，如果没有则返回 "None"
                SignalInfoDict["InitVal"] = InitVal
                SignalInfoList.append(SignalInfoDict)
            else:
                MessageState = 2    # 一帧完毕
        if MessageState == 2:
            MessageInfoDict["SignalInfoList"] = SignalInfoList
            GlobalMessageList.append(MessageInfoDict)
            MessageState = 0    #重新开始匹配下一个 message

    return GlobalMessageList



# 外部调用，提取所有DBC的所有信息
def GetInfo_DbcFile():  #V1.1 Used
    DbcFileNum = 0
    DbcFileNameList = list()
    MessageList = list()
    import os
    # 获取路径下，所有文件和文件夹的名称
    DBC_FilePath = ".\FilesInput"
    AllFiles = os.listdir(DBC_FilePath)
    DBCfileList = list()
    # 只提取 .DBC 文件
    for file in AllFiles:
        if not os.path.isdir(file): #检测不是文件夹
            FileName = str(file)    #获取文件名称
            Last4bit = FileName[-4:]    #提取文件后缀
            if Last4bit == ".DBC" or Last4bit == ".dbc":
                DbcFileNameList.append(FileName)
                DBCfileList.append(DBC_FilePath + "\\" + FileName)
    DbcFileNum = len(DbcFileNameList)

    if DbcFileNum == 1:
        MessageList = Get_MessageList_from_DbcFile(DBCfileList[0])
    return DbcFileNum,DbcFileNameList,MessageList