#include <iostream>
#include <cstring>

using namespace std;

class inventory
{
    char item[20];
    double cost;
    int on_hand;

public:

    inventory(char *i, double c, int o)
{
    strcpy(item, i);
    cost = c;
    on_hand = o;
}
    void show();
};
    void inventory::show()
{
    cout << item;
    cout << ": $" << cost;
    cout << " On hand: " << on_hand << "\n";
}
 int main()
{
    inventory ob("wrench", 5.95, 4);
    ob.show();

    return 0;
 }
