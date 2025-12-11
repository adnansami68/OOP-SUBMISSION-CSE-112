#include <iostream>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int a) { x = a; }


    MyClass(const MyClass &obj, int extra = 0) {
        x = obj.x + extra;
    }

    void show() { cout << "x = " << x << endl; }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    MyClass obj3(obj1, 5);

    obj1.show();
    obj2.show();
    obj3.show();
}

