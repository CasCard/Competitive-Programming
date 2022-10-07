//
// Created by abel_ on 22-09-2022.
//

#include <bits/stdc++.h>

using namespace std;

int partition(int *arr, int start, int end){
    int pivot = arr[end];
// generate a random pivot
//    int pivot = start + rand() % (end - start + 1);
//    cout << "pivot: " << pivot << endl;
    int pIndex = start;
    for(int i = start ; i < end ; i++){
        if(arr[i] <= pivot){
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[end]);
    return pIndex;
}

void quick_sort(int *arr , int left, int right){
    if(left >= right) return;
    int partition_index = partition(arr,left,right);
    quick_sort(arr,left,partition_index-1);
    quick_sort(arr,partition_index+1,right);
}

int main(){
    int arr[] = {5,4,8,7,9,10,12,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

