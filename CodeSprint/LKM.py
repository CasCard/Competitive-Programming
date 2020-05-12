t = int(input())


def nCr(n, r):
    return (fact(n) / (fact(r)
                       * fact(n - r)))


def fact(n):
    res = 1

    for i in range(2, n + 1):
        res = res * i

    return res


for _ in range(t):
    n, r = map(int, input().split())
    print(int(nCr(n, r)))
