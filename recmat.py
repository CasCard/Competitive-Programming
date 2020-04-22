from functools import lru_cache

mod = 10 ** 9 + 7
t = int(input())


@lru_cache(maxsize=1000)
def solve(N, A, i):
    if (N == 0):
        return 0
    else:
        elementsRemaning = i
        return (A ** elementsRemaning) % mod + solve(N - 1, A * (pow(A, elementsRemaning)), i + 2) % mod


for _ in range(t):
    N, A = map(int, input().split())
    ans = solve(N, A, 1)
    print(ans)
