#include <iostream>
#include <cstring>

using namespace std;
class Norml
{
 char s[80];

public:

    void show() { cout << s << "\n"; }
    void set(char *str) { strcpy(s, str); }
};

Norml input()
{

 char s[80];
 Norml str;

 cout << "Enter a string: ";
 cin >> s;

 str.set(s);
 return str;

}
 int main()

 {

 Norml ob;

    ob = input();
    ob.show();

    return 0;
 }
