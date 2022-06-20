//
// Created by abel_ on 21-08-2021.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
//    queue imporementation
    queue<string> q;
    q.push("abc");
    q.push("atc");
    q.push("ac");
    q.push("bc");
    q.push("ab");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}

