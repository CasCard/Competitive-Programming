# basic recursion based coin change Problem
def rec_coin(target, coins):
    min_coins = target
    if target in coins:
        return 1
    else:
        for i in [c for c in coins if c <= target]:
            num_coins = 1 + rec_coin(target - i, coins)
            if num_coins < min_coins:
                min_coins = num_coins

    return min_coins


# print(rec_coin(13, [1, 5, 10, 25]))


def rec_coin_dynam(target, coins, known_results):
    min_coins = target
    if target in coins:
        known_results[target] = 1
        return 1
    elif known_results[target] > 0:
        return known_results[target]
    else:
        for i in [c for c in coins if c <= target]:

            num_coins = 1 + rec_coin_dynam(target - i, coins, known_results)
            if num_coins < min_coins:
                min_coins = num_coins
                known_results[target] = min_coins
            print(known_results)

    return min_coins


change = 11
coinSet = [1, 5, 10, 25]
nullSet = [0] * (change + 1)
print(rec_coin_dynam(change, coinSet, nullSet))
