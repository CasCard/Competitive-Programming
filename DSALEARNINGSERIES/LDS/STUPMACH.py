t = int(input())
for _ in range(t):
    N = int(input())
    tokens = [0] * N
    S = list(map(int, input().split()))[:N]
    tokens[0]=S[0]
    for i in range(1,N):
        if(S[i]>=tokens[i-1]):
            tokens[i]=tokens[i-1]
        else:
            tokens[i]=S[i]
    print(sum(tokens))

