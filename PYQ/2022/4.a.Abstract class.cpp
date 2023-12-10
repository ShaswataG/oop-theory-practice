using namespace std;
#include<iostream>

class Base {
private:
    int x;
public:
    Base(int a = 0) {
        x = a;
    }
    virtual void print() = 0;
};

class Derived : public Base {
private:
    int y;
public:
    Derived(int a = 0, int b = 0) : Base(a) {
        y = b;
    }
    void print() {
        cout << "Print from Derived class" << endl;
    }
};

int main() {
    Derived a(2, 3);
    a.print();
    return 0;
}