#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

float add(float a, float b) {
    return a+b;
}

int main() {
    int x, y;
    x = 3, y = 5;
    cout << add(x, y) << endl;

    float p, q;
    p = 3.1, q = 5.2;
    cout << add(p, q) << endl;
    return 0;
}