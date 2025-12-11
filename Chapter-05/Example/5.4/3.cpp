 #include <iostream>
 using namespace std;
 class Myclass
 {
 int x;
 public:

 Myclass(int n = 0) { x = n; }
 int getx() { return x; }
 };
 int main()
 {
    Myclass o1(10);
    Myclass o2;

    cout << "o1: " << o1.getx() << '\n' ;
    cout << "o2: " << o2.getx() << '\n' ;

    return 0;
 }
