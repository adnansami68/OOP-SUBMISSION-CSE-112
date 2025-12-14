#include <iostream>
using namespace std;

class Base {
    //int a;
    protected:
        int a, b;
    public:
        void setab(int x, int y) {
            a=x;
            b=y;
            }

};
class Derived : public Base {
    int c;
    public:
       void setc(int x) {
           c=x;
       }
    void showbc() {
           cout<< a <<endl<< b <<endl<< c <<endl;
       }
};

int main() {
    Derived ob;

    ob.setab(10,20);
    ob.setc(30);
    ob.showbc();

    return 0;

}

