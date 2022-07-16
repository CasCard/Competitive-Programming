//
// Created by abel_ on 04-07-2022.
//
#include <bits/stdc++.h>
using namespace std;

class Heap{
public:
    int arr[100];
    int size;

    Heap(){
        size = 0;
        arr[0] = -1;
    }

    void insert(int value) {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else return;
        }
    }

    void printHeap(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap() {
        if (size == 0) cout << "Nothing to delete";

        arr[1] = arr[size];
        size--;

        int index = 1;
        while (index < size) {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            if (leftIndex < size && arr[leftIndex] > arr[index]) {
                swap(arr[leftIndex], arr[index]);
                index = leftIndex;
            } else if (rightIndex < size && arr[rightIndex] > arr[index]) {
                swap(arr[rightIndex], arr[index]);
                index = rightIndex;
            } else return;
        }
    }
};


int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.printHeap();
    h.deleteFromHeap();
    h.printHeap();
    return 0;
}
