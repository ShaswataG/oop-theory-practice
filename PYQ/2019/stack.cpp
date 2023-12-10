using namespace std;
#include<iostream>
#define MAX 10

template<class T>
class Stack {
private:
    int* a;
    int top, size;
public:
    Stack(int);
    void push(int);
    T pop();
    void display();
};

template<class T>
Stack<T>::Stack(int a = MAX) {
    size = a;
    cout << "Stack initialised of size " << size << endl;
    top = -1;
    this->a = new T[size];
}

template<class T>
void Stack<T>::push(int x) {
    if (top == size-1) {
        cout << "Stack overflow." << endl;
        return;
    }
    top++;
    a[top] = x;
}

template<class T>
T Stack<T>::pop() {
    if (top == -1) {
        cout << "Stack underflow." << endl;
        return;
    }
    T x = a[top];
    top--;
    return x;
}

template<class T>
void Stack<T>::display() {
    if (top == -1) {
        cout << "Stack underflow." << endl;
        return;
    }
    cout << "Elements are : ";
    for (int i = top; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int type, x, choice;
    cout << "Stage : Stack not initialized\nPress 1 to create an integer type stack.\nPress 2 to create a double type stack.\nPress 3 to create a char type stack.\nPress Press 4 to create a string type.\n" << endl;
    cin >> type;
    cout << "Enter size : ";
    cin >> x;
    switch(type)
    {
    case 1:
        Stack<int> s(x);
        int key;
        break;
    case 2:
        Stack<double> s(x);
        double key;
        break;
    case 3:
        Stack<double> s(x);
        char key;
        break;
    case 4:
        Stack<string> s(x);
        string key;
        break;
    default:
        cout << "Invalid choice.\nExiting the program.\n\n";
        exit(0);
        break;
    }
    while (1) {
        cout << "\n\nStage : Stack initialized\nPress 1 to push.\nPress 2 to pop\nPress 3 to display.\n";
        switch (choice)
        {
        case 1:
            break;
        default:
            break;
        }
    }
    return 0;
}