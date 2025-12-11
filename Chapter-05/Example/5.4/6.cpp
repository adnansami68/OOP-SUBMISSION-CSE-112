#include <iostream>
using namespace std;


void hello(string name = "Friend") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    hello();
    hello("Adnan");
}

