#include <iostream>
using namespace std;

class letters {
    char ch;
public:
    letters(char c = ' ') { ch = c; }
        char get_ch() { return ch; }
};

int main() {
    letters ob[10];


    for (int i = 0; i < 10; i++) {
        ob[i] = letters('A' + i);
    }


    cout << "Array in reverse: ";
    for (int i = 9; i >= 0; i--) {
        cout << ob[i].get_ch() << " ";
    }
    cout << endl;

    return 0;
}
