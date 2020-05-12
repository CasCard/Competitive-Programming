try:
    t = int(input())
    for _ in range(t):
        n = input()
        print(n)
        top = -1
        l = []
        c = 0
        f = 0
        for i in range(len(n)):
            if (n[i] == "<"):
                top += 1
                l.append(i)
            else:
                if (len(l) > 0):
                    del l[top]
                    top -= 1
                    if (len(l) == 0):
                        c = (i + 1)
                else:
                    f = 1
                    break

        print(c)
except Exception:
    pass