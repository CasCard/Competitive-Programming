t = int(input())
for _ in range(t):
    laddu = 0
    activities, origin = map(str, input().split())
    for _ in range(int(activities)):
        activityInput = input()
        if activityInput == 'TOP_CONTRIBUTOR':
            laddu += 300
        if activityInput == 'CONTEST_HOSTED':
            laddu += 50
        if activityInput.split()[0] == 'CONTEST_WON':
            if 1 <= int(activityInput.split()[1]) <= 20:
                laddu += (320 - int(activityInput.split()[1]))
            else:
                laddu += 300
        if activityInput.split()[0] == 'BUG_FOUND' and 50 <= int(activityInput.split()[1]) <= 1000:
            laddu += int(activityInput.split()[1])
    if (origin == 'INDIAN'):
        numberOfMonth = laddu // 200
    else:
        numberOfMonth = laddu // 400
    print(numberOfMonth)
