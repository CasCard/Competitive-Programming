import math
from itertools import combinations
def coprime(a, b):
    return (math.gcd(a, b) == 1)

coprimePairs = []

def numberOfPairs(arr, n):
    count = 0
    for i in range(0, n - 1):
        for j in range(i + 1, n):
            if (coprime(arr[i], arr[j])):
                count += 1
                coprimePairs.append((arr[i], arr[j]))
    return coprimePairs


arr = [1, 2, 3, 4,5]
n = len(arr)

print(numberOfPairs(arr, n))
arrayList = []
resudualArray=[]
while len(arr) != 0:
    arrayList.append(arr[0])
    for i in range(1, len(arr)):
        arrayList.append(arr[i])
        primePossibleCombination = numberOfPairs(arrayList, len(arrayList))
        combinationList = list(combinations(arr[:i + 1], 2))
        if (coprimePairs == combinationList):
            print(coprimePairs)
        else:
            resudualArray.append(arr[i])
        print(arrayList)
