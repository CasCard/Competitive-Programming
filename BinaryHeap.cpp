//
// Created by abel_ on 14-06-2022.
//
#include<bits/stdc++.h>
using namespace std;



void _siftup(int i,int arr[]){
    int parent = (i-1)/2;
    while(i!=0 && arr[i]<arr[parent]){
        swap(arr[i],arr[parent]);
        i = parent;
        parent = (i-1)/2;
    }

}

void _siftdown(int i,int arr[]) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int len_arr = sizeof(arr) / sizeof(arr[0]);
    while ((left < len_arr && arr[i] > arr[left]) or
           (right < len_arr && arr[i] > arr[right])) {

        if (right >= len_arr or arr[left] < arr[right]) {
            swap(arr[i], arr[left]);
            i = left;
        } else {
            swap(arr[i], arr[right]);
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }
}

void insert(int element,int arr[]) {
    int len_arr = sizeof(arr) / sizeof(arr[0]);
    arr[len_arr] = element;
    _siftup(len_arr,arr);
}

int getMin(int arr[]) {
    return arr[0];
}

int extractMin(int arr[]) {
    int len_arr = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    swap(arr[0], arr[len_arr-1]);
    arr[len_arr-1] = 0;
    _siftdown(0,arr);
    return min;
}

void update_by_index(int index,int element,int arr[]) {
    int old = arr[index];
    arr[index] = element;
    if(old<element){
        _siftup(index,arr);
    }else{
        _siftdown(index,arr);
    }
}

void update(int old,int element,int arr[]) {
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==old){
            update_by_index(i,element,arr);
            break;
        }
    }
}

void heapify(int *arr[]) {
    for(int i=sizeof(arr)/sizeof(arr[0])-1;i>=0;i--){
        _siftdown(i,*arr);
    }
}



int main(){
    int arr[14]={9,11,18,13,15,14,
                 7,8,12,10,4,6,3};

//    print array
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    heapify(arr);

//    print array
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}


