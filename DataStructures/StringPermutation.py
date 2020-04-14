def premute(s):
    out = []
    if len(s) == 1:
        out = [s]
        print(out)
    else:
        for i, let in enumerate(s):
            print(f'1:{i}:{let}')
            for perm in premute(s[:i] + s[i + 1:]):
                out += [let + perm]
                print(f'2:{let}:{perm}:/{s[:i]}/:/{s[i + 1:]}/:({s[:i] + s[i + 1:]}):{out}')

    return out


print(premute('abc'))
s = 'abc'
# print(s[:0]+s[1:])
# print(s[:1]+s[2:])
# print(s[:2]+s[3:])
# # s=['abc']
# for i,let in enumerate(s):
#     print(f'{i},{let}')
