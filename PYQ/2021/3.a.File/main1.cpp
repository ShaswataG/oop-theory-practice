#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    fstream myFile;
    myFile.open("poem.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        char c;
        int i;
        int blank = 0;
        int alphabets = 0;
        int lines = 0;
        while (getline(myFile, line))
        {
            i = 0;
            cout << line << endl;
            lines++;
            while (line[i] != '\0') {
                if (line[i] == ' ') {
                    blank++;
                } else if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122)) {
                    alphabets++;
                }
                i++;
            }
        }
        cout << endl << "Number of lines = " << lines << endl;
        cout << "Number of blank spaces = " << blank << endl;
        cout << "Number of alphabets = " << alphabets << endl;
        myFile.close();
    }
    return 0;
}