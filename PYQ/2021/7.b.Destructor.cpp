#include<iostream>
using namespace std;

class Test {
private:
    int x, y;
public:
    Test(int a = 0, int b = 0) {
        cout << "Object instanciated    Allocated space\n"; 
        x = a, y = b;
    }
    int get() {
        return x;
    }
    ~Test() {
        cout << "Object destroyed   Deallocated space.\n";
    }
};

int main() {
    Test a(3, 5);
    cout << "Hello" << endl;

    Test* p;
    p = new Test;
    cout << p->get() << endl;
    delete p;

    cout << "Bye bye" << endl;

    return 0;
}