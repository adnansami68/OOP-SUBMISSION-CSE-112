#include<iostream>
using namespace std;

class Matrix {
    int a , b ;
public:
    Matrix(int n, int m) {
        a=n;
        b=m;
    }
    int get_a () {
        return a;
    }
    int get_b() {
        return b;
    }


};
int main() {
    Matrix ob[4]={
        Matrix(1,2),
        Matrix(3,4),
        Matrix(5,6),
        Matrix(7,8)
    };
    int i;

    Matrix *p;

    p= ob;

    for (i=0;i<4;i++) {

        cout<<"(" << (p+i)->get_a() << ", " << (p+i)->get_b() << ")" <<endl;

    }

    cout <<"\n"<<endl;
}
