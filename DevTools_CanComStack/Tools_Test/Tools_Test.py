# coding=utf-8

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
os.mkdir(".\\FilesOutput\\TxPdu")
os.mkdir(".\\FilesOutput\\RxPdu")





# 下面操作的是OUTP_SWC
Ipdu_dict = SrcCode_InfoCollect.GetSignal2Test_OutpSwc()
for key in Ipdu_dict:
    SignalList = Ipdu_dict[key]
    print(key)
    for Obj in SignalList:
        print("\t",Obj)
    print("\n")
    SrcCode_InfoCollect.xwlFileCreat(key,SignalList,True)

    # 生成文件之前,最好线清除已有的文件
    

# 下面操作的是INP_SWC
print("\n OUTP_SWC have Run over!\n")
Ipdu_dict = SrcCode_InfoCollect.GetSignal2Test_InpSwc()
for key in Ipdu_dict:
    SignalList = Ipdu_dict[key]
    print(key)
    for Obj in SignalList:
        print("\t",Obj)
    print("\n")
    SrcCode_InfoCollect.xwlFileCreat(key,SignalList,False)



print("\n Tools_Test.py Run over!\n")
