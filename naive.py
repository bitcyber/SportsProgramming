t=input("enter the string \n")
p=input("enter the pattern to match\n")
n=len(t)
m=len(p)
# k=n-m
# l=m-1
for i in range(0,n):
    # print(i)
    for j in range(0,m):
        if(p[j]!=t[i+j]):
            break
    if(j==m-1):
        print(i)
