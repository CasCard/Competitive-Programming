N=int(input())
priceList=[]
for i in range(N):
    value=int(input())
    priceList.append(value)


numberOfElements=len(priceList)
priceList.sort(reverse=True)
previousProduct=priceList[0]
for i in range(0,numberOfElements):
    newProduct=(i+1)*priceList[i]
    if(newProduct>=previousProduct):
        previousProduct=newProduct

print(previousProduct)







