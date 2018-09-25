n = int(input())
total_score_board=[]
i=0
x=n
for i in range(n):
    xx= (input().split())
    x1 = [int(yy) for yy in xx ]
    total_score_board.append(sum(x1))
thomas_score = total_score_board[0]

sorted_score = sorted(total_score_board,reverse = True)

rank = sorted_score.index(thomas_score)
print(int(rank+1))

# http://codeforces.com/contest/1017/problem/A