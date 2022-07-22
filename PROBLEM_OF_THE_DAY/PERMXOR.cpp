//
// Created by abel_ on 07-07-2022.
//
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int min(int a, int b){
    return a<b?a:b;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        long long int N;
        cin >> N;
        vector<pair<int,int> > v;
//      create pairs starting from 2 till N-1 like (2,3),(4,5)...(N-2,N-1)
        for (int i = 2; i < N; i=i+2) {
            v.push_back(make_pair(i,i+1));
        }
//      print the pairs
        rep(i,0,v.size()){
            cout << v[i].ff << " " << v[i].ss << endl;
        }
//      find the numbers that make N through bitwise addition , for eg
//      50 is 110010 , which is 100000 + 010000 + 000010 = 110010
//        find binary of N and store it in a string
        string s = bitset<6>(N).to_string();
        cout << s << endl;
//        decompose 000110 to seperate binary numbers and store them in a vector
        vector<int> v1;
        cout << endl;

    }

    return 0;
}
