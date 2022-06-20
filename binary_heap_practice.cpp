//
// Created by abel_ on 14-06-2022.
//
#include<bits/stdc++.h>
using namespace std;

int parent(int i){
    int parent = (i-1)/2;
    return parent;
}

void insertKey(int arr[],int )

int main(){
    int arr[5] = {64,25,12,22,11};

    while(
            arr[i]<arr[parent(i)]){
        swap(arr[i],arr[parent(i)]);
        i = parent(i);
    }

    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}