# number of elements
n = int(input())
x = []
# taking three inputs at a time
# Algo
product = 1
productArray = []
productMaxArray = []
findNumberMaxArray=[]


def Product(x):
    prod = 1
    while (x):
        prod *= (x % 10)
        x //= 10

    return prod

def findNumber(l,r):
    a = str(l)
    b = str(r)

    # Let the current answer be r
    ans = r

    for i in range(len(b)):
        if (b[i] == '0'):
            continue

        # Stores the current number having
        # current digit one less than current
        # digit in b
        curr = list(b)
        curr[i] = str(((ord(curr[i]) -
                        ord('0')) - 1) + ord('0'))

        # Replace all following digits with 9
        # to maximise the product
        for j in range(i + 1, len(curr)):
            curr[j] = str(ord('9'))

            # Convert string to number
        num = 0
        for c in curr:
            num = num * 10 + (int(c) - ord('0'))

            # Check if it lies in range and its
        # product is greater than max product
        if (num >= l and Product(ans) < Product(num)):
            ans = num

    return ans


# x=[1,99,1]
# for i in range(x[0],x[1]+1):
#     if(i%x[2]==0):
#         while(i !=0):
#             product=product*(i%10)
#             i=i // 10
#         productArray.append(product)
#         product=1

# print(max(productArray))

for i in range(0, n):
    x.append([int(x) for x in input().split()])

for j in range(n):
    for k in range(x[j][0], x[j][1] + 1):
        if (k % x[j][2] == 0):
            while (k != 0):
                product = product * (k % 10)
                k = k // 10

            productArray.append(product)
            product = 1
    productMaxArray.append(max(productArray))
    findNumberMaxArray.append(findNumber(x[j][0], x[j][1]))
    productArray = []


for a in range(len(productMaxArray)):
    if(productMaxArray[a] != 0):
        print(f'{productMaxArray[a]} {findNumberMaxArray[a]}')
    else:
        productMaxArray[a] = -1
        print(f'{productMaxArray[a]}')



