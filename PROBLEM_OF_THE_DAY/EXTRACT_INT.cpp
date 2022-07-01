//
// Created by abel_ on 01-07-2022.
//
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
//  write a code to extract integers 012 and 045 from string '012,045'
    string s = "122,145";
    int n = s.length();
    string pwl = s.substr(0, 3);
    string pwr = s.substr(4, 3);
    cout << pwl << endl;
    cout << pwr << endl;
//    convert pwl to integer
    int pwl_int = stoi(pwl);
    int pwr_int = stoi(pwr);
    cout << pwl_int << endl;
    cout << pwr_int << endl;

    return 0;
}