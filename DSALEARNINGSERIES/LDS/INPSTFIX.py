n= int(input())
array=[]
for _ in range(n):
    x,h1 = map(int, input().split())
    array.append((x,h1))

q=int(input())
query=[]
for _ in range(q):
    l,r,h2=map(int, input().split())
    query.append((l,r,h2))


# print(n,array,q,query)
arraySize = n

for i in range(q):
    count=0
    j = 0
    while(j<arraySize):
        if array[j][1] == query[i][2]:
            if (query[i][0] <= array[j][0]) and (array[j][0] <=query[i][1]):
                count=count+1
                array.pop(j)
                arraySize=arraySize-1
                j=j-1
        j=j+1
        # print(array)
    print(count)


