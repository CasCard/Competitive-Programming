t = int(input())


def CountFrequency(my_list):
    freq = {}
    arr = []
    for item in my_list:
        if (item in freq):
            freq[item] += 1
        else:
            freq[item] = 1
    return freq


for _ in range(t):
    N = int(input())
    A = list(map(int, input().split()))
    if (len(set(A)) == 1):
        print(A[0])
    else:
        countList = list(set(A))
        numberofDishesDictionary = {}
        for i in range(len(countList)):
            numberofDishes = 0
            firstValue = False
            for j in range(len(A)):
                if (A[j] == countList[i] and firstValue == False):
                    firstValue = True
                    firstIndex = j
                if (A[j] == countList[i] and firstValue == True):
                    diff = j - firstIndex
                    if diff >= 2:
                        firstIndex = j
                        numberofDishes += 1
            numberofDishesDictionary.__setitem__(countList[i], numberofDishes)

        keys = list(numberofDishesDictionary.keys())
        value = list(numberofDishesDictionary.values())
        maxValue = max(value)
        result = []
        for a, d in numberofDishesDictionary.items():
            if d == maxValue:
                result.append(a)
        print(min(result))
