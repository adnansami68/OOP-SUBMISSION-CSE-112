#include <iostream>
using namespace std;

void f(unsigned char c) {
    cout << c;
}

void f(char c) {
    cout << c;
}

int main() {
    f('c');
    f(static_cast<unsigned char>(86));

    return 0;
}
