# coding=utf-8

CW_VIU = 0
KC_VCU = 1


ProjectSel = CW_VIU





def GetSignal2Test_InpSwc():
    import os
    file_path = ".\\FilesInput\INP_SWC.c"
    with open(file_path,'r') as file:
        file_data = file.read()
    # print(file_data)
    # 下面开始提取
    import re

    # 提取数据类型，得到一个字典
    Type_pattern = "\t(.*?) = Rte_IRead_RE_ComRx_RP_(.*?);" #结果第一个为信号名，第二个为信号加函数
    Type_list = re.findall(Type_pattern,file_data)
    print("Signals in INP_SWC : ",len(Type_list))
    # for Obj in Type_list:
    #     print(Obj)
    Type_dict = dict()
    for Obj in Type_list:   
        # print(type(Obj))    #对象是元组 tuple
        Key = Obj[0]    #信号的名称
        Val = Obj[1]    #信号加报文加其它，还需要进一步提取
        Type_dict[Key]=Val
    # for key in Type_dict:
    #     print(key,Type_dict[key])

    Signal_dict = dict()
    for key in Type_dict:
        Str2Find = str(Type_dict[key])  
        PositionLast1 = Str2Find.rfind("_")  #找到最后一次出现的位置
        PositionLast2 = Str2Find.rfind("_",0,PositionLast1)   #LTC5.19: 找倒数第2个下划线
        PositionLast3 = Str2Find.rfind("_",0,PositionLast2)   #LTC5.19: 找倒数第3个下划线
        PositionLast4 = Str2Find.rfind("_",0,PositionLast3)   #LTC5.19: 找倒数第4个下划线

        if ProjectSel == CW_VIU:
            StrRes = Str2Find[PositionLast4+1 :-2]     #LTC5.19：适配VIU
        elif ProjectSel == KC_VCU:
            StrRes = Str2Find[PositionLast2+1 :-2]      #适配凯程VCU
        else:
            print("\n\tProject No Defined!\n")
            exit()


        Signal_dict[key] = StrRes   # 重新得到一个字典,key为变量名,Value为其所属的Ipdu
        # print(key,"\n",Type_dict[key],"\n",StrRes)
        # print("\n")

    # for key in Signal_dict:
    #     print(Signal_dict[key],key)

    Ipdu_dict = dict()  #创建一个字典,key为Ipdu名称,Value为一个(包含了所有信号的)列表
    for key in Signal_dict:
        SignalName = str(key)
        IpduName = str(Signal_dict[key])
        if IpduName not in Ipdu_dict: #不存在,需要添加
            SignalList = list()
            SignalList.append(SignalName)
            Ipdu_dict[IpduName]=SignalList
        else:
            SignalList = Ipdu_dict[IpduName]
            SignalList.append(SignalName)
            Ipdu_dict[IpduName]=SignalList

    # for key in Ipdu_dict:
    #     print(key)
    #     print(Ipdu_dict[key])
    #     print("\n")

    return Ipdu_dict




def GetSignal2Test_OutpSwc():
    import os
    file_path = ".\\FilesInput\OUTP_SWC.c"
    with open(file_path,'r') as file:
        file_data = file.read()
    # print(file_data)
    # 下面开始提取
    import re

    # 提取数据类型，得到一个字典
    Type_pattern = "\tRte_IWrite_RE_ComTx_PP_(.*?)[(](.*?)[)];"
    Type_list = re.findall(Type_pattern,file_data)
    print("Signals in OUTP_SWC : ",len(Type_list))
    # for Obj in Type_list:
    #     print(Obj)
    Type_dict = dict()
    for Obj in Type_list:   
        # print(type(Obj))    #对象是元组 tuple
        Key = Obj[1]    #对应的信号名
        Val = Obj[0]    #对应的函数名称后半部分，接下来用这个提取Ipdu名称
        Type_dict[Key]=Val
    # for key in Type_dict:
    #     print(key,"\n",Type_dict[key])
    #     print("\n")

    Signal_dict = dict()
    for key in Type_dict:
        Str2Find = str(Type_dict[key])  
        PositionLast1 = Str2Find.rfind("_")  #找到最后一次出现的位置
        PositionLast2 = Str2Find.rfind("_",0,PositionLast1)   #LTC5.19: 找倒数第二个下划线
        PositionLast3 = Str2Find.rfind("_",0,PositionLast2)   #LTC5.19: 找倒数第3个下划线
        PositionLast4 = Str2Find.rfind("_",0,PositionLast3)   #LTC5.19: 找倒数第4个下划线

        if ProjectSel == CW_VIU:
            StrRes = Str2Find[PositionLast4+1 :]     #LTC5.19：适配VIU
        elif ProjectSel == KC_VCU:
            StrRes = Str2Find[PositionLast2+1 :]      #适配凯程VCU
        else:
            print("\n\tProject No Defined!\n")
            exit()

        Signal_dict[key] = StrRes   # 重新得到一个字典,key为变量名,Value为其所属的Ipdu
        # print(key,"\n",Type_dict[key],"\n",StrRes)
        # print("\n")

    # for key in Signal_dict:
    #     print(Signal_dict[key],key)

    Ipdu_dict = dict()  #创建一个字典,key为Ipdu名称,Value为一个(包含了所有信号的)列表
    for key in Signal_dict:
        SignalName = str(key)
        IpduName = str(Signal_dict[key])
        if IpduName not in Ipdu_dict: #不存在,需要添加
            SignalList = list()
            SignalList.append(SignalName)
            Ipdu_dict[IpduName]=SignalList
        else:
            SignalList = Ipdu_dict[IpduName]
            SignalList.append(SignalName)
            Ipdu_dict[IpduName]=SignalList

    # for key in Ipdu_dict:
    #     print(key)
    #     print(Ipdu_dict[key])
    #     print("\n")

    return Ipdu_dict






#  <Root>
#   <REG_HEADER>
#    <Title>BF283F24-70B9-4f97-86E6-0AD5BAAE9E01</Title>
#    <VersionHigh>0</VersionHigh>
#    <VersionLow>1</VersionLow>
#   </REG_HEADER>
#   <REG_ROOT>
#    <RegVer>1297113092</RegVer>
def Pack_Start():
    DestData = ""
    DestData += " <Root>" + "\n"
    DestData += "  <REG_HEADER>" + "\n"
    DestData += "   <Title>BF283F24-70B9-4f97-86E6-0AD5BAAE9E01</Title>" + "\n"
    DestData += "   <VersionHigh>0</VersionHigh>" + "\n"
    DestData += "   <VersionLow>1</VersionLow>" + "\n"
    DestData += "  </REG_HEADER>" + "\n"
    DestData += "  <REG_ROOT>" + "\n"
    DestData += "   <RegVer>1297113092</RegVer>" + "\n"
    # DestData += "" + "\n"

    return DestData






#    <Watch.0>
#     <WatchName>IO_OUT_LowLampReqRmt_na</WatchName>
#     <ExpressionDisplay>
#      <Color>false</Color>
#      <ColorBack>16777215</ColorBack>
#      <ColorText>0</ColorText>
#      <Enabled>false</Enabled>
#      <Hi>0</Hi>
#      <Lo>0</Lo>
#      <Scale>Linear</Scale>
#     </ExpressionDisplay>
#    </Watch.0>
def Pack_Signal(SignalID,SignalName):
    ID = str(SignalID)
    DestData = "   <Watch." + ID + ">\n" 
    DestData += "    <WatchName>" + SignalName + "</WatchName>" + "\n"
    # DestData += "    <WatchName>IO_OUT_LowLampReqRmt_na</WatchName>" + "\n"
    DestData += "    <ExpressionDisplay>" + "\n"
    DestData += "     <Color>false</Color>" + "\n"
    DestData += "     <ColorBack>16777215</ColorBack>" + "\n"
    DestData += "     <ColorText>0</ColorText>" + "\n"
    DestData += "     <Enabled>false</Enabled>" + "\n"
    DestData += "     <Hi>0</Hi>" + "\n"
    DestData += "     <Lo>0</Lo>" + "\n"
    DestData += "     <Scale>Linear</Scale>" + "\n"
    DestData += "    </ExpressionDisplay>" + "\n"
    DestData += "   </Watch." + ID + ">\n" 
    # DestData += "" + "\n"
    # DestData += "" + "\n"
    # DestData += "" + "\n"
    return DestData


#   </REG_ROOT>
#  </Root>
def Pack_End():
    DestData = ""

    DestData += "  </REG_ROOT>" + "\n"
    DestData += " </Root>" + "\n"
    return DestData




def xwlFileCreat(IpduName,SignalList,isTxPdu):
    import os
    file_path = ".\\FilesOutput\\"
    if isTxPdu == True:
        sub_path = "TxPdu\\" + IpduName + "_Tx.txt"
    else:
        sub_path = "RxPdu\\" + IpduName + "_Rx.txt"
    FileWriteName = file_path + sub_path 

    TxtData2Write = ""
    TxtData2Write = Pack_Start()
    SignalID = 0
    for Obj in SignalList:
        TxtData2Write += Pack_Signal(SignalID,Obj)
        SignalID += 1
    TxtData2Write += Pack_End()
    with open(FileWriteName,'w') as file:
        file.write(TxtData2Write)
    # 再重命名文件
    root,ext = os.path.splitext(FileWriteName)  #分离文件名与扩展名称
    new_fileName = root + ".xwl"
    os.rename(FileWriteName,new_fileName)