



def format_float_to_str(x):
    """
    将浮点数转换为字符串，保留最多6位小数，去除末尾多余的0。
    如果输入不是浮点数，则原样返回。
    """
    
    import pandas as pd
    if pd.isna(x):
        return ""
    if isinstance(x, float):
        # 先格式化为6位小数的字符串
        s = f"{x:.6f}"
        # 去除末尾的0，再去除可能残留的小数点
        s = s.rstrip('0').rstrip('.')
        return s
    return x




# 遍历一个列表，输入SignalDict，查找有无该信号MessageID的元素，有则返回该元素的索引，没有则新增一个元素并补充Message相关信息，并返回该元素的索引
def Find_MessageIndex_in_MessageList(MessageList,SignalDict):
    for index, Message in enumerate(MessageList):
        if Message["MessageId"] == SignalDict["MessageId"]:
            return index
    # 如果没有找到，则新增一个元素，并返回该元素的索引
    NewMessage = dict()
    NewMessage["MessageId"] = SignalDict["MessageId"]
    NewMessage["MessageName"] = SignalDict["MessageName"]
    NewMessage["MessageLength"] = str(SignalDict["MessageLen"])
    NewMessage["MessageTxNode"] = SignalDict["MessageTxNode"]
    NewMessage["MessageCycleTime"] = str(SignalDict["MessageCycleTime"])
    NewMessage["SignalInfoList"] = list()
    MessageList.append(NewMessage)
    return len(MessageList) - 1  # 返回新增元素的索引

# 将一个信号Dict添加到对应 Message 的 SignalInfoList 中
def Add_SignalDict_to_Message(MessageList,MessageIndex,SignalDict):
    AddSignalDict = dict()
    AddSignalDict["SignalName"] = SignalDict["SignalName"]
    AddSignalDict["StartBit"] = str(SignalDict["StartBit"])
    AddSignalDict["Length"] = str(SignalDict["Length"])
    # AddSignalDict["ValueFormat"] = SignalDict["ValueFormat"]  # 该字段暂时不添加，因为目前没有用到
    AddSignalDict["Factor"] = str(SignalDict["Factor"])
    AddSignalDict["Offset"] = str(SignalDict["Offset"])
    AddSignalDict["Minmum"] = str(SignalDict["Minmum"])
    AddSignalDict["Maxmum"] = str(format_float_to_str(SignalDict["Maxmum"]))
    AddSignalDict["Unit"] = format_float_to_str(SignalDict["Unit"])
    AddSignalDict["RxNode"] = SignalDict["RxNode"]
    AddSignalDict["InitVal"] = str(format_float_to_str(SignalDict["InitValue"]))
    MessageList[MessageIndex]["SignalInfoList"].append(AddSignalDict)


# 仅内部调用
def Get_MessageList_from_ExcelFile(ExcelFile_path): 
    import pandas as pd
    # Excel_data = pd.read_excel(ExcelFile_path,dtype=str,keep_default_na=False, na_values=[''],engine='openpyxl')  
    Excel_data = pd.read_excel(ExcelFile_path,keep_default_na=False, na_values=[''],engine='openpyxl') 
    GlobalMessageList = list()
    for index, row in Excel_data.iterrows():    #遍历每一行
        TempSignalDict = dict()
        for clo_name, value in row.items(): #遍历一行中的每个数据
            # print(f"{clo_name}: {value}")
            TempSignalDict[clo_name] = value
        MessageIndex = Find_MessageIndex_in_MessageList(GlobalMessageList, TempSignalDict)
        Add_SignalDict_to_Message(GlobalMessageList, MessageIndex, TempSignalDict)  # 将该信号添加到对应 Message 的 SignalInfoList 中
    return GlobalMessageList



# 外部调用，提取所有excel的所有信息
def GetInfo_ExcelFile():  #V1.1 Used
    ExcelFileNum = 0
    ExcelFileNameList = list()
    MessageList = list()
    import os
    # 获取路径下，所有文件和文件夹的名称
    Excel_FilePath = ".\FilesInput"
    AllFiles = os.listdir(Excel_FilePath)
    ExcelfileList = list()
    # 只提取 .DBC 文件
    for file in AllFiles:
        if not os.path.isdir(file): #检测不是文件夹
            FileName = str(file)    #获取文件名称
            Last4bit = FileName[-4:]    #提取文件后缀
            Last5bit = FileName[-5:]    #提取文件后缀
            OpenInExcelFlag = FileName[:2]  #提取文件名前两位,判断是否被其他工具打开
            if OpenInExcelFlag == "~$":  # 跳过临时文件
                continue
            elif Last4bit == ".xls" or Last5bit == ".xlsx":
                ExcelFileNameList.append(FileName)
                ExcelfileList.append(Excel_FilePath + "\\" + FileName)
    ExcelFileNum = len(ExcelFileNameList)
    if ExcelFileNum == 1:
        MessageList = Get_MessageList_from_ExcelFile(ExcelfileList[0])
    return ExcelFileNum,ExcelFileNameList,MessageList