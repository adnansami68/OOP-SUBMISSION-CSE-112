#include <iostream>
using namespace std;

int main() {

    float *f = new float;
    long *l = new long;
    char *c = new char;


    *f = 3.14;
    *l = 123456789L;
    *c = 'A';


    cout << "Float value: " << *f << endl;
    cout << "Long value: " << *l << endl;
    cout << "Char value: " << *c << endl;


    delete f;
    delete l;
    delete c;

    return 0;
}
