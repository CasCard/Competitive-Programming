//
// Created by abel_ on 20-06-2022.
//
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int hsh[N];

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        hsh[a[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }
    return 0;
}