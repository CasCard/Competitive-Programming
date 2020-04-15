m = 10 ** 9 + 7
T = int(input())
for _ in range(T):
    N = int(input())
    l = list(map(int, input().split()))
    l.sort(reverse=True)
    ans = 0
    for i in range(N):
        b = l[i] - i
        if b < 0:
            b = 0
        ans += b % m
    print(ans % m)
