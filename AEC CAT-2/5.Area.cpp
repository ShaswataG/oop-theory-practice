#include<iostream>
using namespace std;

class Shape {
private:
    int base, height;
public:
    Shape(int a = 0, int b = 0) {
        base = a;
        height = b;
    }
    virtual double area() = 0;
    int getBase() {
        return base;
    }
    int getHeight() {
        return height;
    }
};

class Triangle : public Shape {
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {
    }
    double area() {
        cout << "Area of Triangle : ";
        return 0.5*getBase()*getHeight();
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {
    }
    double area() {
        cout << "Area of Rectangle : ";
        return getBase()*getHeight();
    }
};

class Parellelogram : public Shape {
public:
    Parellelogram(int a = 0, int b = 0) : Shape(a, b) {
    }
    double area() {
        cout << "Area of Parallelogram : ";
        return getBase()*getHeight();
    }
};

int main() {
    Shape* ptr;
    Triangle a(3, 2);
    Rectangle b(3, 2);
    Parellelogram c(3, 2);

    ptr = &a;
    cout << ptr->area() << endl;

    ptr = &b;
    cout << ptr->area() << endl;

    ptr = &c;
    cout << ptr->area() << endl;
    return 0;
}