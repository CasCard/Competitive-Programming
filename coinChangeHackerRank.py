def getWays(n, c, memo=dict()):
    print(memo)
    if n < 0: return 0
    if n == 0:
        return 1
    if (n,len(c)) in memo.keys():return memo[(n,len(c))]

    else:
        total = 0
        for i in range(len(c)):
            coin = c[i]
            if coin > n:
                continue
            else:
                result = getWays(n - coin, c[i:], memo)
                if result > 0:
                    total += result

    memo[(n, len(c))] = total
    return total


print(getWays(25,[1,3,5],{}))
