T = int(input())
for _ in range(T):
    success = 0
    N = int(input())
    g_revolution = list(map(int, input().split()))[:N]
    all_starz = list(map(int, input().split()))[:N]
    g_revolution.sort()
    all_starz.sort()
    j = 0
    for i in range(len(g_revolution)):
        if (g_revolution[i] > all_starz[j]):
            success += 1
            j += 1
        else:
            continue
    print(success)
