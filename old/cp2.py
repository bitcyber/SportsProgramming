
def sqq(num):
    sq1 = 2
    while sq1 < num:
        sq1 = sq1*2
    return sq1

n = int(input())
while n>0:
    n-=1
    num = int(input())
    sq = sqq(num)
    if sq == num:
        print(int(1))
    else:
        sq = sq / 2
        xx = int(abs(sq-num))
        sq2 =sqq(xx)
        if abs(sq2-xx) <= abs(sq2/2 -xx):
            res = int(abs(sq2 - xx))
        else:
            res = int(abs((sq2)/2 - xx))
        print(res)








