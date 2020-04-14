import math
from functools import lru_cache



def numberOfZeros(n):
    if (n >= 5):
        start = math.floor(n / 5) + numberOfZeros(n / 5)
        return start
    else:
        return 0

T=int(input())
for _ in range(T):
    N=int(input())
    print(numberOfZeros(N))
