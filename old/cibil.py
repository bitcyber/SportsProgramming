t = int(input())

def getkey(item):
    return item[1]

while(t):
    t-=1
    n = int(input())
    n1=n
    xx=['']
    for i in range(n):
        x=input().split(' ')
        xx.append(list((str(x[0]),int(x[1]),int(x[2]))))
    k_l = int(input())
    hh = list(xx)
    hh=hh[1:]
    # print(hh)
    kk=sorted(hh,key = lambda xt:xt[1],reverse=True)
    gg=kk
    # print(gg)
    for i in range(len(kk)):
        count =0
        for j in range(len(kk)-i):

            if kk[i][1]== kk[j+i][1]:
                count +=1
        pk = sorted(kk[i:i+count],key = lambda jt:jt[2])
        if len(pk)>1:
            gg = gg[0:i]+ sorted(kk[i:i+count],key = lambda jt:jt[2]) + kk[i+count:]
        i = i+count+2
    # print(gg)
    ml=gg

    for i in range(len(kk)):
        count =0
        for j in range(len(kk)-i):
            if gg[i][1]== gg[j+i][1] and gg[i][2] == gg[j+i][2] :
                count +=1
        pk = sorted(gg[i:i+count],key = lambda jt:jt[0],reverse=True)
        if len(pk)>1:
            ml = gg[0:i]+ sorted(gg[i:i+count],key = lambda jt:jt[2]) + gg[i+count:]
        i = i+count+2
    print(ml)

    print(str(ml[k_l+1][0])+" "+ str(ml[k_l+1][1]))




