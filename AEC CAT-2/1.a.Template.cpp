#include<iostream>
using namespace std;

template<class T, class U, class V>
void display(T a, U b, V c) {
    cout << "Display(" << a<< ", " << b << ", " << c << ")" << endl;
}

int main() {
    display("AEC_CSE", 781013, 85.65);
    display(100, "AEC_Tech", 90.5); 
    return 0;
};