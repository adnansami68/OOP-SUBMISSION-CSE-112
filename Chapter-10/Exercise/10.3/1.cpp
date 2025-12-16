#include <iostream>
using namespace std;

class area {
public:
    virtual void getarea();
};

class rectangle : public area {
public:
    void getarea() {
        cout << "Area of rectangle = length * breadth" << endl;
    }
};

int main() {
    rectangle r;
    r.getarea();
    return 0;
}
