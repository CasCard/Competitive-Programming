//
// Created by abel_ on 03-06-2022.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
//   Define the array of integers
    int arr[5] = {64, 25, 12, 22, 11};
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}