#include <iostream>
using namespace std;


inline int AbsInt(int n) {
    return (n < 0) ? -n : n;
}


inline long AbsLong(long n) {
    return (n < 0L) ? -n : n;
}


inline double AbsDouble(double n) {
    return (n < 0.0) ? -n : n;
}

int main() {
    cout << "Absolute value of -10: " << AbsInt(-10) << "\n";
    cout << "Absolute value of -10L: " << AbsLong(-10L) << "\n";
    cout << "Absolute value of -10.01: " << AbsDouble(-10.01) << "\n";
    return 0;
}
