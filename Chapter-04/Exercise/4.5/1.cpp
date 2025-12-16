#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char *p = new char[100];


    strcpy(p, "This is a test");


    cout << p << endl;

    delete[] p;

    return 0;
}
