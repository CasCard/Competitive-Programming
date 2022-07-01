//
// Created by abel_ on 28-06-2022.
//

/*
 * PROBLEM LINK : https://www.codechef.com/problems/FINDA
 * PROBLEM CODE : FINDA
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        /*
         * Create a matrix B each line with N spaces separated integers
         * j-th integer on the i-th line denotes B_i_j
         */
        int B[N][N];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> B[i][j];
            }
        }

        /*
         * B is A * A_t where A_t is the transpose of A
         * A is matrix of size NxN
         * find lexicographically smallest A such that B = A * A_t
         * If no valid matrix A exists, print a single line containing the integer -1.
         * Otherwise, print N lines; each of them should contain N space-separated integers.
         * The j-th integer on the i-th line should denote the element at row i and column j of matrix A.
         */

//      check if any of the diagonal elements of B is -1 is yes then return -1
        for (int i = 0; i < N; ++i) {
            if(B[i][i] == -1){
                cout << -1 << endl;
                return 0;
            }
        }

        int A[N][N];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                A[i][j] = 0;
            }
        }

//        check is any of diagonal element of B is 1 if yes make the first element in that row as -1
        for (int i = 0; i < N; ++i) {
            if(B[i][i] == 1){
                A[i][0] = -1;
            }
        }





//        print A
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
