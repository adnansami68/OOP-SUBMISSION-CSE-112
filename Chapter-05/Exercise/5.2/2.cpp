#include <iostream>
#include <cstdlib>
using namespace std;

class Myclass {
    int *p;

public:
    Myclass(int i);
    ~Myclass() { delete p; }
    friend int getval(const Myclass &o);
};


Myclass::Myclass(int i) {
    p = new int;
    if (!p) {
        cout << "Allocation error";
        exit(1);
    }
    *p = i;
}


int getval(const Myclass &o) {
    return *o.p;
}

int main() {
    Myclass a(1), b(2);

    cout << getval(a) << " " << getval(b) << "\n";
    cout << getval(a) << " " << getval(b);

    return 0;
}
