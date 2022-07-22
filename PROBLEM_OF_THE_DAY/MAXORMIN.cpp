//
// Created by abel_ on 29-06-2022.
//

/*
 * PROBLEM LINK : https://www.codechef.com/problems/MAXORMIN
 * PROBLEM CODE : MAXORMIN
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long int N;
        cin >> N;
        vector<long long int> ones;
        vector<long long int> zeros;
        for(long long int i = 0; i < N; i++){
            long long int x;
            cin >> x;
            if(x == 1){
                ones.push_back(x);
            }
            else{
                zeros.push_back(x);
            }
        }

/*      A_i = {0,1}
 *      Alice want to maximise , Bob minimise
 *      Alice will do XOR of any 2 elements of A_i
 *      0 OR 0 = 0
 *      0 OR 1 = 1
 *      1 OR 0 = 1
 *      1 OR 1 = 1
 *      Bob will do AND of any 2 elements of A_i
 *      0 AND 0 = 0
 *      0 AND 1 = 0
 *      1 AND 0 = 0
 *      1 AND 1 = 1
 *      Alice has first turn
 * */

        int count = 1;
        while(ones.size() > 0 || zeros.size() > 0) {
            if (ones.size() == 1 && zeros.size() == 0) {
                cout << 1 << endl;
                break;
            }
            if (ones.size() == 0 && zeros.size() == 1) {
                cout << 0 << endl;
                break;
            }

            if (count % 2 == 1 && zeros.size()>0) {
//              remove one 0 from zeros
                zeros.erase(zeros.begin());
            } else {
//              remove one 1 from ones
                if(ones.size() > 0){
                    ones.erase(ones.begin());
                }
            }
            count++;
        }




    }
    return 0;
}