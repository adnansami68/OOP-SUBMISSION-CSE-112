#include<iostream>
using namespace std;
class Base {
    int a;
public:
    void seta(int x) {
        this->a = x;
    }
    int geta() {
        return this->a;
    }
    void showa() {
        cout << this->a << endl;
    }
};
class Derived : public Base {
    int b;
public:
    void setb(int x) {
        this->b = x;
    }
    int getb() {
        return this->b;
    }
    void showb() {
        cout << this->b << endl;

    }
};
int main() {
    Base num1;
    num1.seta(10);
    num1.showa();

    Base num2;
    num2.seta(20);
    num2.showa();

    return 0;


}
