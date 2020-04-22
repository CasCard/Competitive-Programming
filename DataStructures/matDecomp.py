t= int(input())
mod=10**9+7
for _ in range(t):
    N,A= map(int, input().split())
    sum=0
    value=A
    numberOfElements=N*N
    i=1
    while N>0:
        sum=(sum+value**(2*i-1))%(mod)
        value=value**value
        N=N-1
        i+=1
    print(sum%mod)



