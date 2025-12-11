 #include <iostream>
 using namespace std;

 class samp
 {

    int i;

 public:

 samp(int n) { i = n; }
 int get_i() { return i; }
 };

 int sr(samp o)
 {
 return o.get_i() * o.get_i();
 }
 int main()
 {
 samp a(10), b(2);
 cout << sr(a) << "\n";
 cout << sr(b) << "\n";
 return 0;
 }
