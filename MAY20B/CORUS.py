from collections import OrderedDict

MAX_CHAR = 26


def runLenghtEncoding(string):
    dict = OrderedDict.fromkeys(string, 0)
    for ch in string:
        dict[ch] += 1
    return dict


for _ in range(int(input())):
    n, q = map(int, input().split())
    s = input()
    # print(s)
    dictionary = runLenghtEncoding(s)
    query = [0] * q
    answer = [0] * q
    for i in range(q):
        query[i] = int(input())

    for i in range(len(query)):
        minQ = 0
        for key, value in dictionary.items():
            if value >= query[i]:
                minQ += (value - query[i])
        print(minQ)
