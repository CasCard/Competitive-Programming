
t=int(input())

def balance_check(s):
    count = 0
    x=0

    for i in range(len(s)):
        if s[i] == '<':
            x=x+1
        else:
            x=x-1
            if x<0:
                break

        if x==0:
            count = i+1

    return count

for _ in range(t):
    pattern = list(input())
    ans=balance_check(pattern)
    print(ans)
