from itertools import count

t = int(input())
mod=998244353

def missingElement(sequence, start=1):
    uniques = set(sequence)
    return next(x for x in count(start) if x not in uniques)

def printSubsequences(arr, index, subarr):
    if index == len(arr):
        if len(subarr) != 0:
             return missingElement(subarr)
    else:
        return missingElement(subarr)+printSubsequences(arr, index + 1, subarr + [arr[index]])

print(printSubsequences([1,1], 0, []))
# for _ in range(t):
#     N = int(input())
#     a = list(map(int, input().split()))[:N]
#     subset = [[]]
#     subsets = printSubsequences(a, 0, [])
#     sum = 0
#     for i in range(pow(2, N)):
#         sum = ((sum%mod) + (missingElement(subset[i])%mod))%mod
#     print(sum%mod)
