mod=10**9+7
t = int(input())
for _ in range(t):
    N, Q = map(int, input().split())
    if(Q>=1):
        arr=[0]*Q*2
        for i in range(0, Q * 2, 2):
            arr[i], arr[i + 1] = map(int, input().split())
        diff=arr[0]-0
        for j in range(0,Q*2-1):
            diff=diff+abs(arr[j]-arr[j+1])
        print(diff%mod)
    else:
        print(0)
