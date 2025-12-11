#include <iostream>
using namespace std;

class Norml
 {
 int a;
 public:
 Norml(int n) { a = n; }
 int get_a() { return a; }
 };
 int main()
 {
 Norml ob[4][2] = { 1,  2,
 3,  4,
 5,  6,
 7,  8,
 };
 int i;
 for(i=0; i<4; i++)
 {
 cout << ob[i][0].get_a() << ' ' ;
 cout << ob[i][1].get_a() << "\n";
 }
 cout << "\n";
 return 0;
 }
