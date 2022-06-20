//
// Created by abel_ on 21-08-2021.
//
//
// Created by abel_ on 21-08-2021.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    //    stack imporementation
    stack<int> s;
    s.push(2);
    s.push(2);
    s.push(7);
    s.push(4);
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}


