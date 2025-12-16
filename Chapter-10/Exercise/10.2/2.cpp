#include <iostream>
using namespace std;

class Dist {
    double distance;
public:
    Dist(int distance = 0) {
        this->distance = distance;
    }

    void setdistance(int distance) {
        this->distance = distance;
    }

    int getdistance() {
        return this->distance;
    }

    virtual void trav_time() {
        double time=getdistance() / 60.0;
        cout <<"Travel Time(Miles): "<<time<<"hour" << endl;
    }
};

class metric : public Dist {
public:
    metric(double distance) : Dist(distance) {}

    void trav_time() {
        double time= getdistance() / 100.0;
        cout << "Travel Time(Hours): " <<time << "hours"<< endl;
    }
};


int main() {
    Dist *p;

    Dist ob1(120.0);
    metric ob2(160.0);

    p = &ob1;
    p->trav_time();

    p = &ob2;
    p->trav_time();

    return 0;
}
