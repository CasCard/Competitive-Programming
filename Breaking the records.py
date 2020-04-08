def breakingRecords(scores):
    Minimun = scores[0]
    Maximum = scores[0]
    Min = 0
    Max = 0
    for score in scores:
        if score < 0:
            return False
    for i in range(1, len(scores)):
        if (scores[i] < Minimun and scores[i] < Maximum):
            Minimun = scores[i]
            Min += 1
        elif (scores[i] > Minimun and scores[i] > Maximum):
            Maximum = scores[i]
            Max += 1
        else:
            continue

    # print(Minimun)
    # print(Maximum)
    return [Max,Min]


n = int(input())
scores = list(map(int, input().rstrip().split()))
result = breakingRecords(scores)
print(result)
