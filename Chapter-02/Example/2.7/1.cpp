#include <iostream>
using namespace std;


class samp {
    int i, j;

public:

    samp(int a, int b) { i = a; j = b; }


    int divisible() { return !(i % j); }
};


class myclass {
    int i;

public:
    // Constructor
    myclass(int n) { i = n; }


    void show() { cout << i << "\n"; }
};

int main() {

    samp ob1(10, 2), ob2(10, 3);

    if (ob1.divisible())
        cout << "10 divisible by 2\n";
    if (ob2.divisible())
        cout << "10 divisible by 3\n";


    myclass m1(50), m2(145);
    cout << "Values in myclass objects:\n";
    m1.show();
    m2.show();

    return 0;
}
