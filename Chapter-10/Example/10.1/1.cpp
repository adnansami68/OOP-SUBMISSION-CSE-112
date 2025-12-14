#include<iostream>
using namespace std;

class Base{
        int x;
    public :
        void setx (int i) {
        x = i;
}
        int getx () {
        return x;
    }
};
    class derived : public Base {
        int y;
    public:
        void sety (int i) {
            y = i;
        }
        int gety () {
            return y;
        }
    };

int main() {
    Base *p;
    Base ob;
    derived ob_1;
    p = &ob;
    p->setx (10);
    cout << p->getx () << endl;
    p->setx (20);
    cout << p->getx () << endl;

    return 0;
}
