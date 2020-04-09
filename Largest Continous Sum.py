def large_cont_sum(arr):
    if len(arr)==0:
        return 0
    max_num=summation=arr[0]
    for n in arr[1:]:
        summation=max(summation+n,n)
        max_num=max(summation,max_num)
    return max_num
    pass


result=large_cont_sum([1,2,-1,3,4,10,10,-10,-1])
print(result)

from nose.tools import assert_equal


class LargeContTest(object):
    def test(self, sol):
        assert_equal(sol([1, 2, -1, 3, 4, -1]), 9)
        assert_equal(sol([1, 2, -1, 3, 4, 10, 10, -10, -1]), 29)
        assert_equal(sol([-1, 1]), 1)
        print('ALL TEST CASES PASSED')


# Run Test
t = LargeContTest()
t.test(large_cont_sum)

