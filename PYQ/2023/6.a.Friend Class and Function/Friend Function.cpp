#include<iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a = 0) {
        x = a;
    }
    friend void print(Test a);
};

void print(Test a) {
    cout << "x = " << a.x << endl;
}

int main() {
    Test a(5);
    print(a);
    return 0;
}