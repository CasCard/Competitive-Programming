
T = int(input())
while(T):
    N = int(input())
    array = [i^j for i in range(1,N+1) for j in range(1,N+1)]
    print(array)
    T = T - 1
