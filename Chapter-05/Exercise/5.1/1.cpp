#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char *p;
    int len;

public:

    strtype() {
        len = 255;
        p = new char[len];
        p[0] = '\0';               }


    strtype(const char *str, int size) {
        if (size <= 0) size = 1;
        len = size;
        p = new char[len];
        strncpy(p, str, len - 1);
        p[len - 1] = '\0';
    }

    char *getstring() { return p; }
    int getlength() { return len; }

    ~strtype() { delete[] p; }
};


int main() {
    strtype s1;
    strtype s2("Hello, World!", 20);

    cout << "s1 string: " << s1.getstring() << " length: " << s1.getlength() << endl;
    cout << "s2 string: " << s2.getstring() << " length: " << s2.getlength() << endl;


    return 0;
}
