from itertools import combinations


class Difference:
    def __init__(self, a):
        self.__elements = a
        self.maximumDifference=0

    def computeDifference(self):
        arr = []
        comb = combinations(self.__elements, 2)
        for i in list(comb):
            arr.append(abs(i[0] - i[1]))
        self.maximumDifference = max(arr)



# Add your code here


# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)
