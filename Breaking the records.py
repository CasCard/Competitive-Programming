def breakingRecords(scores):
    Minimun = []
    Maximum = []
    Minimun.append(scores[0])
    Maximum.append(scores[0])
    Min = 0
    Max = 0
    for i in range(1, len(scores)):
        if (scores[i] < Minimun[i - 1] and scores[i] < Maximum[i - 1]):
            Minimun.append(scores[i])
            Maximum.append(Maximum[i - 1])
            Min += 1
        elif (scores[i] > Minimun[i - 1] and scores[i]>Maximum[i-1]):
            Minimun.append(Minimun[i - 1])
            Maximum.append(scores[i])
            Max += 1
        else:
            Maximum.append(Maximum[i - 1])
            Minimun.append(Minimun[i - 1])

    # print(Minimun)
    # print(Maximum)
    return "{} {}".format(Max, Min)


n = int(input())
scores = list(map(int, input().rstrip().split()))
result = breakingRecords(scores)
print(result)
