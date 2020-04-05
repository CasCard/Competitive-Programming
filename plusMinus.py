def plusMinus(arr):
    positive, negative, zeros = 0,0,0
    for i in range(n):
        if (arr[i] > 0):
            positive += 1
        elif (arr[i] < 0):
            negative += 1
        else:
            zeros += 1

    print(positive / n)
    print(negative / n)
    print(zeros / n)

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)