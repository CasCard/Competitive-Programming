t = int(input())
for _ in range(t):
    N, S = map(int, input().split())
    remaining = 100 - S
    P = list(map(int, input().split()))[:N]
    DorF = list(map(int, input().split()))[:N]
    flag=False
    for i in range(N):
        for j in range(N):
            if(DorF[i]==1 and DorF[j]==0):
                if((P[i]+P[j])<=remaining):
                    flag=True
                    break
    if(flag):
        print("yes")
    else:
        print("no")

