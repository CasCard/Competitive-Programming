import math
import collections
from functools import reduce

t = int(input())


def primeFactors(n):
    primeFactors = []
    while n % 2 == 0:
        primeFactors.append(2)
        n = int(n / 2)
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % int(i) == 0:
            primeFactors.append(int(i))
            n = int(n / i)
    if n > 2:
        primeFactors.append(int(n))
    return primeFactors


def primeFactorsCount(n):
    ans = primeFactors(n)
    if len(ans) <= math.pow(10, 9):
        counts = collections.Counter(ans)
        countList = list(counts.values())
        keyList = list(counts.keys())
        countList = list(map(lambda x: x + 1, countList))
        numberOfDivisors = reduce((lambda x, y: x * y), countList)
        return [numberOfDivisors, len(keyList)]
    else:
        return [0, 0]


i = 2
flag = 0
for j in range(t):
    X, K = map(int, input().split())
    while True:
        numOfDiv, kprime = map(int, primeFactorsCount(i))
        # print(f'{i}:{numOfDiv}:{kprime}')
        if (numOfDiv == 0 and kprime == 0):
            flag = 0
            break
        if ((X < 2 and K < 1) or K < 1):
            flag = 0
            break
        elif (kprime <= K and numOfDiv >= kprime):
            # print(f'{i}:{numOfDiv}:{kprime}')
            if (numOfDiv == X and K == kprime):
                flag = 1
                break
            else:
                flag = 0
                i = int(i * 2)
        i += 1

    if flag:
        print(1)
    else:
        print(0)
