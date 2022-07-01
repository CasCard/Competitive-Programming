//
// Created by abel_ on 23-06-2022.
//
#include <bits/stdc++.h>
using namespace std;

/*
 * 1<= i <= N , p_i != i
 * |p_1-1| xor |p_2-2 | xor |p_3-3| xor ... xor |p_N-N| = 0
 * then p is called good
 * */


int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
//      create a 2d array of size NXN with all elements as 0
        int arr[N][N];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                arr[i][j] = abs(i-j);
            }
        }

//        print the 2d array
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}
}