T = int(input())
for _ in range(T):
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    B = []
    C = []
    groups = []
    print(f"N={N} K={K} A={A}")
    for _ in range(K):
        groups.append([])
    print(f"groups={groups}")

    for i in range(N):
        key = i % K
        groups[key].append(A[i])
        groups[key].sort()
        print(f"Key={key} {groups[key]}")
    print(f"groups={groups}")
    notPossible = False

    print(f"Lenght of group 0 = {len(groups[0])}")
    for key in range(len(groups[0])):
        B = []
        for g in groups:
            print(f"g={g}")
            if key < len(g):
                B.append(g[key])
                print(f"key={key} B={B}")
            else:
                print("no more elemets")

        C.extend(B)
        print(f"C={C} sortedC={sorted(C)}")

        if sorted(C) != C:
            notPossible = True
            break
    if notPossible:
        print("no")
    else:
        print("yes")
