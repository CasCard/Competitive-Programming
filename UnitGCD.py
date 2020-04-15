T = int(input())
for _ in range(T):
    numberOfPages = int(input())
    if numberOfPages == 1:
        print("1")
        print("1 1")
    else:
        print(numberOfPages // 2)
        if numberOfPages & 1:
            print("3 1 2", numberOfPages)
        else:
            print("2 1 2")
        for i in range(4, numberOfPages + 1, 2):
            print("2", i - 1, i)
