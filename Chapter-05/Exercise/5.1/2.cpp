#include <iostream>
#include <ctime>
using namespace std;

class Stopwatch {
    clock_t start;

public:

    Stopwatch() {
        start = 0;
    }


    Stopwatch(clock_t t) {
        start = t;
    }

    void startWatch() {
        start = clock();
    }

    double elapsedTime() {
        return (double)(clock() - start) / CLOCKS_PER_SEC;
    }
};


int main() {
    Stopwatch sw1;
    sw1.startWatch();

    Stopwatch sw2(clock());


    for (volatile int i = 0; i < 100000000; i++);

    cout << "Elapsed (sw1): " << sw1.elapsedTime() << " seconds" << endl;
    cout << "Elapsed (sw2): " << sw2.elapsedTime() << " seconds" << endl;

    return 0;
}

