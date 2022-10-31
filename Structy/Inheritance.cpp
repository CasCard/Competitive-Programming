//
// Created by abel_ on 31-10-2022.
//
#include<iostream>
using namespace std;

// base class
class Device{
public:
    Device(){
        cout << "Device constructor" << endl;
    }
    ~Device(){
        cout << "Device destructor" << endl;
    }
};

// derived class
class MobileDevice : public Device{
public:
    MobileDevice(){
        cout << "MobileDevice constructor" << endl;
    }
    ~MobileDevice(){
        cout << "MobileDevice destructor" << endl;
    }
};

// derived class
class SmartPhone : public MobileDevice{
public:
    SmartPhone(){
        cout << "SmartPhone constructor" << endl;
    }
    ~SmartPhone(){
        cout << "SmartPhone destructor" << endl;
    }
};

int main(){
    SmartPhone s;
    return 0;
}
