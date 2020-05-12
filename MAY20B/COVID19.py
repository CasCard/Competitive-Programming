t = int(input())
for _ in range(t):
    minInfected, maxInfected = 1, 1
    n = int(input())
    x = list(map(int, input().split()))[:n]
    # print(f"n={n} x={x}")
    countList = []
    count = 0
    for i in range(1, len(x)):
        diff = abs(x[i] - x[i - 1])
        if diff < 3:
            count += 1
        countList.append(count)
        count = 0
    minInfected = 0
    maxInfected = 0
    maxInfectedList = []
    minInfectedList = []
    if countList[0] == 0 or countList[-1] == 0:
        minInfected = 1
    else:
        for i in range(len(countList)):
            if countList[i] == 0:
                minInfected += 1
                if i == (len(countList) - 1):
                    minInfectedList.append(minInfected)
            else:
                minInfectedList.append(minInfected)
                minInfected = 0

    for i in range(len(countList)):
        if countList[i]:
            maxInfected += 1
            if i == (len(countList) - 1):
                maxInfectedList.append(maxInfected)
        else:
            maxInfectedList.append(maxInfected)
            maxInfected = 0
    # print(countList)
    maxPossibleInfection = max(maxInfectedList) + 1
    # print(maxInfectedList)
    # print(minInfectedList)

    if len(minInfectedList) != 0:
        if max(minInfectedList) >= 2:
            minInfected = 1
        else:
            minInfected = min(maxInfectedList) + 1
    elif minInfected == 1:
        minInfected = 1
    else:
        minInfected = min(maxInfectedList) + 1

    print(minInfected, maxPossibleInfection)
