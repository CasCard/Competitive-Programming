t = int(input())


def left(L):
    return L[1:] + L[:1]


def right(R):
    return R[-1] + R[:len(R) - 1]


for _ in range(t):
    s = input()
    s.lower()
    L = left(s)
    R = right(s)
    if (L == R):
        print("YES")
    else:
        print("NO")
