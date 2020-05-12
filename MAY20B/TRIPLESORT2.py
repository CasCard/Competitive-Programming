from operator import add
from functools import reduce
import copy

t = int(input())
for _ in range(t):
    n, K = map(int, input().split())
    p = list(map(int, input().split()))
    print(f"input={p}")
    originalSorted = sorted(p)
    print(f"sorted p={originalSorted}")
    indexList = []
    sortedList = []
    temp = 0
    residueList = []
    for i in range(n):
        if len(indexList) > K:
            break
        if p[i] != originalSorted[i]:
            values = [p[i], p[p[i] - 1], p[p[p[i] - 1] - 1]]
            values.sort()
            if (len(indexList) == 0) and (p[i] != p[p[i] - 1] != p[p[p[i] - 1] - 1]):
                indexList.append(values)
            elif len(indexList) > 0 and values not in indexList and (p[i] != p[p[i] - 1] != p[p[p[i] - 1] - 1]):
                indexList.append(values)
        else:
            residueList.append(p[i])
    print(residueList)
    print(indexList)
    indices = indexList.copy()
    indexList.append(residueList)
    new = reduce(add, indexList)
    new.sort()
    print(new)
    if p == originalSorted:
        print(0)
    elif originalSorted == new:
        if len(indices) <= K:
            print(len(indices))
            for ind in indices:
                print(*ind)
        else:
            print(-1)
    else:
        print(-1)
