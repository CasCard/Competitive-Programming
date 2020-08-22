aD, aM, aY = map(int, input().split())
eD, eM, eY = map(int, input().split())
fine = 0

if aY <= eY:
    fine = 0
elif aY > eY:
    fine = 10000
elif aM != eM:
    fine = 500 * abs(aM - eM)
else:
    fine = 15 * abs(aD - eD)

print(fine)
