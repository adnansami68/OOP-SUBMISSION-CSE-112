#include <iostream>
using namespace std;

class Norml {
    int i;
public:
    Norml(int n) { i = n; }
    int get_i() { return i; }
};


int sqr_it(Norml o) {
    return o.get_i() * o.get_i();
}

int main() {
    Norml a(10), b(2);

    cout << sqr_it(a) << "\n";
    cout << sqr_it(b) << "\n";
    return 0;
}
