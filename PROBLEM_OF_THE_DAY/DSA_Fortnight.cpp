//
// Created by abel_ on 16-07-2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={5,10,15,20,25,30};
    int B = 5;
//  find the maximum of a
    int max = a[0];
    for(int i=1;i<a.size();i++){
        if(a[i] > max){
            max = a[i];
        }
    }
//    check if B is divisible by max-A[i]
    for(int i=0;i<a.size();i++){
        if(B%(max-a[i]) == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    return 0;
}