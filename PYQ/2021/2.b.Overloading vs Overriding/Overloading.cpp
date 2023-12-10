#include<iostream>
using namespace std;

int add(int a, int b, int c) {
    return a+b+c;
}

int add(int a, int b) {
    return a+b;
}

int main() {
    int x, y, z;
    x = 1, y = 2, z = 3;
    cout << "add(x, y) = " << add(x, y) << endl;
    cout << "add(x, y, z) = " << add(x, y, z) << endl;
    return 0;
}