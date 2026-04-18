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

