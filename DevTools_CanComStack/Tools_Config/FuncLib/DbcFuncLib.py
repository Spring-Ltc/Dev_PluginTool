# 只提取通信相关的DBC文件 only

import os

# 或者看能不能用结构体成员的方式进行赋值和访问
# 改成 返回一个字典，键key为MessageName，值value为一个列表，包含如下信息
# 对单个DBC文件，提取DBC信息,返回一个列表 MessageList ，列表元素 Message 格式如下:
#   MessageName : 报文的名称
#   CycleTime   : 报文的发送周期，单位 ms
#   SignalList  : 包含的信号的列表，列表元素为信号名称
#   MessageTxNode   :该报文的发送节点
#   MessageRxNode   :该报文的接收节点   【暂不实现】
#   NetworkName     :该报文所在的网路名称
# 仅内部调用
def Get_MessageList_from_DbcFile(DbcFile_path): #V1.1 Used
    file_path = str(DbcFile_path)
    with open(file_path, 'r', errors='ignore') as file:
        DBC_data = file.read()
    import re
    Pattern_CycleTime = "BA_ \"GenMsgCycleTime\" BO_ (\\d+) (\\d+);"
    CycleTimeList = re.findall(Pattern_CycleTime,DBC_data,re.DOTALL)
    CycleTimeDict = dict()
    for Cycletime in CycleTimeList:
        Key = Cycletime[0]
        TimeVal = Cycletime[1]
        CycleTimeDict[Key] = TimeVal
        # print("ID=",Key,"\tCycle=",TimeVal)
    # 得到一个字典，键为消息ID，值为消息的发送周期，单位ms

    Pattern_NetworkName = "BA_ \"DBName\" \"(.*?)\";"
    NetworkNameRes = re.findall(Pattern_NetworkName,DBC_data,re.DOTALL)
    Temp_NetWorkName = NetworkNameRes[0]


    MessageList = list()
    from collections import namedtuple
    MessageType = namedtuple('MessageType',['MessageName','CycleTime','SignalList','MessageTxNode','MessageRxNode','NetworkName'])

    # 重新按行读取文件
    with open(file_path, 'r', errors='ignore') as file:
        DBC_dataLines = file.readlines()

    Pattern_MessageInfo = "BO_ (\\d+) (.*?): (\\d+) "
    Pattern_SignalIndo = " SG_ (.*?) : (\\d+)|(\\d+)@"
    MessageState = 0    # 0:未匹配；1:匹配到起始位置；2:匹配到结束位置
    Temp_MessageID = 0
    Temp_MessageName = ""
    Temp_MessageCycletime = 0
    Temp_MessageTxNode = ""
    Temp_MessageRxNode = ""
    for Dataline in DBC_dataLines:
        if MessageState == 0:   #匹配 Message
            MatchRes = re.match(Pattern_MessageInfo,Dataline)
            if MatchRes:    #匹配成功
                MessageInfo = Dataline.split()  # 用空格做分隔符进行拆分
                Temp_MessageID = MessageInfo[1]
                Temp_MessageName = MessageInfo[2][:-1]
                Temp_MessageTxNode = MessageInfo[-1]
                # Temp_MessageSignalList.clear()  #清除信号列表
                Temp_MessageSignalList = list()
                MessageState = 1
                # print(Dataline)
                # print(MessageInfo)
                # print("ID=",MessageInfo[1])
                # print("Name=",MessageInfo[2])
                # print("TxNode",MessageInfo[-1])
                # input("\n\n\nDebug Hold on!")

        elif MessageState == 1:   #匹配 Signal
            MatchRes = re.match(Pattern_SignalIndo,Dataline)
            if MatchRes:    #匹配成功,添加 signal列表
                SignalInfo = Dataline.split()  # 用空格做分隔符进行拆分
                SignalName = SignalInfo[1]
                Temp_MessageRxNode = SignalInfo[-1]
                Temp_MessageSignalList.append(SignalName)
                # print(Dataline)
                # input("\n\n\nDebug Hold on!")
            else:
                MessageState = 2    # 一帧完毕
        if MessageState == 2:
            Temp_MessageCycletime = CycleTimeDict[Temp_MessageID]
            MessageTemp = MessageType(Temp_MessageName,Temp_MessageCycletime,Temp_MessageSignalList,Temp_MessageTxNode,Temp_MessageRxNode,Temp_NetWorkName)
            MessageList.append(MessageTemp)
            MessageState = 0    #重新开始匹配下一个 message

    # MessageTemp = MessageType("VIU_GW_0x310",20,SignalListTemp,"VIU")   #该类型一旦被创建就不可修改，即具有只读的特性

    return MessageList



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
    if DbcFileNum >= 1:
        for DbcFile in DBCfileList:
            NowList = Get_MessageList_from_DbcFile(DbcFile)
            MessageList.extend(NowList)
    return DbcFileNum,DbcFileNameList,MessageList