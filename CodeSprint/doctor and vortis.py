n, q = map(int, input().split())
a = list(map(int, input().split()))[:n]


def maxConsecutiveOnes(x):
    count = 0
    while (x != 0):
        x = (x & (x << 1))
        count = count + 1

    return count


countList = []
for i in range(n):
    ans = maxConsecutiveOnes(a[i])
    if ans >= 2:
        countList.append(1)
    else:
        countList.append(0)

print(countList)
ans = []
for _ in range(q):
    l, r = map(int, input().split())

    ans.append(sum(countList[l - 1:r]))
print(*ans, sep="\n")
