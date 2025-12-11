#include <iostream>
#include <cstdio>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(const char *str);
    Date(int m, int d, int y) {
        day = d;
        month = m;
        year = y;
    }

    void show() {
        cout << month << '/' << day << '/' << year << '\n';
    }
};


Date::Date(const char *str) {
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main() {
    Date sdate("14/02/2004");
    Date idate(14, 2, 2004);

    sdate.show();
    idate.show();

    return 0;
}
