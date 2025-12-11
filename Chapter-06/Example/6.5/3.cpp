#include <iostream>
using namespace std;
class Coordinates
{
    int x, y;
public:
    Coordinates() { x=0; y=0; };
    Coordinates(int i, int j) { x=i; y=j; }
    void get_xy(int &i, int &j) { i=x; j=y; }
    friend Coordinates operator++(Coordinates &ob);
};

Coordinates operator++(Coordinates &ob)
{
    ob.x++;
    ob.y++;
    return ob;
}
int main()
{
    Coordinates o1(10, 10);
    int x, y;
    ++o1;
    o1.get_xy(x, y);
    cout<<"Coordinates are;"<<endl;
    cout << " X: " << x << ", Y: " << y << "\n";
    return 0;
}
