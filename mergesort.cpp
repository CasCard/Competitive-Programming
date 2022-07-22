/*
 * Algorithm : Merge Sort
 * Time Complexity : O(n*log(n))
 * Space Complexity : O(n)
 */
#include <bits/stdc++.h>
using namespace std;

void merge(int array[],int left,int mid,int right){

    int subArrayLeft = mid-left+1;
    int subArrayRight = right-mid;
    int leftArray[subArrayLeft];
    int rightArray[subArrayRight];

    for(int i=0;i<subArrayLeft;i++){
        leftArray[i] = array[left+i];
    }
    for(int i=0;i<subArrayRight;i++){
        rightArray[i] = array[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<subArrayLeft && j<subArrayRight){
        if(leftArray[i]<=rightArray[j]){
            array[k] = leftArray[i];
            i++;
        }else{
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i<subArrayLeft){
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while(j<subArrayRight){
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
//    arr:{38,27,43,3,9,82,10} l : 0 r : 7

    if(l>=r){
        return;
    }

    int m =  l + (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);

}





int main(){
    int arr[] = {38,27,43,3,9,82,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}