#include <iostream>
using namespace std;

class P2;

class P1 {
    int printing;

public:
    P1() : printing(0) {}
    void set_print(int status) { printing = status; }


    friend bool inuse (const P1 &p1, const P2 &p2);
};

class P2 {
    int printing;

public:
    P2() : printing(0) {}
    void set_print(int status) { printing = status; }


    friend bool inuse(const P1 &p1, const P2 &p2);
};


bool inuse(const P1 &p1, const P2 &p2) {
    return (p1.printing != 0 || p2.printing != 0);
}

int main() {
    P1 job1;
    P2 job2;

    cout << "Printer in use? " << (inuse(job1, job2) ? "Yes" : "No") << "\n";

    job1.set_print(1);
    cout << "Printer in use? " << (inuse(job1, job2) ? "Yes" : "No") << "\n";

    job1.set_print(0);
    job2.set_print(1);
    cout << "Printer in use? " << (inuse(job1, job2) ? "Yes" : "No") << "\n";

    job2.set_print(0);
    cout << "Printer in use? " << (inuse(job1, job2) ? "Yes" : "No") << "\n";

    return 0;
}
