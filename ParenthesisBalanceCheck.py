# First we scan string from left to right
opening = set('([{')
matches = {('(', ')'), ('[', ']'), ('{', '}')}

def balance_check(s):
    if len(s) % 2 != 0:
        return False

    stack = []
    for paren in s:
        # Every time we see an opening parentheses we push it to a stack
        # We want last opening parenthesis to be closed first_p
        # LAST IN FIRST OUT
        if paren in opening:
            stack.append(paren)
            print(stack)
        else:
            if len(stack) == 0:
                return False
            last_open = stack.pop()
            if (last_open, paren) not in matches:
                return False

    return len(stack) == 0

print(balance_check('[](){([[]])}'))
