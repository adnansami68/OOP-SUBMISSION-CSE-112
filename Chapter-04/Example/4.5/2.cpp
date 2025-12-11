#include <iostream>
using namespace std;

class Norml
{
    int i, j;
public:

    Norml(int a, int b) { i=a; j=b; }
    int get_product() { return i*j; }
};
    int main()
{
    Norml *p;
    p = new Norml(6, 5);

    if(!p)
{
    cout << "Allocation error\n";
    return 1;
}

    cout << "Product is: " << p->get_product() << "\n";
    delete p;

    return 0;
 }
