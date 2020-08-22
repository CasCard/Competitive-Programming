t=int(input())
for _ in range(t):
    max=0
    n,k=map(int, input().split())
    for a in range(1,n+1):
        for b in range(1,a):
            if a&b > max and a&b<k:
                max=a&b
                if max == k-1:
                    break
    print(max)
