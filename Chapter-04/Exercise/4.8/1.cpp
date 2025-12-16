#include <iostream>
#include <cstdlib>
using namespace std;

class SafeArray2D {
    int rows, cols;
    int **arr;
public:
    SafeArray2D(int r, int c) : rows(r), cols(c) {
        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
        }
    }

    ~SafeArray2D() {
        for (int i = 0; i < rows; i++)
            delete[] arr[i];
        delete[] arr;
    }

    void put(int r, int c, int val) {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            cout << "Bounds error!\n";
            exit(1);
        }
        arr[r][c] = val;
    }

    int get(int r, int c) {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            cout << "Bounds error!\n";
            exit(1);
        }
        return arr[r][c];
    }
};

int main() {
    SafeArray2D a(2, 3);


    int val = 1;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            a.put(i, j, val++);


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << a.get(i, j) << " ";
        cout << endl;
    }

    return 0;
}
