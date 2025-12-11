#include <iostream>
using namespace std;

void space(int count) {
    for (; count; count--)
        cout << ' ';
}


void space(int count, char ch) {
    for (; count; count--)
        cout << ch;
}

int main() {
    space(5);
    space(10, '*');
    cout << "Done" << endl;
    return 0;
}

