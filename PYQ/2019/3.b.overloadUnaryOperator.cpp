using namespace std;
#include<iostream>

class Float {
public:
    float a;
    friend void operator ++ (Float&);
};

void operator ++ (Float& b) {
   b.a++;
}



int main() {
    Float b;
    b.a = 3;
    cout << b.a << endl;
    ++b;
    cout << b.a << endl;
    return 0;
}