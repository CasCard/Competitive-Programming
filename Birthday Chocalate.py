def subset_sum(numbers,target,size,partial=[]):
    s=sum(partial)
    possiblePair=[]
    if (s==target and len(partial)==size):
        print("Sum(%s)==%s"%(partial,target))
        possiblePair.append(partial)
    if s>= target:
        return
    for i in range(len(numbers)):
        n=numbers[i]
        remaining=numbers[i+1:]
        subset_sum(remaining,target,size,partial+[n])

ans=subset_sum([1,2,1,3,2],3,2)
print(ans)