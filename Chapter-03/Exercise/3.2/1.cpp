#include <iostream>
using namespace std;


class Stack {
    char stck[10];
    int topIndex;
public:
    Stack() : topIndex(0) {}

    void push(char ch) {
        if (topIndex == 10) {
            cout << "Stack is full\n";
            return;
        }
        stck[topIndex++] = ch;
    }

    char pop() {
        if (topIndex == 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        return stck[--topIndex];
    }


    friend void showstack(const Stack &s);
};


void showstack(const Stack &s) {
    cout << "Stack contents: ";
    for (int i = 0; i < s.topIndex; i++)
        cout << s.stck[i] << " ";
    cout << "\n";
}

int main() {
    Stack s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');

    showstack(s);

    return 0;
}
