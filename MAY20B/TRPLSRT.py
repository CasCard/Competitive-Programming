
import copy
t = int(input())
for _ in range(t):
    n, K = map(int, input().split())
    p = list(map(int, input().split()))
    print(f"input={p}")
    originalSorted = sorted(p)
    print(f"sorted p={originalSorted}")
    if p == originalSorted:
        print(0)
    else:
        indexList = []
        count = 0
        sortedList = copy.deepcopy(p)
        flag = 0
        for i in range(len(p)):
            if p[i] == (i + 1):
                continue
            if flag:
                break
            for j in range(i + 1, len(p)):
                if p[j] == (j + 1):
                    continue

                if flag:
                    break

                for k in range(j + 1, len(p)):
                    if (p[i] > p[j] > p[k]):
                        continue
                    values = [p[i], p[j], p[k]]
                    indices = [p.index(p[i]) + 1, p.index(p[j]) + 1, p.index(p[k]) + 1]
                    print(values, indices)
                    if (values[0] > values[1] < values[2] < values[0]) or (
                            values[0] < values[1] > values[2] < values[0]):
                        values.sort()
                        indices.sort()
                        if values == indices:
                            # print(indices)
                            indexList.append(indices)
                            sortedList[i] = values[0]
                            sortedList[j] = values[1]
                            sortedList[k] = values[2]
                            count += 1

                    if (sortedList == originalSorted) and len(indexList) <= K:
                        flag = 1
                        break
                    elif len(indexList) > K:
                        flag = 1
                        count = -1
                        break
                    else:
                        continue

        if count == -1:
            print(-1)
        elif sortedList != originalSorted:
            print(-1)
        else:
            print(count)
            for ind in indexList:
                print(*ind)
            # print(sortedList)
