#include <iostream>
#include <string>
using namespace std;

class Card {
    string title;
    string author;
    int copies;

public:
    void store(string t, string a, int c) {
        title = t;
        author = a;
        copies = c;
    }

    void show() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Copies on hand: " << copies << "\n";
    }
};

int main() {
    Card book1, book2;

    book1.store(" TEACH YOURSELF c++ ", "Herbert Schildt", 5);
    book2.store(" Algorithms ", "Robert Sedgewick", 3);

    cout << "Book 1 Info:\n";
    book1.show();

    cout << "\nBook 2 Info:\n";
    book2.show();

    return 0;
}
