//
// Created by abel_ on 15-07-2022.
//
#include <bits/stdc++.h>
using namespace std;

int getSum(int BITree[], int index){
    int sum = 0;
    while(index > 0){
        sum += BITree[index];
        index -= (index & (-index));
    }
    return sum;
}

void updateBIT(int BITree[],int n,int index,int val){
    index = index + 1;
    while(index <= n){
        BITree[index] += val;
        index += index & (-index);
    }
}

int *constructBITree(int arr[],int n){
    int *BITree = new int[n+1];
    for(int i=1;i<n;i++){
        updateBIT(BITree,n,i,arr[i]);
    }
    return BITree;
}

int main(){
    int freq[] = {2,1,1,3,2,3,4,5,6,7,8,9};
    int n = sizeof(freq)/sizeof(freq[0]);
//    print the freq array
    for(int i=0;i<n;i++){
        cout << freq[i] << " ";
    }
    cout << endl;
    int *BITree = constructBITree(freq,n);
//    print the BITree array
    cout << getSum(BITree,5) << endl;

    freq[3] += 6;
    cout<<"After updating freq[3] :"<<freq[3]<<endl;
    for(int i=0;i<n;i++){
        cout << freq[i] << " ";
    }
    cout << endl;
    updateBIT(BITree,n,3,6);
    cout <<"Sum till 5 :"<< getSum(BITree,5) << endl;
    return 0;
}