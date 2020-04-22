mod = 10 ** 9 + 7
t = int(input())
while t:
    N,A=[int(_) for _ in input().split()]
    x=0
    for i in range(N):
        c=pow(A,(2*(i+1)-1),mod)
        x+=c
        x%=mod
        A*=c
        A%=mod
    print(x%mod)
    t -= 1
