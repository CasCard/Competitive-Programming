//
// Created by abel_ on 12-09-2021.
//
#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}
int main(){
//    1.inbuild implementation.
//    2.time complexity.
//    3. valid key datatypes.
    unordered_map<string,int> m;

    int n;
    cin>>n;
    for(int i=0; i<n;++i){
        string s;
        cin>>s;
        m[s]++;
    }

    int q;
    cin >> q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }

    return 0;
}