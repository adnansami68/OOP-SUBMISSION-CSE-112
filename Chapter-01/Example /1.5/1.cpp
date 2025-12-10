#include <iostream>
using namespace std;

class Myclass {
private:
    int a;

public:

    Myclass(int num) {
        a = num;
    }

    int get_a() {
        return a;
    }
};

int main() {
    Myclass ob1(50);
    Myclass ob2(75);

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

    return 0;
}
