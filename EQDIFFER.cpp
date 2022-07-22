#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int,int> dict;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int diff = abs(a[i] - a[j]);
                if(dict.count(diff)){
                    dict[diff]++;
                }else{
                    dict[diff]=1;
                }
            }
        }


        int max_count = 0;
        int max_diff = 0;
        for(auto it = dict.begin(); it != dict.end(); it++){
            if(it->second > max_count){
                max_count = it->second;
                max_diff = it->first;
            }
        }
        cout << max_count <<max_diff <<endl;
    }
    return 0;
}