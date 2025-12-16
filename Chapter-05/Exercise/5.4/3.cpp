#include <iostream>
using namespace std;

class Screen {
public:
    void myclreol(int n = 80) {   
        for (int i = 0; i < n; i++) cout << " ";
        cout << "\r";
    }
};

int main() {
    Screen sc;

    cout << "Hello!";
    sc.myclreol(5); 
    cout << "\n";

    cout << "Adnan!";
    sc.myclreol(); 
    cout << "\n";
}

