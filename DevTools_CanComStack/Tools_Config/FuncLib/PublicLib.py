# coding=utf-8


# 自定义一个函数，返回所有匹配的位置
def StringFindall(Src,Dest,PosStart,PosStop):
    
    PosList = list()

    Pos = Src.find(Dest,PosStart,PosStop)   # 先找第一个
    # print("StringFindall = ",Pos)
    # input("hold on 3")
    if Pos == -1: # 未找到
        PosList.append(-1)
    else:
        while Pos != -1:
            PosList.append(Pos) # 把位置添加到列表
            Pos = Src.find(Dest,Pos+1,PosStop) # 继续查找后面的
    #         print("StringFindall = ",Pos)
    #         input("hold on 3")
    # print("StringFindall List = ",PosList)
    # input("hold on 3")
    return PosList


def StringFind_LastOne(Src,Dest,PosStart,PosStop):
    PosList = StringFindall(Src,Dest,PosStart,PosStop)
    # print(PosList)
    # input("hold on")
    if PosList[0] == -1:
        Res = -1
    else :
        Res = PosList[-1]
    return Res




# 在指定位置插入文本 V1.1 Used
def TxtInsert_ByPosition(SrcTxt,DestAddTxt,position):
    StrBefore = SrcTxt[0:position]
    StrAfter = SrcTxt[position:]
    TxtOut = StrBefore + DestAddTxt + "\n" + StrAfter
    return TxtOut


def TxtDelete_ByPosition(SrcTxt,StartPos,StopPos):
    if StartPos >= StopPos:
        TxtOut = SrcTxt
    else:
        StrBefore = SrcTxt[0:StartPos]
        StrAfter = SrcTxt[StopPos:]
        TxtOut = StrBefore + StrAfter
    return TxtOut


