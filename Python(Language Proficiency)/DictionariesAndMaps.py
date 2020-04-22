N = int(input())
d = dict(input().split() for _ in range(N))
d = {k.lower(): v for k, v in d.items()}


def checkKey(dict, key):
    if key in dict.keys():
        print(f"{key}={dict[key]}")
    else:
        print("Not found")


for j in range(N):
    query = input()
    checkKey(d, query)
