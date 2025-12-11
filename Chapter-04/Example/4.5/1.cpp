#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int(9);
    if(!p)
{
    cout << "Allocation error\n";
    return 1;
}
    cout << "Here is integer: " << *p << "\n";
    delete p;

    return 0;
 }
