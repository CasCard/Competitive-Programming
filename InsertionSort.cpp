//
// Created by abel_ on 06-06-2022.
//
/*
 * Algorithm : Insertion Sort
 * Time Complexity : O(n^2)
 * Space Complexity : O(1)
 */
#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = { 8,2,4,1,3};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}