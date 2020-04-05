# Problem code COVIDLQ
import operator
t=int(input())
def getIndexPositions(listOfElements,element):
    indexPosList = []
    indexPos = 0
    while True:
        try:
            indexPos = listOfElements.index(element, indexPos)
            indexPosList.append(indexPos)
            indexPos += 1
        except ValueError as e:
            break

    return indexPosList
def solve():
    n=int(input())
    numbers=list(map(int,input().split()))[:n]
    numberOfOnes=numbers.count(1)
    actualDistance=6*numberOfOnes-5
    if(len(numbers)<7 and numberOfOnes != 1):
        return "NO"
    elif(numberOfOnes == 1):
        return "YES"
    elif(len(numbers) >= actualDistance):
        res_list = getIndexPositions(numbers,1)
        res = list(map(operator.sub, res_list[1:], res_list[:-1]))
        if(all(i >= 6 for i in res)):
            return "YES"
        else:
            return "NO"
    else:
        return "NO"


for i in range(t):
    ans=solve()
    print(ans)

