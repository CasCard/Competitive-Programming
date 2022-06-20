//
// Created by abel_ on 11-06-2022.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    int N,X;
    cin >> T;
    while(T--){
        cin >> N >> X;
//        find quotient and remainder of N/6
        int quotient = N/6;
        int remainder = N%6;
        if(remainder > 0){
            quotient++;
        }
        int price = quotient*X;
        cout << price << endl;

    }
    return 0;
}

