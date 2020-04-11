t = int(input())
for i in range(t):
    reverse = 0
    N = int(input())
    while N>0:
        reverse=(reverse*10)+(N%10)
        N=int(N/10)
    print(reverse)