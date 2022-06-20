//
// Created by abel_ on 11-06-2022.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    int A,B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        int diff = B - A;
        int reminder= diff%3;
        if(diff==1)
            cout<<"YES"<<endl;
        else if (reminder==0 || reminder==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

