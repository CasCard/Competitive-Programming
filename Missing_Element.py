from nose.tools import assert_equal
def finder(arr1,arr2):
    num=0
    for n in arr1:
        num+=n
    for n in arr2:
        num -= n
    return num
    pass

arr1=[1,2,3,4,5,6,7]
arr2=[3,7,2,1,4,6]
result=finder(arr1,arr2)
print(result)

class TestFinder(object):
    def test(self,sol):
        assert_equal(sol([5, 5, 7, 7], [5, 7, 7]), 5)
        assert_equal(sol([1, 2, 3, 4, 5, 6, 7], [3, 7, 2, 1, 4, 6]), 5)
        assert_equal(sol([9, 8, 7, 6, 5, 4, 3, 2, 1], [9, 8, 7, 5, 4, 3, 2, 1]), 6)
        print('ALL TEST CASES PASSED')


t=TestFinder()
t.test(finder)