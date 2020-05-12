t = int(input())
opening = set('<')
match = {('<', '>')}
for _ in range(t):
    pattern = input()
    print(pattern)
    stack = []
    count = 0
    for p in pattern:
        if p in opening:
            stack.append(p)
            # print(stack)
        else:
            if len(stack) != 0:
                last_open = stack.pop()
                # print(last_open,p)
                if (last_open, p) in match:
                    count += 1
                else:
                    break
            else:
                break
    print(count * 2)
