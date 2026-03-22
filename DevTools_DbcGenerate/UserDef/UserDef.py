# coding=utf-8



def UserFunc_ComTimeout_Calculate(BaseCycleTime):
    Timeout = 5*BaseCycleTime/1000

    return Timeout





def UserFunc_ComFirstTimeout_Calculate(BaseCycleTime):

    #下面为长望VIU的时间参数规律，输入的倍率无效
    Timeout = 5*BaseCycleTime/1000
    FirstTimeout = 10*Timeout
    if FirstTimeout > 1:
        FirstTimeout = Timeout
    if FirstTimeout < 1:
        FirstTimeout = 1
    #长望VIU补丁结束

    return FirstTimeout