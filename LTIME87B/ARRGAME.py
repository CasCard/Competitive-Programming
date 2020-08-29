import math
t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int, input().split(' ')[:n]))
    # print(n)
    # print(a)
    unique=list(set(a))
    # print(unique)
    if unique[0]==1 and len(unique)==1:
        print("No")
    elif unique[0]==0 and len(a)%2 == 0 and len(unique)==1:
        print("No")
    elif unique[0]==0 and len(a)%2 != 0 and len(unique)==1:
        print("Yes")
    else:
        max =-math.inf
        count = 0
        for i in range(n):
            if a[i]==0:
                count=count+1
            else:
                if(count>max):
                    max=count
                    count=0
        if max%2==0:
            print("No")
        else:
            print("Yes")
