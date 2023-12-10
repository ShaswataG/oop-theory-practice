#include<iostream>
using namespace std;

template<class T>
class Arithmetic {
private:
    T x, y;
public:
    Arithmetic(T, T);
    T add();
    T multiply();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    x = a, y = b;
}

template<class T>
T Arithmetic<T>::add() {
    return x+y;
}

template<class T>
T Arithmetic<T>::multiply() {
    return x*y;
}

int main() {
    Arithmetic<int> a(2, 4);
    Arithmetic<float> b(2.3, 3.1);
    cout << a.add() << endl;
    cout << b.multiply() << endl;

    return 0;
}