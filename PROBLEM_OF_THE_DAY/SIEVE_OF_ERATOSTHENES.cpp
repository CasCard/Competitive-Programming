//
// Created by abel_ on 01-07-2022.
//
#include <bits/stdc++.h>
using namespace std;

/*
 *      2  3  4  5  6  7  8  9 10
 *  11 12 13 14 15 16 17 18 19 20
 *  21 22 23 24 25 26 27 28 29 30
 *  31 32 33 34 35 36 37 38 39 40
 *  41 42 43 44 45 46 47 48 49 50
 *
 *  mark all the multiples of 2 : 4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50
 *  mark all the multiples of 3 : 9,12,15,18,21,24,27,30,33,36,39,42,45,48
 *  mark all the multiples of 4 : 16,20,24,28,32,36,40,44,48
 *  mark all the multiples of 5 : 25,30,35,40,45,50
 *  mark all the multiples of 9 : 36,45,54,63,72,81,90,99
 *
 */

void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    } cout<<endl;
}

int main(){
    int n;
    cin >> n;

    primeSieve(n);

    return 0;
}

