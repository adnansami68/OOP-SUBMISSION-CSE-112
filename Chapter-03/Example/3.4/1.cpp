#include<iostream>
using namespace std;

class Plane;

class Rocket {
private:

        string name;
        double speed;

public:
        Rocket() {

                speed= 0.0;

        }

        Rocket (string n , double s) {
                name=n;
                speed=s;

        }

        ~Rocket() {

        }

        void setName (string n) {
                name=n;

        }
        string getName() {
                return name;
        }


        void setSpeed(double s) {
                speed=s;
        }
        double getSpeed() {
                return speed;

        }

        void race (Plane c);
};

class Plane {
private:

        string name;
        double speed;

public:

        Plane() {
                speed=0.0;
        }
        Plane(string n, double s) {
                name=n;
                speed=s;

        }
        ~Plane() {

        }

        void setName (string n) {
                name=n;

        }
        string getName() {
                return name;
        }
        void setSpeed(double s) {

        }
        double getSpeed() {
                return speed;
        }
        friend void Rocket:: race(Plane c); //kae vitore ache etare jonno eita dite hobe double clone

        friend void nmove (Plane c);
};

void Rocket :: race (Plane c) {
        if (speed> c.speed) {
                cout<<"Rocket beats Plane"<<endl;
        }

        else if (speed<c.speed) {
                cout<<"Plane beats Rocket"<< endl;
        }

        else {
                cout<<"Race dwawn"<<endl;
        }

}

void move(Plane c) {
        cout<<"c.speed<<endl";
}
int main(){

        Plane c("AS119", 150);
        Rocket r("AMAS068",560 );

        r.race(c);
        return 0;

}
