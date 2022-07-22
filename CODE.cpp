//
// PROBLEM CODE : PRFYIT
// Problem Link : https://www.codechef.com/problems/PRFYIT
//
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int main(){
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
//      find the number of characters that has to be deleted inorder to make the string that does not contain 0101 or 1010 subsequences
        int ans = 0;
        int n = S.size();
        for(int i = 0; i < n-1; i++){
            if(S[i] == '0'){
//                0101
                if(S[i+1] == '1' && S[i+2] == '0' && S[i+3] == '1'){
                    ans = ans + 2;
                    i += 3;
                }
            }
            else{
//                1010
                if(S[i+1] == '0' && S[i+2] == '1' && S[i+3] == '0'){
                    ans = ans + 1;
                    i += 3;
                }
            }
        }
        cout << ans << endl;

    }
    return 0;

}