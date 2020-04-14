import numpy as np
def maxspeed(arr):
    if len(arr)==1:
        return 1
    oldList=arr.copy()
    for i in range(len(arr)-1):
        if(arr[i]<arr[i+1]):
            arr[i+1]=arr[i]
    maxSpeedCount =np.subtract(oldList,arr)
    return np.count_nonzero(maxSpeedCount==0)

t=int(input())
for _ in range(t):
    numberOfCars= int(input())
    carList= list(map(int, input().split()))[:numberOfCars]
    print(maxspeed(carList))
