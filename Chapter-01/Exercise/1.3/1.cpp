#include <iostream>
using namespace std;

int main() {
    double hours, salary;

    cout << "Enter Working Hours: ";
    cin >> hours;

    cout << "Enter hourly salary: ";
    cin >> salary;

    double TotalPay = hours * salary;

    cout << "Total pay = $" << TotalPay << "\n";

    return 0;
}
