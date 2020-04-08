from sys import stdin
test = int(stdin.readline())
for _ in range(test):
    N, M = map(int, stdin.readline().split())
    mat = []
    for i in range(N):
        mat.append(list(stdin.readline().strip().split()))
    print(mat)
    first_p, sx, sy, dx, dy = False, 0, 0, 0, 0
    s_and_d = []
    for i in range(N):
        start = False
        temp_s, temp_d = -1, -1
        for j in range(M):
            if mat[i][j] == "P":
                if not start:
                    start = True
                    temp_s = j
                temp_d = j
        s_and_d.append([temp_s, temp_d])
        if start:
            if i % 2:
                dx, dy = i, temp_d
            else:
                dx, dy = i, temp_s
            if not first_p:
                first_p = True
                if i % 2:
                    sx, sy = i, temp_d
                else:
                    sx, sy = i, temp_s
    steps = 0
    cy = sy
    if not first_p:
        print(0)
        continue
    if N == 1:
        print(s_and_d[0][1] - s_and_d[0][0])
        continue
    for i in range(sx, N - 1):
        l, r, nl, nr = s_and_d[i][0], s_and_d[i][1], s_and_d[i + 1][0], s_and_d[i + 1][1]
        steps += r - l
        if i % 2:
            if l != -1:
                cy = l
            if nl != -1:
                steps += abs(cy - nl)
                cy = nl
        else:
            if r != -1:
                cy = r
            if nr != -1:
                steps += abs(nr - cy)
                cy = nr
    steps += s_and_d[-1][1] - s_and_d[-1][0]
    steps += dx - sx
    print(steps)
