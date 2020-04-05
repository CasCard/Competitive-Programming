arr=list(map(int,input().rstrip().split()))
sumMin,sumMax=0,0
arr.sort()
for i in range(4):
    sumMin+=arr[i]
    sumMax+=arr[4-i]

print(f"{sumMin} {sumMax}" )


