#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw();
};

int main() {

    shape* sptr;
    cout << "Abstract classes cannot be instantiated directly." << endl;
    return 0;
}
