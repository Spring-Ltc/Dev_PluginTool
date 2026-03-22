
import os

import sys
sys.path.append(".\\FilesInput")
sys.path.append(".\\FuncLib")
sys.path.append(".\\UserDef")

import SrcCode_InfoCollect






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











# 读取INP_SWC.c文件，得到信号名称，变量类型，调用函数的字典
Type_dict,Signal_dict,Function_dict = SrcCode_InfoCollect.GetSrcInfo_InpSwc()
# for key in Type_dict:
#     print(Type_dict[key])
#     print(Signal_dict[key])
#     print(Function_dict[key])
#     print("\n")

# print("\n\n")
# print("Len = ",len(Type_dict),len(Signal_dict),len(Function_dict))





# 选择信号前缀，用于声明或定义
PreString = ""

os.system('cls')
print("\n")
print("0: No Prefix")
print("1: extern ")
print("2: volatile ")
print("3: extern volatile ")
PreSelect = input("Please input the Prefix of the Signals:\t")
if PreSelect.isdigit():#判断输入是否数字
    PreSelect = (int)(PreSelect)
    if PreSelect == 0:
        PreString = ""
    elif PreSelect == 1:
        PreString = "extern "
    elif PreSelect == 2:
        PreString = "volatile "
    elif PreSelect == 3:
        PreString = "extern volatile "
    else:
        print("Pre No Defined\n")
else:
    print("Input Invalid\n")
    input("")
    exit()


FileWritePath = ".\\FilesOutput\\"

# 创建一个文件，用于INP_SWC里面信号的变量的定义
TxtData2Write = ""
for key in Type_dict:
    TxtData2Write += PreString
    TxtData2Write += Type_dict[key]
    TxtData2Write += " "
    TxtData2Write += Signal_dict[key]
    TxtData2Write += ";\n"
FileWriteName =FileWritePath+ "INP_Signal.txt"
with open(FileWriteName,'w') as file:
    file.write(TxtData2Write)

# 创建一个文件，用于INP_SWC里面函数的调用
TxtData2Write = ""
for key in Type_dict:
    TxtData2Write += "\t"
    TxtData2Write += Signal_dict[key]
    TxtData2Write += " = "
    TxtData2Write += Function_dict[key]
    TxtData2Write += ";\n"
FileWriteName =FileWritePath+ "INP_Function.txt"
with open(FileWriteName,'w') as file:
    file.write(TxtData2Write)


print("\n INP_SWC have Run over!\n")


# 下面操作的是OUTP_SWC
Type_dict,Signal_dict,Function_dict = SrcCode_InfoCollect.GetSrcInfo_OutpSwc()

# 创建一个文件，用于 OUTP_SWC 里面信号的变量的定义
TxtData2Write = ""
for key in Type_dict:
    TxtData2Write += PreString
    TxtData2Write += Type_dict[key]
    TxtData2Write += " "
    TxtData2Write += Signal_dict[key]
    TxtData2Write += ";\n"
FileWriteName =FileWritePath+ "OUTP_Signal.txt"
with open(FileWriteName,'w') as file:
    file.write(TxtData2Write)

# 创建一个文件，用于OUTP_SWC里面函数的调用
TxtData2Write = ""
for key in Type_dict:
    TxtData2Write += "\t"
    TxtData2Write += Function_dict[key]
    TxtData2Write += "("
    TxtData2Write += Signal_dict[key]
    TxtData2Write += ");\n"
FileWriteName =FileWritePath+ "OUTP_Function.txt"
with open(FileWriteName,'w') as file:
    file.write(TxtData2Write)


print("\n OUTP_SWC have Run over!\n")

print("\n Tools_Integration Run over!\n")


