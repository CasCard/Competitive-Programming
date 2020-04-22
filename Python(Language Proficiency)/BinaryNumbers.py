#
n = int(input())
ans = 0
while n>0 :
    print(f'{n} {n << 1} {n&(n<<1)}')
    n = n&(n<<1)
    ans += 1
print(ans)