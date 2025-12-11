#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int;
    if(!p)
{
    cout << "Allocation error\n";

    return 1;
}
    *p = 100;
    cout << "Here is integer p: " << *p << "\n";
    delete p;

    return 0;
 }
