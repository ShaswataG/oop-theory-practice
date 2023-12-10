#include<iostream>
using namespace std;

class Complex {
private:
    int real, img;
public:
    Complex(int a = 0, int b = 0) {
        real = a;
        img = b;
    }
    Complex operator* (Complex b) {
        Complex c;
        c.real = this->real*b.real;
        c.img = this->img*b.img;
        return c;
    }
    friend void operator<< (ostream&, Complex);
};

void operator<< (ostream& out, Complex n) {
    out << n.real << "+i" << n.img << endl;
}

int main() {
    Complex a(2, 4);
    Complex b(3, 1);
    Complex c = a*b;
    cout << c;
    return 0;
}