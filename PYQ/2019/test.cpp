using namespace std;
#include<iostream>

class Float {
public:
    float a;
    void operator++ () {
        a=a+1;
    }
};

int main() {
    Float b;
    b.a = 3;
    cout << b.a << endl;
    ++b;
    cout << b.a << endl;
    return 0;
}