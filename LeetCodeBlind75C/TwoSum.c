//
// Created by abel_ on 03-09-2022.
//

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result = (int *)malloc(2 * sizeof(int));
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return result;
}


int main() {
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int returnSize;
    int *result = twoSum(arr,n,target,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d ",result[i]);
    }
    return 0;
}

