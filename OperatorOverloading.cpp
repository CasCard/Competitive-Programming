//
// Created by abel_ on 02-06-2022.
//
#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;

// define class complex


class complex {

private:
    float r, i;
public:
    complex(float r, float i) {
        this->r = r;
        this->i = i;
    }

    complex() {}

    void displaydata();
    complex operator+(complex c1, complex c2);
};

void complex::displaydata() {
    cout << "Real part: " << r << endl;
    cout << "Imaginary part: " << i << endl;
}

complex complex::operator+(complex c1, complex c2) {
    return {c1.r + c2.r, c1.i + c2.i};
}

int main() {
    complex c1(7, 10);
    complex c2(3, 4);
    complex c3 = c1 + c2;
    c3.displaydata();
    return 0;
}