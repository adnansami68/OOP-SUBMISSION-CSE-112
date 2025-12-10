#include <iostream>


int MyAbs(int n);
long MyAbs(long n);
double MyAbs(double n);

int main() {
    std::cout << "Absolute value of -10: " << MyAbs(-10) << "\n\n";
    std::cout << "Absolute value of -10L: " << MyAbs(-10L) << "\n\n";
    std::cout << "Absolute value of -10.01: " << MyAbs(-10.01) << "\n\n";
    return 0;
}


int MyAbs(int n) {

    std::cout << "In integer MyAbs()\n";
    return n < 0 ? -n : n;

}


long MyAbs(long n) {
    std::cout << "In long MyAbs()\n";
    return n < 0 ? -n : n;
}


double MyAbs(double n) {
    std::cout << "In double MyAbs()\n";
    return n < 0 ? -n : n;
}
