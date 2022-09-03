//
// Created by abel_ on 03-09-2022.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}

int containsDuplicates(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize-1;i++){
        if(nums[i] == nums[i+1]){
            return 1;
        }
    }
    return 0;

}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(containsDuplicates(arr,n)){
        printf("Array contains duplicates");
    }else{
        printf("Array does not contain duplicates");
    }
    return 0;
}