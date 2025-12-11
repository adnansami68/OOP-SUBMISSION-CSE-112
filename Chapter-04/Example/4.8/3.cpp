#include <iostream>
#include <cstdlib>
using namespace std;

class array
{
    int size;
    char *p;
public:
    array(int num);
    ~array() { delete [] p; }
    char &put(int i);
    char get(int i);
};

array::array(int num)
{
    p = new char[num];
    if(!p)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    size = num;
}

// Put something into the array
char &array::put(int i)
{
    if(i<0 || i>=size)
    {
        cout << "Bounds error!!!\n";
        exit(1);
    }
    return p[i]; // return reference to p[i]
}

// Get something from the array
char array::get(int i)
{
    if(i<0 || i>=size)
    {
        cout << "Bounds error!!!\n";
        exit(1);
    }
    return p[i];
}

int main()
{
    array a(10);

    a.put(3) = 'X';
    a.put(2) = 'R';

    cout << a.get(3) << a.get(2) << "\n";

    // now generate run-time boundary error (intended)
    a.put(11) = '!';

    return 0;
}
