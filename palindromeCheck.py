t = int(input())
for i in range(t):
    S = input()
    S.lower()
    if(len(S)%2 ==0):
        firstPart=S[:int((len(S) / 2))]
        secondPart=S[int((len(S) / 2)):]

    else:
        firstPart=S[:int((len(S) / 2))]
        secondPart=S[int((len(S) / 2)) + 1:]
    secondPart=str(sorted(secondPart))
    firstPart=str(sorted(firstPart))
    if(firstPart==secondPart):
        print("YES")
    else:
        print("NO")


