#include<iostream>
using namespace std;

class Test {
private:
    int x;
public:
    Test(int a = 0) {x = a;}
    friend class Other;
};

class Other {
public:
    void print(Test t) {
        cout << t.x << endl;
    }
};

int main() {
    Test a(4);
    Other b;
    b.print(a);
    return 0;
}