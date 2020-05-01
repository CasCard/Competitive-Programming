#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))

# Write Your Code Here

numberOfSwaps = 0
for i in range(n):

    for j in range(n - 1):
        if (a[j] > a[j + 1]):
            temp = a[j + 1]
            a[j + 1] = a[j]
            a[j] = temp
            numberOfSwaps += 1

    if numberOfSwaps == 0:
        break

print(a)
print("Array is sorted in {} swaps.".format(numberOfSwaps))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[-1]))
