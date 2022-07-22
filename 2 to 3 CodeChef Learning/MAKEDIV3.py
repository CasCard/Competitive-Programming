t = int(input())
for _ in range(t):
    n = int(input())
    for number in range(10 ** (n - 1), 10 ** n):
        if number % 2 == 1 and number % 3 == 0 and number % 9 != 0:
            print(number)
            break

