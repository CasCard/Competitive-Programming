st = input().split()
s = int(st[0])
t = int(st[1])
ab = input().split()
a = int(ab[0])
b = int(ab[1])
mn = input().split()
m = int(mn[0])
n = int(mn[1])
appleInHouse=0
orangeInHouse=0
apples = list(map(int, input().rstrip().split()))
oranges = list(map(int, input().rstrip().split()))
appleSet=list(map(lambda x : x+a ,apples))
orangeSet=list(map(lambda x : x+b ,oranges))

for i in range(m):
    if(appleSet[i] >= s and appleSet[i] <= t):
        appleInHouse+=1

for j in range(n):
    if (orangeSet[j] >= s and orangeSet[j] <= t):
        orangeInHouse += 1

print(appleInHouse)
print(orangeInHouse)