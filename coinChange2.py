import sys

N, T = map(int, input().split())
coins = list(map(int, input().split()))[:T]


def minCoins(coins, m, V):
    table = [0 for i in range(V + 1)]
    table[0] = 0
    for i in range(1, V + 1):
        table[i] = sys.maxsize

    for i in range(1, V + 1):
        for j in range(m):
            if (coins[j] <= i):
                sub_res = table[i - coins[j]]
                if (sub_res != sys.maxsize and
                        sub_res + 1 < table[i]):
                    table[i] = sub_res + 1
                print(table)
    return table[V]


print(minCoins(coins, len(coins), N))
