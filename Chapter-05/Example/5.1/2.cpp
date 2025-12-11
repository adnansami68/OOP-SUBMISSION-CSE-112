 #include <iostream>
 using namespace std;

 class Myclass
 {

 int x;
 public:

 Myclass() {
     x = 0;
     }
 Myclass(int n) {
      x = n;
      }
 int getx() {
      return x;
       }
 };
    int main()
 {

    Myclass a1[10];

    Myclass a2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 int i;

 for(i=0; i<10; i++)

 {

    cout << "a1[" << i << "]: " << a1[i].getx();
    cout << '\n' ;
    cout << "a2[" << i << "]: " << a2[i].getx();
    cout << '\n' ;
 }

    return 0;
 }
