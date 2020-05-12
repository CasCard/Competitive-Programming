import math
import numpy
from functools import reduce

n = int(input())
distanceList = []
for i in range(n):
    x, y = map(int, input().split())
    d = math.sqrt(pow(x, 2) + pow(y, 2))
    distanceList.append(d)
q = int(input())
r = [0] * q
result = []
for j in range(q):
    r = int(input())
    count = reduce(lambda z, j: z + (1 if j <= r else 0), distanceList, 0)
    result.append(count)
print(*result, sep="\n")
