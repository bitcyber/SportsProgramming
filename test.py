tt = input()
pp  = input()

for i in range(0,len(tt)):
    k =i
    for j in range(0,len(pp)):
        print(j)
        if(tt[i]==pp[j]):
            i+=1
        else:
            k=i
            break
        if(j==len(pp)-1):
            print("matched\n")