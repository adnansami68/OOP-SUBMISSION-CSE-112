#include <iostream>
using namespace std;

class Norml
{
    int i, j;
public:
    void set_i(int a, int b) { i=a; j=b; }
    int get_product() { return i*j; }
};
    int main()
{
    Norml *p;
    p = new Norml;
    if(!p)
{

    cout << "Allocation error\n";
    return 1;
}
    p->set_i(4, 5);
    cout << "Product is: " << p->get_product() << "\n";

    return 0;
 }
