def f(s):
    remainingChanceB = len(s) // 2
    remainingChanceA = len(s) // 2
    scoreA = 0
    scoreB = 0
    for i in range(len(s)):
        if i % 2 == 0:
            scoreA += int(s[i])
            remainingChanceA -= 1
        else:
            scoreB += int(s[i])
            remainingChanceB -= 1
        diff = scoreA - scoreB
        if diff > 0 and remainingChanceB < diff:
            return i + 1
        if diff < 0 and remainingChanceA < abs(diff):
            return i + 1
    return i + 1


t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    print(f(s))
