
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int b[n];
        for(int i=0;i< n ;i++){
            b[i] = (a[i] + i +1) % 2;
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += b[i];
        }
        cout << sum << endl;
    }
    return 0;
}