//
// Created by abel_ on 10-09-2022.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int myInts[] = {10,20,30,40};
    int *p ;

    p = find(myInts,myInts+4,30);
    if (p != myInts+4){
        cout << "Element found in myInts: " << *p << endl;
    }else{
        cout << "Element not found in myInts" << endl;
    }

    vector<int> myVector(myInts,myInts+4);
    vector<int>::iterator it;

    it = find(myVector.begin(),myVector.end(),30);
    if (it != myVector.end()){
        cout << "Element found in myVector: " << *it << endl;
    }else{
        cout << "Element not found in myVector" << endl;
    }
    return 0;
}