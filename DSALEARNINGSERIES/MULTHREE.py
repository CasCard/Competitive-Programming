import math

t = int(input())
for _ in range(t):
    K, d0, d1 = map(int, input().split())
    s = d0 + d1
    c = ((2 * s) % 10) + ((4 * s) % 10) + ((8 * s) % 10) + ((6 * s) % 10)
    num_cycles = math.floor((K - 3) / 4)
    tot = 0
    if K == 2:
        tot = s
    else:
        tot = s + (s % 10) + (c * num_cycles)
        left_over = (K - 3) - (num_cycles * 4)
        p = 2
        for i in range(1, left_over + 1):
            tot += ((p * s) % 10)
            p = ((p * 2) % 10)
    if ((tot % 3) == 0):
        print("YES")
    else:
        print("NO")
