using namespace std;
#include<iostream>

inline int add(int a, int b) {
    return (a+b);
}

int main() {
    int x = 3, y = 5;
    cout << add(x, y) << endl;
    return 0;
}