# coding=utf-8

from mailbox import Message
import os
import sys

sys.path.append(".\\FilesInput")
sys.path.append(".\\FuncLib")
sys.path.append(".\\UserDef")


# import ArxmlFuncLib
import DbcFuncLib
import FileGenerate
# import PublicLib
# import UserDef




# 删除一个文件夹，删除包含的所有文件及其子文件夹
def DelFilesPath(FilesPath):
    # 先判断目标文件夹是否存在
    if os.path.exists(FilesPath):
        # 遍历路径下的所有文件和文件夹
        AllFiles = os.listdir(FilesPath)    #获取路径下的文件和文件夹列表
        if len(AllFiles) == 0:   #空文件夹
            os.rmdir(FilesPath) #删除空文件夹
        else:   #文件夹下面有内容
            for file in AllFiles:
                SubPath = FilesPath + "\\" + file
                if os.path.isdir(SubPath): #检测是文件夹
                    DelFilesPath(SubPath)
                else:   #是文件
                    os.remove(SubPath) #直接删除文件
            os.rmdir(FilesPath) #删除空文件夹
    else:
        print("FilePath not exists!\n")


# 创建Output下的两个文件夹
#先删除，再创建
NowPath = os.getcwd()
destPath = NowPath + "\\FilesOutput"
DelFilesPath(destPath)
os.mkdir(".\\FilesOutput")








# def UserFunctionSelect():
#     print("0: Save and exit Com Config tool")  #保存并退出
#     print("1: Add ComIPduCallout to Ipdu")  # OK 2025.05.07
#     print("2: Add ComTimeout to Ipdu")  # OK 2025.05.07
#     print("3: Add ComFirstTimeout to Ipdu")  # OK 2025.05.07
#     print("4: Add ComTimeoutNotification to Signal")    #给信号添加超时回调函数

#     if DelFunctionEnable == 1:
#         print("5: Delete all ComIPduCallout of Ipdu") 
#         print("6: Delete all ComTimeout of Ipdu") 
#         print("7: Delete all ComFirstTimeout of Ipdu") 
#         print("8: Delete all ComTimeoutNotification of Signal")

#     FunCmd = input("\nPlease select the function\t:")

#     # 检查非法输入
#     if FunCmd.isdigit():
#         FunCmd = FunCmd
#     else:
#         FunCmd = 999
#     return int(FunCmd)

# # 用于判断是否已经存在配置参数
# # return   -2：已经存在；-1：未配置
# def MessageInfo_isExist(ArxmlTxt,Message,DestIterm):
#     ErrFlag = 0
#     MessageName = Message.MessageName
#     MessageNetWork = Message.NetworkName
#     Str2Find = "<SHORT-NAME>IP_" + MessageName + "_" + MessageNetWork   # 用来查找存在性和起始位置
#     # 查找arxml中是否存在当前pdu
#     posExist = ArxmlTxt.find(Str2Find)
#     if posExist == -1:  #在arxml文件中未找到当前Ipdu
#         ErrFlag = 1 

#     # 查找配置参数位置段
#     if ErrFlag == 0:
#         positionStart = ArxmlTxt.find("<PARAMETER-VALUES>",posExist)
#         if positionStart == -1:
#             ErrFlag = 2 
#     if ErrFlag == 0:
#         positionStop = ArxmlTxt.find("</PARAMETER-VALUES>",positionStart)   # 查找配置参数段的结束位置
#         if positionStop == -1:
#             ErrFlag = 2 
    
#     # 判断配置参数是否存在
#     if ErrFlag == 0:
#         if DestIterm == 0:  #查找 ComIPduCallout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComIPduCallout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 ErrFlag = -2     #已经配置
#         elif DestIterm == 1:  #查找 ComTimeout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComTimeout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 ErrFlag = -2     #已经配置
#         elif DestIterm == 2:  #查找 ComFirstTimeout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComFirstTimeout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 ErrFlag = -2     #已经配置
#         else:
#             print("\n\tError:DestIterm out range!")

#     InsertPos = positionStart+19
#     return ErrFlag,InsertPos


# def SignalInfo_isExist(ArxmlTxt,SignalName,DestIterm):
#     ErrFlag = 0
#     Str2Find = "<SHORT-NAME>" + SignalName + "</SHORT-NAME>"
#     # 查找arxml中是否存在当前pdu
#     posExist = ArxmlTxt.find(Str2Find)
#     if posExist == -1:  #在arxml文件中未找到当前 Signal
#         ErrFlag = 1 

#     # 查找配置参数位置段
#     if ErrFlag == 0:
#         positionStart = ArxmlTxt.find("<PARAMETER-VALUES>",posExist)
#         if positionStart == -1:
#             ErrFlag = 2 
#     if ErrFlag == 0:
#         positionStop = ArxmlTxt.find("</PARAMETER-VALUES>",positionStart)   # 查找配置参数段的结束位置
#         if positionStop == -1:
#             ErrFlag = 2 

#     # 判断配置参数是否存在
#     if ErrFlag == 0:
#         if DestIterm == 0:  #查找 ComTimeoutNotification 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComSignal/ComTimeoutNotification</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 ErrFlag = -2     #已经配置

#         elif DestIterm == 1:  #查找 ComNotification 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComSignal/ComNotification</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 ErrFlag = -2     #已经配置

#         else:
#             print("\n\tError:DestIterm out range!")

#     InsertPos = positionStart+19
#     return ErrFlag,InsertPos









# # 用来查找删除项的起始和结束位置
# # 返回值 0：正常找到位置； -1 未找到配置项， else：错误
# def MessageInfo_GetDeletePos(ArxmlTxt,Message,DestIterm):
#     ErrFlag = 0
#     PosCfgStart = 0
#     PosCfgStop = 0
#     MessageName = Message.MessageName
#     MessageNetWork = Message.NetworkName
#     # if Message.MessageTxNode == Message.MessageRxNode:
#     #     Str2Find = "<SHORT-NAME>IP_" + MessageName + "_OUT_" + MessageNetWork   # 用来查找存在性和起始位置
#     # else:
#     Str2Find = "<SHORT-NAME>IP_" + MessageName + "_" + MessageNetWork   # 用来查找存在性和起始位置

#     # print(Str2Find)
#     # input("hold on")

#     # 查找arxml中是否存在当前pdu
#     posExist = ArxmlTxt.find(Str2Find)
#     if posExist == -1:  #在arxml文件中未找到当前Ipdu
#         ErrFlag = 1 

#     # 查找配置参数位置段
#     if ErrFlag == 0:
#         positionStart = ArxmlTxt.find("<PARAMETER-VALUES>",posExist)
#         if positionStart == -1:
#             ErrFlag = 2 
#     if ErrFlag == 0:
#         positionStop = ArxmlTxt.find("</PARAMETER-VALUES>",positionStart)   # 查找配置参数段的结束位置
#         if positionStop == -1:
#             ErrFlag = 2 
    
#     # 判断配置参数是否存在
#     if ErrFlag == 0:
#         if DestIterm == 0:  #查找 ComIPduCallout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComIPduCallout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-TEXTUAL-PARAM-VALUE S=\"USER_GENERATED\">",positionStart+19,pos) +1 #查找配置段的起始位置
#                 PosCfgStop = ArxmlTxt.find("</ECUC-TEXTUAL-PARAM-VALUE>",pos) + 29
#         elif DestIterm == 1:  #查找 ComTimeout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComTimeout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 # print(positionStart+19,pos)
#                 PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-NUMERICAL-PARAM-VALUE>",positionStart+19,pos) #查找配置段的起始位置
#                 if PosCfgStart == -1:
#                     PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-NUMERICAL-PARAM-VALUE S=\"USER_GENERATED\">",positionStart+19,pos)
#                 PosCfgStop = ArxmlTxt.find("</ECUC-NUMERICAL-PARAM-VALUE>",pos) + 29
#         elif DestIterm == 2:  #查找 ComFirstTimeout 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FLOAT-PARAM-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComIPdu/ComFirstTimeout</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-NUMERICAL-PARAM-VALUE>",positionStart+19,pos) #查找配置段的起始位置
#                 if PosCfgStart == -1:
#                     PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-NUMERICAL-PARAM-VALUE S=\"USER_GENERATED\">",positionStart+19,pos)
#                 PosCfgStop = ArxmlTxt.find("</ECUC-NUMERICAL-PARAM-VALUE>",pos) + 29
#         else:
#             print("\n\tError:DestIterm out range!")
    
#     if ErrFlag == 0:
#         if PosCfgStart == -1:
#             ErrFlag = 3
#         if PosCfgStop == -1:
#             ErrFlag = 4


#     return ErrFlag,PosCfgStart-25,PosCfgStop




# def SignalInfo_GetDeletePos(ArxmlTxt,SignalName,DestIterm):
#     ErrFlag = 0
#     PosCfgStart = 0
#     PosCfgStop = 0

#     Str2Find = "<SHORT-NAME>" + SignalName + "</SHORT-NAME>"
#     # 查找arxml中是否存在当前pdu
#     posExist = ArxmlTxt.find(Str2Find)
#     if posExist == -1:  #在arxml文件中未找到当前 Signal
#         ErrFlag = 1 

#     # 查找配置参数位置段
#     if ErrFlag == 0:
#         positionStart = ArxmlTxt.find("<PARAMETER-VALUES>",posExist)
#         if positionStart == -1:
#             ErrFlag = 2 
#     if ErrFlag == 0:
#         positionStop = ArxmlTxt.find("</PARAMETER-VALUES>",positionStart)   # 查找配置参数段的结束位置
#         if positionStop == -1:
#             ErrFlag = 2 

#     # 判断配置参数是否存在
#         if DestIterm == 0:  #查找 ComTimeoutNotification 是否已经配置
#             Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComSignal/ComTimeoutNotification</DEFINITION-REF>"
#             pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#             if pos == -1: #未找到配置内容
#                 ErrFlag = -1    #未配置
#             else:
#                 PosCfgStart = PublicLib.StringFind_LastOne(ArxmlTxt,"<ECUC-TEXTUAL-PARAM-VALUE S=\"USER_GENERATED\">",positionStart+19,pos) #查找配置段的起始位置
#                 PosCfgStop = ArxmlTxt.find("</ECUC-TEXTUAL-PARAM-VALUE>",pos) + 29

#         # elif DestIterm == 1:  #查找 ComNotification 是否已经配置
#         #     Str2Find = "<DEFINITION-REF DEST=\"ECUC-FUNCTION-NAME-DEF\">/AUTOSAR_Com/EcucModuleDefs/Com/ComConfig/ComSignal/ComNotification</DEFINITION-REF>"
#         #     pos = ArxmlTxt.find(Str2Find,positionStart,positionStop)
#         #     if pos == -1: #未找到配置内容
#         #         ErrFlag = -1    #未配置
#         #     else:
#         #         ErrFlag = -2     #已经配置

#         else:
#             print("\n\tError:DestIterm out range!")


#     return ErrFlag,PosCfgStart-24,PosCfgStop



# def Add_ComIpduCallout(MessageList,ArxmlTxt,RxTxSel):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,InsertPos = MessageInfo_isExist(OldTxtDate,Message,0)   #查找 ComIpduCallout 是否已经配置
#         if Res != -1:
#             if Res == -2:
#                 print("Warnning: Message \"",Message.MessageName,"\" has add ComIPduCallout!")
#             elif Res == 1:
#                 print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")
#             else:
#                 print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#             continue
        
#         # 存在且未配置，才进行下一步
#         if RxTxSel == 0: # Rx
#             # CalloutName = "ComIPduCallout_IP_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Rx"  # 凯程VCU格式
#             CalloutName = "IP_Callout_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Rx"    #长望VIU格式
#         else:   # Tx
#             CalloutName = "ComIPduCallout_IP_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Tx"

#         Content2Add = ArxmlFuncLib.ContentPack_ComIPduCallout(CalloutName)
#         NewTxtData = PublicLib.TxtInsert_ByPosition(OldTxtDate,Content2Add,InsertPos) # 在指定位置开始插入内容，返回插入后的文本
#         OldTxtDate = NewTxtData
#     return NewTxtData


# def Add_ComTimeout(MessageList,ArxmlTxt,TimeRate):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,InsertPos = MessageInfo_isExist(OldTxtDate,Message,1)   #查找 ComTimeout 是否已经配置
#         if Res != -1:
#             if Res == -2:
#                 print("Warnning: Message \"",Message.MessageName,"\" has add ComTimeout!")
#             elif Res == 1:
#                 print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")
#             else:
#                 print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#             continue
        
#         # 存在且未配置，才进行下一步
#         BaseCycleTime = float(Message.CycleTime)

#         if TimeRate == 0:
#             Timeout = UserDef.UserFunc_ComTimeout_Calculate(BaseCycleTime)
#         else:
#             Timeout = TimeRate*BaseCycleTime/1000            # 超时时间,转换为秒

#         # Timeout = BaseCycleTime/1000            # 超时时间,转换为秒
#         # Timeout = Timeout*5 # 【长望VIU的超时时间，是周期的5倍】


#         Content2Add = ArxmlFuncLib.ContentPack_ComTimeout(str(Timeout))
#         NewTxtData = PublicLib.TxtInsert_ByPosition(OldTxtDate,Content2Add,InsertPos) # 在指定位置开始插入内容，返回插入后的文本
#         OldTxtDate = NewTxtData
#     return NewTxtData

# def Add_ComFirstTimeout(MessageList,ArxmlTxt,TimeRate):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,InsertPos = MessageInfo_isExist(OldTxtDate,Message,2)   #查找 ComFirstTimeout 是否已经配置
#         if Res != -1:
#             if Res == -2:
#                 print("Warnning: Message \"",Message.MessageName,"\" has add ComFirstTimeout!")
#             elif Res == 1:
#                 print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")
#             else:
#                 print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#             continue
        
#         # 存在且未配置，才进行下一步
#         BaseCycleTime = float(Message.CycleTime)

#         if TimeRate == 0:
#             FirstTimeout = UserDef.UserFunc_ComFirstTimeout_Calculate(BaseCycleTime)
#         else:
#             FirstTimeout = TimeRate*BaseCycleTime/1000            # 超时时间,转换为秒


#         Content2Add = ArxmlFuncLib.ContentPack_ComFirstTimeout(str(FirstTimeout))
#         NewTxtData = PublicLib.TxtInsert_ByPosition(OldTxtDate,Content2Add,InsertPos) # 在指定位置开始插入内容，返回插入后的文本
#         OldTxtDate = NewTxtData
#     return NewTxtData

# def Add_ComTimeoutNotification(MessageList,ArxmlTxt,RxTxSel,NumberSelCmd):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         SignalList = Message.SignalList # 得到当前message的信号列表
#         for Signal in SignalList:
#             # 计算arxml中的信号名称
#             if RxTxSel == 0: # Rx
#                 SignalName = "S_" + Signal + "_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Rx"
#             else:   # Tx
#                 SignalName = "S_" + Signal + "_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Tx"
#             # 查找存在性和位置
#             Res,InsertPos = SignalInfo_isExist(OldTxtDate,SignalName,0)   #查找 ComTimeoutNotification 是否已经配置
#             if Res != -1:
#                 if Res == -2:
#                     print("Warnning: Signal \"",SignalName,"\" has add ComTimeoutNotification!")
#                     if NumberSelCmd == 0:   #已经添加，且只添加1个，则退出当前 signal循环
#                         break
#                 elif Res == 1:
#                     print("Warnning: Signal \"",SignalName,"\" is not find in Arxml file!")
#                 else:
#                     print("Warnning: Signal \"",SignalName,"\" Error! ErrorCode=",Res)
#                 continue    #查找错误，继续重新查找
            
#             # 存在且未配置，才进行下一步
#             # TimeoutNotificationName = "Rte_COMCbkTOut_" + SignalName  #凯程VCU命名格式
#             TimeoutNotificationName = "Rte_COMCbkRxTout_" + SignalName    #长望VIU命名格式
#             Content2Add = ArxmlFuncLib.ContentPack_ComTimeoutNotification(TimeoutNotificationName)
#             NewTxtData = PublicLib.TxtInsert_ByPosition(OldTxtDate,Content2Add,InsertPos) # 在指定位置开始插入内容，返回插入后的文本
#             OldTxtDate = NewTxtData

#             if NumberSelCmd == 0:   #只添加第一个信号，然后直接突出内层循环
#                 break

#     return NewTxtData


# def Delete_ComIPduCallout(MessageList,ArxmlTxt):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,StartPos,StopPos = MessageInfo_GetDeletePos(OldTxtDate,Message,0)   #查找 ComIPduCallout 是否已经配置,若已经配置返回配置段位置
#         if Res == 0: #查找成更且未发生错误
#             NewTxtData = PublicLib.TxtDelete_ByPosition(OldTxtDate,StartPos,StopPos) #根据起始位置和结束位置删除指定的片段
#             OldTxtDate = NewTxtData
#         elif Res == -1: #未找到表示不存在，不需要执行后续的删除语句
#             print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")    
#         else : #其他查找错误
#             print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#     return NewTxtData

# def Delete_ComTimeout(MessageList,ArxmlTxt):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,StartPos,StopPos = MessageInfo_GetDeletePos(OldTxtDate,Message,1)   #查找 ComTimeout 是否已经配置,若已经配置返回配置段位置
#         if Res == 0: #查找成更且未发生错误
#             NewTxtData = PublicLib.TxtDelete_ByPosition(OldTxtDate,StartPos,StopPos) #根据起始位置和结束位置删除指定的片段
#             OldTxtDate = NewTxtData
#         elif Res == -1: #未找到表示不存在，不需要执行后续的删除语句
#             print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")    
#         else : #其他查找错误
#             print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#     return NewTxtData

# def Delete_ComFirstTimeout(MessageList,ArxmlTxt):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         Res,StartPos,StopPos = MessageInfo_GetDeletePos(OldTxtDate,Message,2)   #查找 ComFirstTimeout 是否已经配置,若已经配置返回配置段位置
#         if Res == 0: #查找成更且未发生错误
#             NewTxtData = PublicLib.TxtDelete_ByPosition(OldTxtDate,StartPos,StopPos) #根据起始位置和结束位置删除指定的片段
#             OldTxtDate = NewTxtData
#         elif Res == -1: #未找到表示不存在，不需要执行后续的删除语句
#             print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")    
#         else : #其他查找错误
#             print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)
#     return NewTxtData


# def Delete_ComTimeoutNotification(MessageList,ArxmlTxt):
#     OldTxtDate = ArxmlTxt
#     NewTxtData = OldTxtDate
#     for Message in MessageList:
#         SignalList = Message.SignalList # 得到当前message的信号列表
#         for Signal in SignalList:
#             # 计算arxml中的信号名称
#             SignalName = "S_" + Signal + "_" + Message.MessageName + "_" + Message.NetworkName + "_Channel_CAN_Rx"
#             # 查找存在性和位置
#             Res,StartPos,StopPos = SignalInfo_GetDeletePos(OldTxtDate,SignalName,0)   #查找 ComTimeoutNotification 是否已经配置,若已经配置返回配置段位置

#             if Res == 0: #查找成更且未发生错误
#                 NewTxtData = PublicLib.TxtDelete_ByPosition(OldTxtDate,StartPos,StopPos) #根据起始位置和结束位置删除指定的片段
#                 OldTxtDate = NewTxtData
#                 break
#             elif Res == -1: #未找到表示不存在，不需要执行后续的删除语句
#                 print("Warnning: Message \"",Message.MessageName,"\" is not find in Arxml file!")    
#             else : #其他查找错误
#                 print("Warnning: Message \"",Message.MessageName,"\" Error! ErrorCode=",Res)

#     return NewTxtData

# ########################################################################
os.system('cls')
print("\n\tStart run DebugCAN Generator tools......!\n\n")

RunErrorFlag = 0

# step1 读取DBC文件信息
DbcFileNum,DbcFileNameList,MessageList = DbcFuncLib.GetInfo_DbcFile()
if DbcFileNum == 1:
    print("\nRead DBC files success:")
    for Obj in DbcFileNameList:
        print(str(Obj)) #打印提示读取成功的唯一DBC文件
elif DbcFileNum == 0:
    print("\nError: There is no DBC file are found!")
    RunErrorFlag = 1 
else:
    print("\nError: Too many DBC file are found!")
    RunErrorFlag = 2

print("\n\n")
if RunErrorFlag != 0:
    print("\n\tTool run error!\n")
    exit()

FileWritePath = ".\\FilesOutput\\"
# FileWriteName =FileWritePath+ "DevCAN_Message_Type.h"
FileGenerate.GenerateFile_MessageTypeDef_By_MessageDictList(MessageList,FileWritePath)
FileGenerate.GenerateFile_MessageVariable_By_MessageDictList(MessageList,FileWritePath)
FileGenerate.GenerateFile_SWC_By_MessageDictList(MessageList,FileWritePath)

# Debug
# for Message in MessageList:
#     # print(type(Message))  #dict

#     # TypeContent = FileGenerate.Generate_MessageTypeDef_By_MessigeDict(Message)
#     # print(TypeContent)
#     # input("hold on")

#     for key, value in Message.items():
#         if key != "SignalInfoList":
#             print(f"{key}: {value}")
#         else:
#             SignalList = value
#             # print(type(SignalList)) #list
#             for Signal in SignalList:
#                 for skey, svalue in Signal.items():
#                     if skey != "SignalName":
#                         print(f"\t\t{skey}: {svalue}")
#                     else:
#                         print(f"\t{svalue}")

                
#             print("\n")
#     break





# # Step 2 ：读取arxml文件的文本信息
# ArxmlFileNum,ArxmlFileName,ArxmlFileData = ArxmlFuncLib.ComArxml_GetContent()
# if ArxmlFileNum != 1:
#     if ArxmlFileNum == 0:
#         print("\nError: There is no .arxml file are found!")
#     else:
#         print("\nError: Too many arxml file!")
#     RunErrorFlag = 2
# else:
#     print("\nRead arxml file success!")
#     print("\t",ArxmlFileName+".arxml")
# if RunErrorFlag != 0:
#     print("\n\tTool run error!\n")
#     exit()


# # step 3 输入ECU结点名称,并对Tx和Rx分类
# ECU_MainNode = input("\nPlease input the ECU node name:\t")
# TxMessageList = list()
# RxMessageList = list()
# for Message in MessageList:
#     if ECU_MainNode == Message.MessageTxNode:
#         TxMessageList.append(Message)
#     elif ECU_MainNode == Message.MessageRxNode:
#         RxMessageList.append(Message)
#     else:
#         print("Message:",Message.MessageName," is not belong to this ECU node!")
# print("Number of Tx Message is:",len(TxMessageList))
# print("Number of Rx Message is:",len(RxMessageList))

# if len(TxMessageList) == 0 and len(TxMessageList) == 0:
#     print("\n\t Now ECU node have no message!\n")
#     RunErrorFlag = 3
# if RunErrorFlag != 0:
#     print("\n\tTool run error!\n")
#     exit()





# TxtData2Write = ""
# TxtData2Find = ArxmlFileData

# Funcmd = UserFunctionSelect()
# while Funcmd != 0:
#     if Funcmd == 1:     # Add ComIPduCallout to Ipdu
#         os.system('cls')
#         RxEnable = input("Add ComIPduCallout to Ipdu for Rx? (Y|N)")
#         TxEnable = input("Add ComIPduCallout to Ipdu for Tx? (Y|N)")
#         if RxEnable == "Y" or RxEnable == "y":
#             TxtData2Write = Add_ComIpduCallout(RxMessageList,TxtData2Find,0)
#             TxtData2Find = TxtData2Write
#             print("Add ComIPduCallout to Rx Ipdu Success!")
#         if TxEnable == "Y" or TxEnable == "y":
#             TxtData2Write = Add_ComIpduCallout(TxMessageList,TxtData2Find,1)
#             TxtData2Find = TxtData2Write
#             print("Add ComIPduCallout to Tx Ipdu Success!")
        
#     elif Funcmd == 2:   # Add Timeout to Ipdu
#         os.system('cls')
#         TimeRate = input("please input the TimeRate of ComTimeout based on CycleTime(input 0 Call User Function):\t")
#         if TimeRate.isdigit():#判断输入是否数字
#             TimeRate = int(TimeRate) 
#             RxEnable = input("Add ComTimeout to Ipdu for Rx? (Y|N)")
#             TxEnable = input("Add ComTimeout to Ipdu for Tx? (Y|N)")
#             if RxEnable == "Y" or RxEnable == "y":
#                 TxtData2Write = Add_ComTimeout(RxMessageList,TxtData2Find,TimeRate)
#                 TxtData2Find = TxtData2Write
#                 print("Add ComTimeout to Rx Ipdu Success!")
#             if TxEnable == "Y" or TxEnable == "y":
#                 TxtData2Write = Add_ComTimeout(TxMessageList,TxtData2Find,TimeRate)
#                 TxtData2Find = TxtData2Write
#                 print("Add ComTimeout to Tx Ipdu Success!")
#         else:
#             print("\nInput invalid:TimeoutRate=",TimeRate,"\n\n\n")

#     elif Funcmd == 3:   # Add FirstTimeout to Ipdu
#         os.system('cls')
#         TimeRate = input("please input the TimeRate of ComFirstTimeout based on CycleTime(input 0 Call User Function):\t")
#         if TimeRate.isdigit():#判断输入是否数字
#             TimeRate = int(TimeRate) 
#             RxEnable = input("Add ComFirstTimeout to Ipdu for Rx? (Y|N)")
#             TxEnable = input("Add ComFirstTimeout to Ipdu for Tx? (Y|N)")
#             if RxEnable == "Y" or RxEnable == "y":
#                 TxtData2Write = Add_ComFirstTimeout(RxMessageList,TxtData2Find,TimeRate)
#                 TxtData2Find = TxtData2Write
#                 print("Add ComFirstTimeout to Rx Ipdu Success!")
#             if TxEnable == "Y" or TxEnable == "y":
#                 TxtData2Write = Add_ComFirstTimeout(TxMessageList,TxtData2Find,TimeRate)
#                 TxtData2Find = TxtData2Write
#                 print("Add ComFirstTimeout to Tx Ipdu Success!")
#         else:
#             print("\nInput invalid:FirstTimeoutRate=",TimeRate,"\n\n\n")

#     elif Funcmd == 4: # Add ComTimeoutNotification to Signal
#         os.system('cls')
#         print("Do you wang to add ComTimeoutNotification only the first signal of each Ipdu?")
#         NumberSel = input("(Y: only first signal | N: all signals):\t")
#         if NumberSel == "Y" or NumberSel == "y":
#             print("Add only the first signal")
#             NumberSelCmd = 0
#         else:
#             print("Add all signals")
#             NumberSelCmd = 1

#         RxEnable = input("Add ComTimeoutNotification to signal for Rx? (Y|N)")
#         TxEnable = input("Add ComTimeoutNotification to signal for Tx? (Y|N)")
#         if RxEnable == "Y" or RxEnable == "y":
#             TxtData2Write = Add_ComTimeoutNotification(RxMessageList,TxtData2Find,0,NumberSelCmd)
#             TxtData2Find = TxtData2Write
#             print("Add ComTimeoutNotification to Rx signal Success!")
#         if TxEnable == "Y" or TxEnable == "y":
#             TxtData2Write = Add_ComTimeoutNotification(TxMessageList,TxtData2Find,1,NumberSelCmd)
#             TxtData2Find = TxtData2Write
#             print("Add ComTimeoutNotification to Tx signal Success!")
#     else:
#         if DelFunctionEnable == 0:
#             os.system('cls')
#             print("\nInput invalid:",Funcmd)
#             print("\n\n")

# #  下面是删除配置
#     if DelFunctionEnable == 1:
#         if Funcmd == 5:   # Delete all ComIPduCallout of Ipdu
#             os.system('cls')
#             TxtData2Write = Delete_ComIPduCallout(MessageList,TxtData2Find)
#             TxtData2Find = TxtData2Write
#             print("Delete All ComIPduCallout Success!")

#         elif Funcmd == 6:   # Delete all ComTimeout of Ipdu
#             os.system('cls')
#             # TxtData2Write = Delete_ComTimeout(TxMessageList,TxtData2Find)
#             TxtData2Write = Delete_ComTimeout(MessageList,TxtData2Find)
#             TxtData2Find = TxtData2Write
#             print("Delete All ComTimeout Success!")

#         elif Funcmd == 7:   # Delete all ComFirstTimeout of Ipdu
#             os.system('cls')
#             # TxtData2Write = Delete_ComFirstTimeout(TxMessageList,TxtData2Find)
#             TxtData2Write = Delete_ComFirstTimeout(MessageList,TxtData2Find)
#             TxtData2Find = TxtData2Write
#             print("Delete All ComFirstTimeout Success!")

#         elif Funcmd == 8:   # Delete all ComTimeoutNotification of Signal
#             os.system('cls')
#             TxtData2Write = Delete_ComTimeoutNotification(MessageList,TxtData2Find) #只删了第一个
#             TxtData2Find = TxtData2Write
#             print("Delete All ComTimeoutNotification Success!")
#         else:   # 输入无效
#             os.system('cls')
#             print("\nInput invalid:",Funcmd)
#             print("\n\n")


#     input()
#     Funcmd = UserFunctionSelect()    #再次输入

# TxtData2Write = TxtData2Find
# # Save and exit
# FileWriteDir = ".\\FilesOutput\\"
# FileWriteName = FileWriteDir + ArxmlFileName + ".txt"
# with open(FileWriteName,'w') as file:
#     file.write(TxtData2Write)

# # Rename
# # 再重命名文件
# # root,ext = os.path.splitext(FileWriteName)  #分离文件名与扩展名称
# # new_fileName = root + ".arxml"
# # os.rename(FileWriteName,new_fileName)







print("\nRun over!\n")
input("over")

