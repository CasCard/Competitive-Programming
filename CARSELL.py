t=int(input())
for _ in range(t):
    N = int(input())
    priceList = list(map(int, input().rstrip().split()))
    priceList.sort(reverse=True)
    profit = 0
    for i in range(0, len(priceList)):
        profit = profit + priceList[0]
        priceList = [x - 1 for x in priceList]
        for j in range(len(priceList)):
            if (priceList[j] < 0):
                priceList[j] = 0
        priceList.remove(priceList[0])
    print(profit)