//
// Created by abel_ on 03-09-2022.
//
#include <bits/stdc++.h>
using namespace std;

void printDuplicates(int arr[],int n){
    unordered_set<int> intSet;
    unordered_set<int> duplicateSet;

    for(int i=0;i<n;i++){
        if(intSet.find(arr[i]) != intSet.end()) {
            intSet.insert(arr[i]);
        }else{
            duplicateSet.insert(arr[i]);
        }
    }

    cout << "Duplicates are : ";
    for(auto it = duplicateSet.begin();it != duplicateSet.end();it++){
        cout << *it << " ";
    }
}

int main(){
    int arr[] = {1,2,3,1,3,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDuplicates(arr,n);
    return 0;
}

