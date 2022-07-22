//
// Created by abel_ on 06-06-2022.
/*
 * Algorithm : Recursive Bubble Sort
 * Time Complexity : O(n^2)
 * Space Complexity : O(n)
 */
//
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[],int n){
    if (n==1)
        return;

//    The largest element is at moved the end of the array
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

int main(){
    int arr[5] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


}