#include <iostream>
using namespace std;

class squares {
    int num, sqr;
public:
    squares(int a, int b) {
        num = a;
        sqr = b;
    }
    void show() {
        cout << num << " " << sqr << "\n";
    }
};

int main() {
    squares arr[10] = {
        squares(1, 1*1), squares(2, 2*2), squares(3, 3*3),
        squares(4, 4*4), squares(5, 5*5), squares(6, 6*6),
        squares(7, 7*7), squares(8, 8*8), squares(9, 9*9),
        squares(10, 10*10)
    };

    // Display values
    cout << "Number  Square\n";
    for (int i = 0; i < 10; i++) {
        arr[i].show();
    }

    return 0;
}
