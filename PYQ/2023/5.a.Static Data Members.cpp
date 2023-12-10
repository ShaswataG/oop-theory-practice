#include<iostream>
using namespace std;

class Student {
private:
    static int count;
    string name;
    int roll;
public:
    Student(string s = "no name") {
        name = s;
        count++;
        roll = count;
    }
    void set(string s) {
        name = s;
    }
    void get() {
        cout << "Name : " << name << endl;
        cout << "Roll no. : " << roll << endl;
    }
};

int Student::count = 0;

int main() {
    Student a[4];
    string x;
    for (int i = 0; i < 4; i++) {
        cout << "Enter name : ";
        cin >> x;
        a[i].set(x);   
    }

    cout << endl << "Student details : \n";
    for (int i = 0; i < 4; i++) {
        a[i].get();
        cout << endl;
    }
    return 0;
}