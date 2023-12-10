#include<iostream>
using namespace std;

int main() {
enterValidSize:
    int size;
    cout << "Enter size : ";
    try {
        cin >> size;
        if (size <= 0) {
            throw "invalid size";
        }
    }
    catch(const char* e) {
        cout << "Enter valid size\n";
        goto enterValidSize;
    }
    int* a = new int[size];
    cout << "Enter elements : ";
    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "Elements are : ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}