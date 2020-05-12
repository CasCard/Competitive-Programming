t = int(input())
for _ in range(t):
    n, r = map(int, input().split())
    x = list(map(int, input().split()))[:n]
    x.sort()
    print(x, r)
    diffList = []
    for i in range(n - 1):
        diff = x[i + 1] - x[i]
        diffList.append(diff)
    print(diffList)
    
