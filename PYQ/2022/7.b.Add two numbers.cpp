#include<iostream>
using namespace std;

template<class T>
T add(T a, T b) {
    return a+b;
}

int main() {
    int a = 2, b = 4;
    float c = 4.5, d = 6.2;

    cout << add(a, b) << endl;
    cout << add(c, d) << endl;
    return 0;
}