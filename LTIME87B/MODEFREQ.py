import math
t=int(input())

def CountFrequency(my_list):
    count={}
    for i in my_list:
        count[i] = count.get(i,0)+1
    return count

for _ in range(t):
    n=int(input())
    a=list(map(int, input().split(' ')[:n]))
    dictionary=CountFrequency(a)
    # print(n)
    # print(a)
    occurrences=list(dictionary.values())
    # print(occurrences)
    occurrencesCount=CountFrequency(occurrences)
    # print(occurrencesCount)
    # print(max(occurrencesCount))
    lengthOfDict=len(occurrencesCount)
    maxCount=max(occurrencesCount.values())
    # print(lengthOfDict,maxCount)
    min=math.inf
    for key,value in occurrencesCount.items():
        # print(key,value)
        if value == maxCount:
            if key<min:
                min=key
                
    print(min)
                



