//
// Created by abel_ on 03-06-2022.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
//   Define the array of integers
    int arr[5] = {64,25, 12, 22, 11};


// start looping from the first element to the last element
    for(int i=0; i<5; i++){
//        take a second pointer to the next element
        for(int j=i+1; j<5; j++){
//            if the first element is greater than the second element
            if(arr[i] > arr[j]){
//                swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}