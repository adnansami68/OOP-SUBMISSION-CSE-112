#include <iostream>
using namespace std;

class Adnan
{
    int who;
public:
    Adnan(int n)
{
who = n;
cout << "Constructing " << who << "\n";
}

    ~Adnan() { cout << "Destructing " << who << "\n"; }
    int id() { return who; }
};

    void f(Adnan o)
{
    cout << "Received " << o.id() << "\n";
}
    int main()
{
    Adnan x(1);
    f(x);

    return 0;
 }
