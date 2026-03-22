

def GetSrcInfo_InpSwc():
    import os
    file_path = ".\\FilesInput\INP_SWC.c"
    with open(file_path,'r') as file:
        file_data = file.read()
    # print(file_data)
    # 下面开始提取
    import re

    # 提取数据类型，得到一个字典
    Type_pattern = "\t(.*?) iRead(.*?);"
    Type_list = re.findall(Type_pattern,file_data)
    # print("Type_list len = ",len(Type_list))
    # for Obj in Type_list:
    #     print(Obj)
    Type_dict = dict()
    for Obj in Type_list:   
        # print(type(Obj))    #对象是元组 tuple
        Key = Obj[1]
        Val = Obj[0]
        Type_dict[Key]=Val
    # for key in Type_dict:
    #     print(key,Type_dict[key])


    # 提取函数调用名称 和变量名称，得到2个字典
    Function_pattern = "\tiRead(.*?) = (.*?);"
    Function_list = re.findall(Function_pattern,file_data)
    # print("Type_list len = ",len(Func_list))
    # for Obj in Func_list:
    #     print(Obj)
    Function_dict = dict()
    Signal_dict = dict()
    for Obj in Function_list:
        Key = Obj[0]
        Val_Func = Obj[1]
        Function_dict[Key] = Val_Func
        Signal_pattern = "Rte_IRead_RE_ComRx_RP_(.*?)_CAN"
        Signal_res = re.search(Signal_pattern,Val_Func)
        Signal_resStr = str(Signal_res.group())
        Val_Signal = Signal_resStr[22:-4]
        Signal_dict[Key] = Val_Signal
    # for key in Function_dict:
    #     print(key,Function_dict[key],Signal_dict[key])
    return Type_dict,Signal_dict,Function_dict


def GetSrcInfo_OutpSwc():
    import os
    file_path = ".\\FilesInput\OUTP_SWC.c"
    with open(file_path,'r') as file:
        file_data = file.read()
    # print(file_data)
    # 下面开始提取
    import re

    # 提取数据类型，得到一个字典
    Type_pattern = "\t(.*?) iWriteRef(.*?);"
    Type_list = re.findall(Type_pattern,file_data)
    # print("Type_list len = ",len(Type_list))
    # for Obj in Type_list:
    #     print(Obj)
    Type_dict = dict()
    for Obj in Type_list:   
        # print(type(Obj))    #对象是元组 tuple
        Key = Obj[1]
        Val = Obj[0]
        Type_dict[Key]=Val
    # for key in Type_dict:
    #     print(key,Type_dict[key])

    # 提取函数调用名称 和变量名称，得到2个字典
    # Function_pattern = "\t(iWrite(.*?) = (.*?);"
    Function_pattern = "\t(.*?)[(]iWrite(.*?)[)];"
    Function_list = re.findall(Function_pattern,file_data)
    # print("Type_list len = ",len(Function_list))
    # for Obj in Function_list:
    #     print(Obj)
    Function_dict = dict()
    Signal_dict = dict()
    for Obj in Function_list:
        Key = Obj[1]
        Val_Func = Obj[0]
        Function_dict[Key] = Val_Func
        # print(Val_Func)
        Signal_pattern = "Rte_IWrite_RE_ComTx_PP_(.*?)_CAN"
        Signal_res = re.search(Signal_pattern,Val_Func)
        if Signal_res != None:
            Signal_resStr = str(Signal_res.group())
            Val_Signal = Signal_resStr[23:-4]
            Signal_dict[Key] = Val_Signal
        else:
            Val_Signal = Val_Func[23:]
            Signal_dict[Key] = Val_Signal 

    # for key in Signal_dict:
    # #     # print(key,Function_dict[key])
    #     print(key,Signal_dict[key])
    # print("Len = ",len(Signal_dict))

    return Type_dict,Signal_dict,Function_dict
