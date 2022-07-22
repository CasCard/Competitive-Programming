#include <bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        set<int> index;
        stack<int> s1;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i]==t[i] && s[i]=='1' && index.find(i) != index.end()){
                ans++;
                index.insert(i);
            }

            for(int j = 0; j < n; j++) {
                if(s[i]==t[j] && s[i]=='1' && index.find(i) == index.end() && i!=j){
                    ans++;
                    index.insert(i);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}