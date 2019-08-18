#knuth-morris-pratt

t=input("enter the string\n")
p=input("enter the pattern\n")
n=len(t)
m=len(p)
prefix=[None]*m
for i in range(m-1):
    for j in range(i,m):
        if(p[i]==p[j]):
            prefix[j]=i
        else:
            prefix[j]=0
for i in range(n):
    for j in range(m):
        if(t[i]!=p[j]):
            break
        if(j==m-1):
            print("string matched")
    j=prefix[j]
