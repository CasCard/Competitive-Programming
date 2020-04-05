#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#




n = int(input().strip())
arr = []
for _ in range(n):
    arr.append(list(map(int, input().rstrip().split())))

# result = diagonalDifference(arr)
print(arr)
diagonalOne=0
diagonalTwo=0
for i in range(n):
    diagonalOne+=arr[i][i]
    diagonalTwo+=arr[i][(n-1)-i]


print(diagonalOne)
print(diagonalTwo)
print(abs(diagonalOne-diagonalTwo))

