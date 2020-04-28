t = int(input())
for _ in range(t):
    N = int(input())
    goals = input()[:2 * N]
    scoreA = 0
    scoreB = 0
    remainingChanceA=N
    remainingChanceB=N
    diff=0
    for i in range(0, len(goals)):
        if (i % 2 == 0):
            scoreA += int(goals[i])
            remainingChanceA-=1
        else:
            scoreB += int(goals[i])
            remainingChanceB-=1
        diff=scoreA-scoreB
        if diff>0 and remainingChanceB<diff:
            print(i+1)
            break
        if (remainingChanceB < abs(scoreB - scoreA)):
            break
    print(length)
