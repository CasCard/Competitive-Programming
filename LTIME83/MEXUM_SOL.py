T = int(input())

for t in range(T):

    n = int(input())

    values = list(map(int, input().split()))

    # Freq array of each no
    occ = [0] * (n + 2)
    print(f"n={n} values={values} occ={occ}")
    for i in values:
        if i <= n + 1:
            occ[i] += 1
    print(f"occ={occ}")

    mod = 998244353
    ans = 0

    # Freq sum array

    p1 = [0] * (n + 2)
    print(f"frequency sum arrayBefore={p1}")
    for i in range(1, n + 2):
        p1[i] = p1[i - 1] + occ[i]

    print(f"frequency sum arrayAfter={p1}")

    # Calculate 2^(n-remaining-same)
    power_p1 = [1] * (n + 2)
    print(f"power P1/P2={power_p1}")

    # Calculate (2^x1 - 1)*(2^x2 - 1)
    power_p2 = [1] * (n + 2)

    for i in range(1, n + 2):
        power_p1[i] = pow(2, n - p1[i], mod)
    print(f"power_p1={power_p1}")

    for i in range(2, n + 2):
        power_p2[i] = (power_p2[i - 1] * (pow(2, occ[i - 1], mod) - 1)) % mod

    print(f"power_P2={power_p2}")

    print(occ[1:], p1[1:], power_p1[1:],power_p2[1:])

    ans = 0
    for i in range(1, n + 2):
        ans = (ans + (((power_p1[i] * power_p2[i]) % mod) * i) % mod) % mod

    print(ans)
