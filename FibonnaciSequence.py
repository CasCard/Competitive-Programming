# Using Iteratively
from functools import lru_cache


def fib_iter(n):
    a = 0
    b = 1
    for i in range(n):
        a, b = b, a + b
    return a


# print(fib_iter(23))

@lru_cache(maxsize=1000)
def fib_rec(n):
    if n == 0 or n == 1:
        return n
    else:
        return fib_rec(n - 1) + fib_rec(n - 2)


# print(fib_rec(23))
# Using Caching
fibonacci_cache = {}


def fibonacci(n):
    if n in fibonacci_cache:
        return fibonacci_cache[n]
    if n == 1:
        value = 1
    elif n == 2:
        value = 1
    elif n > 2:
        value = fibonacci(n - 1) + fibonacci(n - 2)
    fibonacci_cache[n]=value
    return value


for n in range(1, 1001):
    print(n, ":", fibonacci(n))
