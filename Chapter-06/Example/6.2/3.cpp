#include <iostream>
using namespace std;
class Adnan
{
    int x, y;
public:
 Adnan(){
    x=0; y=0;
};
    Adnan(int i, int j){
        x=i; y=j;
        }

    void get_xy(int &i, int &j) {
        i=x; j=y;
        }

    Adnan operator+(Adnan ob2);
    Adnan operator+(int i);
};

    Adnan Adnan::operator+(Adnan ob2)
{
    Adnan temp;

    temp.x = x + ob2.x;
    temp.y = y + ob2.y;

    return temp;
}

  Adnan Adnan::operator+(int i)
{
    Adnan temp;

    temp.x = x + i;
    temp.y = y + i;

    return temp;
}
int main(){

    Adnan o1(10, 10), o2(5, 3), o3;

    int x, y;

    o3 = o1 + o2;
    o3.get_xy(x, y);

    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";

    o3 = o1 + 100;
    o3.get_xy(x, y);

    cout << "(o1+100) X: " << x << ", Y: " << y << "\n";
    return 0;
 }
