//
// Created by abel_ on 17-10-2021.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin>>test_case;
    int india=0,england=0;
    while(test_case--){
        map<int,int> m;
        for(int i=0;i<5;++i){
            int s;
            cin>>s;
            m[s]++;
        }
        for(auto pr : m){
            if(pr.first == 1){
                india=pr.second;
            }
            else if(pr.first == 2){
                england=pr.second;
            }
        }
        if(india>england){
            cout<<"INDIA"<<endl;
        }
        else if(england>india){
            cout<<"ENGLAND"<<endl;
        }else{
            cout<<"DRAW"<<endl;
        }

    }
    return 0;
}