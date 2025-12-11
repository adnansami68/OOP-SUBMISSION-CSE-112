#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;

class Hey {
    char *p;
    int len;
public:
    Hey(const char *s);
    ~Hey() {
        cout << "Freeing " << (void*)p << '\n';
        delete[] p;
    }
    char *get() { return p; }
    Hey &operator=(const Hey &ob);
};

Hey::Hey(const char *s) {
    len = strlen(s) + 1;
    p = new char[len];
    strcpy(p, s);
}

Hey &Hey::operator=(const Hey &ob) {
    if (this == &ob) return *this;
    if (len < ob.len) {
        delete[] p;
        p = new char[ob.len];
    }
    len = ob.len;
    strcpy(p, ob.p);
    return *this;
}

int main() {
    Hey a("Hello"), b("There");
    cout << a.get() << '\n';
    cout << b.get() << '\n';
    a = b;
    cout << a.get() << '\n';
    cout << b.get() << '\n';
    getch();
}
