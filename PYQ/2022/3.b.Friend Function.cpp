#include<iostream>
using namespace std;

class Test {
private:
    int x, y;
public:
    Test(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    friend void sum(Test&);
};

void sum(Test& a) {
    cout << "Sum = " << a.x+a.y << endl;
}

int main() {
    Test a(2, 4);
    sum(a);
    return 0;
}