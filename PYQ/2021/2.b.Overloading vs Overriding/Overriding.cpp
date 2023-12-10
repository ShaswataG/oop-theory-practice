#include<iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "print Base class" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "print Derived class" << endl;
    }
};

int main() {
    Base* ptr;
    Base a;
    Derived b;

    ptr = &a;
    ptr->print();

    ptr = &b;
    ptr->print();
    return 0;
}