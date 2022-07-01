//
// Created by abel_ on 20-06-2022.
//
/*
 * (a+b)%M = (a%M + b%M)%M
 * (a*b)%M = (a%M * b%M)%M
 * (a-b)%M = (a%M - b%M + M)%M
 * (a/b)%M = (a%M * inv(b)%M)%M
 * (a^b)%M = (a%M * (a^(b-1))%M)%M
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact = (fact * i) % M;
    }
    cout << fact << endl;
    return 0;
}
