 #include <iostream>

 using namespace std;

 void Funt1(int a);
 void Funt1(int a, int b);

 int main()
 {
    Funt1(10);
    Funt1(10, 20);

 return 0;
 }

    void Funt1(int a)

 {

    cout << "FUNCTION 1(int a)\n";

 }

    void Funt1(int a, int b)

 {

    cout << "FUNCTION 2(int a, int b)\n";

 }
