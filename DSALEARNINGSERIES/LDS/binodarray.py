import operator as op
from functools import reduce
import math
n,k,s= map(int, input().split())
a=list(map(int, input().split()))
# print(n,k,s)
# print(a)
# length of subarray > k
# sum > s
#  find smallest sub arraySize



l=k+1
i=0
j=1
smallestLength=-1
k=0
minLength=math.inf
    # if smallestLength != -1:
    #     break
while l<=n:
    for i in range(n-1):
        for j in range(n):
            print(a[i:j + l - 1], len(a[i:j + l - 1]))
            if sum(a[i:j+l-1]) > s and len(a[i:j+l-1])>=l:
                if len(a[i:j+l-1])<minLength:
                    minLength=len(a[i:j+l-1])
            if minLength != math.inf and len(a[i:j+l-1])==l:
                break
        if minLength != math.inf and len(a[i:j+l-1])==l:
            break
    if minLength != math.inf and len(a[i:j+l-1])==l:
        break

    l=l+1

if minLength==math.inf:
    minLength=-1
print(minLength)


