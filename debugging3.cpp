#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double radius1) {
        radius = radius1;
    }
    double getRadius() { return radius; }
};

int main() {
    Circle c(7.5);
    cout << "Radius: " << c.getRadius() << endl;
    return 0;
}
/*Problem 3: ques below
#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double radius) {
        radius = radius;
    }
    double getRadius() { return radius; }
};

int main() {
    Circle c(7.5);
    cout << "Radius: " << c.getRadius() << endl;
    return 0;
} */



/*However, there are 3 valid ways to fix this — good to know all of them:
Way 1 — Rename the parameter (your approach) ✔
cppCircle(double radius1) {
    radius = radius1;
}
Way 2 — Use this-> to distinguish member from parameter
cppCircle(double radius) {
    this->radius = radius;  // this->radius = member, radius = parameter
}
Way 3 — Initializer list (best practice ⭐)
cppCircle(double radius) : radius(radius) {}*/