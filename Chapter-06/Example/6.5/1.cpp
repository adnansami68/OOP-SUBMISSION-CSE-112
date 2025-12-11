 #include <iostream>
using namespace std;
class Coordinates
{
    int x, y;
public:
    Coordinates() { x=0; y=0; };
    Coordinates(int i, int j) { x=i; y=j; }
    void get_xy(int &i, int &j) { i=x; j=y; }
    friend Coordinates operator+(Coordinates ob1, Coordinates ob2);
};

Coordinates operator+(Coordinates ob1, Coordinates ob2)
{
    Coordinates temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    return temp;
}
int main()
{
    Coordinates o1(10, 10), o2(5, 3), o3;
    int x, y;
    o3 = o1 + o2;
    o3.get_xy(x, y);
    cout<<"Coordinates are; "<<endl;
    cout << "X: " << x << ", Y: " << y << "\n";
    return 0;
}
