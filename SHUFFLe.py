def isSorted(n):
    flag1 = True
    flag2 = True
    for i in range(1, n + 1):
        if (ar[i] < ar[i - 1]):
            flag1 = False
            break
    if (flag1):
        return True
    for i in range(1, n + 1):
        if (br[i] > br[i - 1]):
            flag2 = False
            break
    return flag2


t = int(input())
for _ in range(t):
    N, K = map(int, input().split())
    A = list(map(int, input().split()))[:N]
    ar = A
    br = A
    for i in range(0, K ):
        v = []
        for j in range(i, N, K):
            v.append(ar[j])
        v.sort()
        idx = 0
        for j in range(i, N, K):
            idx += 1
            ar[j] = v[idx]

    for i in range(0, K ):
        v = []
        for j in range(i, N , K):
            v.append(br[j])
        v.sort(reverse=True)
        idx = 0
        for j in range(i, N, K):
            idx += 1
            br[j] = v[idx]
    if isSorted(N):
        print("yes")
    else:
        print("no")
