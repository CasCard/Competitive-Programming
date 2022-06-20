//
// Created by abel_ on 23-08-2021.
//
#include <bits/stdc++.h>
using namespace std;


int main() {
    map<int,string> m;
    m[1]="abc";  // O(log(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    map<int,string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    for(auto &pr : m){
        cout <<pr.first << " " << pr.second << endl;
    }

    auto iterator = m.find(3);
    if(iterator == m.end()){
        cout<<"No Value";
    }else{
        cout<<(*iterator).first<<" " << (*iterator).second;
    }


}

