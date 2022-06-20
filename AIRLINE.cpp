//
// Created by abel_ on 06-09-2021.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e,c1,c2,c3,sucess;
        cin >> a >> b >> c >> d >> e;
        c1=a+b;
        c2=b+c;
        c3=a+c;
        sucess=0;
        if(c1<=d) {
            if ((a + b + c - c1) <= e) {
                sucess = 1;
            }
        }
        if(c2<=d){
            if((a+b+c-c2)<=e) {
                sucess=1;
            }
        }

        if(c3<=d){
            if((a+b+c-c3)<=e) {
                sucess=1;
            }
        }

        if(sucess){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}