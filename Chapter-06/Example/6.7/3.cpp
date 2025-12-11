#include <iostream>

using namespace std;

class Arraytype
{
 int a[5];
public:
 Arraytype()
 {
  int i;
  for(i=0; i<5; i++)
   a[i] = i;
 }
 int &operator[](int i);
};

int &Arraytype::operator[](int i)
{
 if(i<0 || i>5-1)
 {
  cout << "\nIndex value of ";
  cout << i << " is out of bounds.\n";
  exit(1);
 }
 return a[i];
}
int main()
{
 Arraytype ob;
 int i;
 // this is OK
 for(i=0; i<5; i++)
  cout << ob[i] << " ";

 ob[5+100] = 99;
 return 0;
}
