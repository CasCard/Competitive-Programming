T = int(input())
for _ in range(T):
    G = int(input())
    for _ in range(G):
        I, N, Q = map(int, input().split())
        head = 0
        tail = 0
        if (N % 2 == 0):
            head = N / 2
            tail = N / 2
        else:
            if (I == 1):
                tail = ((N - 1) / 2) + 1
                head = N - tail
            else:
                head = ((N - 1) / 2) + 1
                tail = N - head
        if (Q == 2):
            value = tail
        else:
            value = head
        print(int(value))
