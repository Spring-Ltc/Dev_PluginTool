# coding=utf-8
import os

import sys
sys.path.append(".\\Tools_Config")
sys.path.append(".\\Tools_Integration")
sys.path.append(".\\Tools_Test")



# # import UserFuncLib
# NowPath = os.getcwd()
# print(NowPath)


def UserFunctionSelect():
    print("0: Exit")  #保存并退出
    print("1: Config tool: Arxml file of Com Gen to ISOLAR") 
    print("2: Integration tool: INP_SWC.c and OUTP_SWC.c Pre-gen")   
    print("3: Test tool: Test Signals add to iSystem Watch") 

    
    
    FunCmd = input("\nPlease select the function\t:")

    # 检查非法输入
    if FunCmd.isdigit():
        FunCmd = FunCmd
    else:
        FunCmd = 999

    return int(FunCmd)

Funcmd = UserFunctionSelect()
while Funcmd != 0:
    if Funcmd == 1:
        os.chdir(".\\Tools_Config") #切换工作路径
        os.system(".\\Tools_Config.py")
        os.chdir("..")  #切换回工作路径
    elif Funcmd == 2:
        os.chdir(".\\Tools_Integration") #切换工作路径
        os.system(".\\Tools_Integration.py")
        os.chdir("..")  #切换回工作路径
    elif Funcmd == 3:
        os.chdir(".\\Tools_Test") #切换工作路径
        os.system(".\\Tools_Test.py")
        os.chdir("..")  #切换回工作路径
    else:
        print("\nInput invalid:",Funcmd)
    Funcmd = UserFunctionSelect()    #再次输入




print("\nRun over!\n")

os.system("pause")