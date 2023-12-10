using namespace std;
#include<iostream>

class Complex {
private:
    int real, img;
public:
    Complex() {
        real = img = 0;
    }
    Complex(int a, int b) {
        real = a;
        img = b;
    }
    Complex operator- (Complex b) {
        Complex c;
        c.real = real - b.real;
        c.img = img - b.img;
        return c;
    }
    friend Complex operator+ (Complex&, Complex&);
    friend ostream& operator<< (ostream&, Complex&);
};

ostream& operator<< (ostream& o, Complex& b) {
    o << b.real << "+i" << b.img << endl;
    return o;
}

Complex operator+ (Complex& a, Complex& b) {
    Complex c;
    c.real = a.real+b.real;
    c.img = a.img+b.img;
    return c;
}

int main() {
    Complex a(2, 3);
    Complex b(3, 2);
    Complex c = a+b;
    Complex d = a-b;
    cout << c;
    cout << d;
    return 0;
}