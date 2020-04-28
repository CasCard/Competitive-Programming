import math

t = int(input())
for _ in range(t):
    N = int(input())
    S, P, V = [0] * N, [0] * N, [0] * N
    PbyS = []
    profit = []
    for i in range(N):
        S[i], P[i], V[i] = map(int, input().split())
        PbyS.append(math.floor(P[i] / (S[i]+1)))
    for i in range(N):
        profit.append(PbyS[i]*V[i])
    print(max(profit))


