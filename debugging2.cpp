#include <iostream>
using namespace std;

class Box {
    double length;
    double width;
public:
    Box(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    Box b(5.0, 3.0);
    cout << "Area: " << b.area() << endl;
    return 0;
}
/*Problem 2 — Beginner: Access Specifier Issue (ques below)*/
/*#include <iostream>
using namespace std;

class Box {
    double length;
    double width;

    Box(double l, double w) {
        length = l;
        width = w;
    }

public:
    double area() {
        return length * width;
    }
};

int main() {
    Box b(5.0, 3.0);
    cout << "Area: " << b.area() << endl;
    return 0;
} */