#include <iostream>
#include <cmath>
using namespace std;

void MyRound(double &num);

int main() {
    double i = 100.4;
    cout << i << " rounded is ";

    MyRound(i);

    cout << i << "\n";

    i = 10.9;

    cout << i << " Rounded is ";

    MyRound(i);

    cout << i << "\n";

    return 0;
}

void MyRound(double &num) {
    double val;
    double frac;

    frac = modf(num, &val);

    if (frac < 0.5)
        num = val;
    else
        num = val + 1.0;
}
