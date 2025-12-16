#include<iostream>
using namespace std;

class MyBase {
    int a;
    int b;
    public:
    int c;
    void setab(int i , int j) {
        a = i;
        b = j;

    }
    void getab(int &i , int &j) {
        i=a;
        j=b;
    }


};
class derived1:public MyBase {


};
class derived2:public MyBase {

};
int main() {
    derived1 ob1;
    derived2 ob2;
    int i,j;

    ob1.setab(10,20);

    ob1.getab(i,j);
    cout<<"i="<<i<<endl<<"j="<<j<<endl;

    ob1.c=100;
    cout<<"ob1.c="<<ob1.c<<endl;

    return 0;
}
