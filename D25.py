import math
import time

t = int(input())


def isPrime(n):
    if n == 2:
        return True
    elif n % 2 == 0 or n == 1:
        return False
    else:
        flag = True
        for i in range(2,n):
            if n % i == 0:
                flag = False
                break
        return flag

start=time.time()
for _ in range(t):
    n = int(input())
    ans = isPrime(n)
    if ans:
        print("Prime")
    else:
        print("Not prime")
stop=time.time()-start
print("Time: {}ms".format(stop))
