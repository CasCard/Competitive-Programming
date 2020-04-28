t= int(input())
for _ in range(t):
    N,S= map(int, input().split())
    remaining=100-S
    P=list(map(int,input().split()))[:N]
    DorF=list(map(int,input().split()))[:N]
    defender=[]
    forward=[]
    flag=False
    for i in range(N):
        if(DorF[i]==0):
            defender.append(P[i])
        else:
            forward.append(P[i])
    if((min(defender)+min(forward))<=remaining):
        print("yes")
    else:
        print("no")

