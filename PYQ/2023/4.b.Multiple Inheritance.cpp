#include<iostream>
using namespace std;

class Base1 {
    int a;
public:
    Base1(int a = 0) {this->a = a;}
    int getNo() {return a;}
};

class Base2 {
    string s;
public:
    Base2(string s) {this->s = s;}
    string getString() {return s;}
};

class Derived : Base1, Base2 {
public:
    Derived(string a = "No name", int b = 0):Base1(b), Base2(a) {
    }
    void print() {
        cout << "Name : " << getString() << endl;
        cout << "Roll : " << getNo() << endl;
    }
};

int main() {
    Derived a("Donald", 3);
    a.print();
    return 0;
}