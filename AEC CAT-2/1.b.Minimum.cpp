#include<iostream>
using namespace std;

template<class T>
T minimum(T a, T b, T c) {
    T min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    cout << minimum(6, 2, 3) << endl;
    cout << minimum(4.3, 7.5, 0.3) << endl;
    cout << minimum('g','d','z') << endl;
    return 0;
}