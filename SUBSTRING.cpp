#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y, K, N;
        cin >> x >> y >> K >> N;

        if(abs(x-y)%2*K==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }
    return 0;
}