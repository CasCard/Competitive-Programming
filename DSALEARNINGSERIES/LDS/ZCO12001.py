import math
t = int(input())
bracketArray=list(input().split())
count=0
maximum = -math.inf
position=-1
maximumLength=-math.inf
maximumPosition=-1
cursor=-1
countArray = 0
for i in range(t):

    if bracketArray[i] == '1':
        count = count+1
    else:
        count = count-1

    if count > maximum:
        maximum=count
        position = i+1

    if bracketArray[i] == '1':
        cursor = cursor+1
        countArray = countArray+1
        if cursor == -1:
            if countArray>maximumLength:
                maximumLength=countArray
                maximumPosition=((i+1)-maximumLength)+1
            countArray = 0
    else:
        cursor = cursor-1
        countArray=countArray+1
        if cursor == -1:
            if countArray>maximumLength:
                maximumLength=countArray
                maximumPosition = ((i+1)-maximumLength)+1
            countArray = 0
    # print(maximumLength)

print(maximum,position,maximumLength,maximumPosition)

