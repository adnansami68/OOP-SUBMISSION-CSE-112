#include <iostream>
using namespace std;

void neg(int *num) {
    *num = -(*num);
}

int main() {
    int x = 10;
    cout << "Original = " << x << endl;

    neg(&x);
    cout << "After negetive = " << x << endl;

    return 0;
}
