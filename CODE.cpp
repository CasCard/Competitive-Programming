//
// Created by abel_ on 20-06-2022.
//
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }

    int q;
    cin>>q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        cout << pf[r] - pf[l-1] << endl;
    }
    return 0;

}