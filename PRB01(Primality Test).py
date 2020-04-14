# Theory of primality
# (a,b) divisor of a number
# a<sqrt(N) and b>sqrt(N) Time Complexity is O(sqrt(N))

t=int(input())
def isPrime(n):
    if(n==1):return False
    i = 2
    while i * i < N:
        if (N % i == 0):
            return False
        i += 1
    return True

for _ in range(t):
    N=int(input())
    ans=isPrime(N)
    if ans:
        print("yes")
    else:
        print("no")



