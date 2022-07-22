//
// Created by abel_ on 20-08-2021.
//

#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void maxFlavour(int *a,int n,int k){
    int max_sublength = -1;
    int flavour_count=0;
    int temp_sublength = 0;

    vector<pair<int,int>> v;
    set<int> s;
    for (int i = 0; i<n-1;i++){
        for(int j=i;j<n;j++){
            s.insert(a[j]);
            temp_sublength++;
            if(s.size()>(k-1)){
                break;
            }
            if(s.size()==(k-1)){
                if(temp_sublength>max_sublength){
                    max_sublength = temp_sublength;
                }
            }
        }
        temp_sublength = 0;
        s.clear();
    }
    cout<<max_sublength<<endl;
}

int main(){
    int t;
    cin>>t;
    cout<<t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        maxFlavour(a,n,k);
    }
    return 0;
}

