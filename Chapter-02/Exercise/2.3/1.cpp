#include <iostream>
using namespace std;

class area_cl {
public:
    double height;
    double width;


    area_cl(double h, double w) {
        height = h;
        width = w;
    }
};


class rectangle : public area_cl {
public:
    rectangle(double h, double w) : area_cl(h, w) {}

    double area() {
        return height * width;
    }
};


class isosceles : public area_cl {
public:
    isosceles(double h, double w) : area_cl(h, w) {}

    double area() {
        return 0.5 * width * height;
    }
};


int main() {
    rectangle r(10, 5);
    isosceles t(8, 6);

    cout << "Rectangle area = " << r.area() << endl;
    cout << "Isosceles triangle area = " << t.area() << endl;

    return 0;
}
