#include <iostream>
using namespace std;

int main() {
    int a, b, d, minValue;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    minValue = (a > b) ? b : a;

    for (d = 2; d < minValue; d++) {
        if ((a % d == 0) && (b % d == 0))
            break;
    }

    if (d == minValue) {
        cout << "No common denominators\n";
        return 0;
    }

    cout << "The lowest common denominator is " << d << "\n";

    return 0;
}

