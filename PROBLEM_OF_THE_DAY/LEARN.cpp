//
// Created by abel_ on 04-07-2022.
//
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)


void heapify(vi &v, int n, int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<n && v[l]>v[largest]) largest = l;
    if(r<n && v[r]>v[largest]) largest = r;
    if(largest!=i){
        swap(v[i], v[largest]);
        heapify(v, largest, n);
    }
}

void heapsort(vi &a){
    int n = a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }

    for(int i=n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

signed main(){
    int n;
    cin >> n;

    vi a(n);

    rep(i,0,n){
        cin >> a[i];
    }

    heapsort(a);

    rep(i,0,n){
        cout << a[i] << " ";
    }

    return 0;



}