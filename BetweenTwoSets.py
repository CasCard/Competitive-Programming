from math import gcd
N,M=map(int, input().split())
a=list(map(int,input().split()))[:N]
b=list(map(int,input().split()))[:M]

def gettotalx(a, b):
    lcm_num = a[0]
    gcd_num = b[0]
    if len(a) > 1:
        for x in range(1, len(a)):
            lcm_num = (lcm_num * a[x]) / gcd(lcm_num, a[x])
    if len(b) > 1:
        for x in range(1, len(b)):
            gcd_num = gcd(gcd_num, b[x])
    count=0
    for x in range(int(lcm_num), gcd_num + 1, int(lcm_num)):
        if gcd(x, gcd_num) == x:
            count += 1
    return count

count=gettotalx(a,b)
print(count)