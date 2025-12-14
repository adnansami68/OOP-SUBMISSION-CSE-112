#include<iostream>
using namespace std;

class Samp {
    int a;
    protected:
        int b;
    public:
        int c;
    Samp(int x,int y) {
        a=x;
        b=y;
    }
    void seta(int x) {
       a=x;
    }
    void setb(int y) {
        b=y;
    }
    int geta() {
        return a;
    }
    int getb() {
        return b;
    }

};
int main() {
    Samp ob(10,10);
    //ob.b=50; Error karon eta protected,just x(a) and y(a) er value print korbe.

    ob.c=30;
    cout<<ob.geta()<<endl;
    cout<<ob.getb()<<endl<<ob.c<<endl;
    return 0;
}
