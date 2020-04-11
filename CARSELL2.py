import math

MOD = 7 + math.pow(10, 9)
t = int(input())
for _ in range(t):
    N = int(input())
    priceList = list(map(int, input().rstrip().split()))[:N]
    priceList = list(filter(lambda x: (x > 0), priceList))
    priceList.sort(reverse=True)
    L = len(priceList)
    if (L % 2 == 0):
        endPoint = int((L + 4) / 2)
        priceList = priceList[:endPoint]
    else:
        endPoint = int(((L + 1) / 2 + 1))
        priceList = priceList[:endPoint]
    profit = 0
    while len(priceList) != 0:
        print(priceList)
        profit = (profit + priceList[0])
        priceList.pop(0)
        priceList = list(filter(lambda x: (x > 0), map(lambda x: x - 1, priceList)))
        print(priceList)
    print(int(profit % MOD))
