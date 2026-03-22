
# example: ArxmlFileNum,ArxmlFileName,ArxmlFileData = ComArxml_GetContent()
def ComArxml_GetContent():
    ArxmlFileNum = 0
    ArxmlFileName = "NULL"
    ArxmlFileData = "null"
    import os
    # 获取路径下，所有文件和文件夹的名称
    Arxml_FilePath = ".\FilesInput"
    AllFiles = os.listdir(Arxml_FilePath)

    FilePath_List = list()
    FileName_list = list()
    # 只提取 .arxml 文件
    for fileObj in AllFiles:
        if not os.path.isdir(fileObj): #检测不是文件夹
            FileName = str(fileObj)    #获取文件名称
            Last6bit = FileName[-6:]    #提取文件后缀
            if Last6bit == ".arxml":
                FileName_list.append(FileName[:-6])
                FilePath_List.append(Arxml_FilePath + "\\" + FileName)
    ArxmlFileNum = len(FileName_list)
    if ArxmlFileNum == 1:
        ArxmlFileName = str(FileName_list[0])
        file_path = str(FilePath_List[0])
        with open(file_path, 'r',errors='ignore') as file:  # 读取Arxml文件
            ArxmlFileData = file.read()
    return ArxmlFileNum,ArxmlFileName,ArxmlFileData
            





# V1.1 Used
def ContentPack_ComIPduCallout(CalloutName):
    StartChar = "<"
    StrPrefix = StartChar.rjust(24+1)
    DestData = StrPrefix + "ECUC-TEXTUAL-PARAM-VALUE S=\"USER_GENERATED\">"
    DestData += ("\n  " + StrPrefix + "DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComIPduCallout</DEFINITION-REF>")
    DestData += ("\n  " + StrPrefix + "VALUE>"+ CalloutName + "</VALUE>")
    DestData += ("\n" + StrPrefix + "/ECUC-TEXTUAL-PARAM-VALUE>")
    return DestData

# V1.1 Used
def ContentPack_ComTimeout(ComTimeout_Str):
    StartChar = "<"
    StrPrefix = StartChar.rjust(24+1)
    DestData = StrPrefix + "ECUC-NUMERICAL-PARAM-VALUE S=\"USER_GENERATED\">"
    DestData += ("\n  " + StrPrefix + "DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComTimeout</DEFINITION-REF>")
    DestData += ("\n  " + StrPrefix + "VALUE>" + ComTimeout_Str + "</VALUE>")
    DestData += ("\n" + StrPrefix + "/ECUC-NUMERICAL-PARAM-VALUE>")
    return DestData

# V1.1 Used
def ContentPack_ComFirstTimeout(ComFirstTimeout_Str):
    StartChar = "<"
    StrPrefix = StartChar.rjust(24+1)
    DestData = StrPrefix + "ECUC-NUMERICAL-PARAM-VALUE S=\"USER_GENERATED\">"
    DestData += ("\n  " + StrPrefix + "DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComFirstTimeout</DEFINITION-REF>")
    DestData += ("\n  " + StrPrefix + "VALUE>" + ComFirstTimeout_Str + "</VALUE>")
    DestData += ("\n" + StrPrefix + "/ECUC-NUMERICAL-PARAM-VALUE>")
    return DestData

# V1.1 Used
def ContentPack_ComTimeoutNotification(TimeoutNotificationName):
    StartChar = "<"
    StrPrefix = StartChar.rjust(24+1)
    DestData = StrPrefix + "ECUC-TEXTUAL-PARAM-VALUE S=\"USER_GENERATED\">"
    DestData += ("\n  " + StrPrefix + "DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComSignal/ComTimeoutNotification</DEFINITION-REF>")
    DestData += ("\n  " + StrPrefix + "VALUE>" + TimeoutNotificationName + "</VALUE>")
    DestData += ("\n" + StrPrefix + "/ECUC-TEXTUAL-PARAM-VALUE>")
    return DestData