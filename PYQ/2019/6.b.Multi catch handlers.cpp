#include<iostream>
#define MAX_SCORE 100
#define PASS_SCORE 33
using namespace std;

class Student {
private:
    string name;
    int roll;
    int score;
public:
    Student(string name = "no name", int roll = 0) {
        this->name = name;
        this->roll = roll;
    }
    void setScore() {
        int a;
        cout << "Enter score : ";
        cin >> a;
        if (a > MAX_SCORE)
            throw 101;
        if (a < PASS_SCORE)
            throw "Fail";
        score = a;        
    }
};

int main() {
    Student a("Nobita", 5);
    enterScore:
    try {
        a.setScore();
    }
    catch (int e) {
        cout << "Exception : " << e << endl;
        cout << "Enter a valid score" << endl;
        goto enterScore;
    }
    catch (const char* exc) {
        cout << "Exception : " << exc << endl;
        cout << "Student should attempt retest" << endl;
        goto enterScore;
    }
    cout << "Student passed\nProgram ended successfully\n";
    return 0;
}