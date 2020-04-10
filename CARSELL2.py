import math
from collections import deque
MOD=7+math.pow(10,9)
t = int(input())
for _ in range(t):
    profit = 0
    N = int(input())
    priceList = list(map(int, input().rstrip().split()))[:N]
    priceList.sort(reverse=True)
    while len(priceList) != 0:
        print(priceList)
        profit = (profit + priceList[0])
        priceList.pop(0)
        priceList = list(filter(lambda x: (x >= 0), map(lambda x: x - 1, priceList)))
        print(priceList)
        print(int(profit%MOD))
