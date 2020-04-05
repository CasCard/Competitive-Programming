x1V1X2V2 = input().split()

x1 = int(x1V1X2V2[0])

v1 = int(x1V1X2V2[1])

x2 = int(x1V1X2V2[2])
flag=False
v2 = int(x1V1X2V2[3])
for i in range(1000):
    x3 = x1 + ((i - 1) * v1)
    x4 = x2 + ((i - 1) * v2)
    if(x3 == x4):
        flag=True
        break

if(flag):
    print("Yes")
else:
    print("No")





