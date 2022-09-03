//
// Created by abel_ on 16-07-2022.
//

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int parent[N];
int size[N];

// swap using xor
void swap(int &a, int &b){
    a ^= b;
    b ^= a;
    a ^= b;
}

void make(int v){
    parent[v] = v;
    size[v] = 1;
}

int find(int v){
    if(parent[v] == v) return v;
    return find(parent[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b]) {
            swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }

    }
}

int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        make(i);
    }
    while(k--){
        int a,b;
        cin >> a >> b;
        Union(a,b);
    }

    int connected_ct = 0;
    for(int i=0;i<n;i++){
        if(parent[i] == i){
            connected_ct++;
        }
    }
    return 0;
}
