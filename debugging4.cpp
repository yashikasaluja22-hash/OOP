#include <iostream>
using namespace std;

class Rectangle {
    const int width;
    const int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    void display() {
        cout << width << " x " << height << endl;
    }
};

int main() {
    Rectangle r(4, 6);
    r.display();
    return 0;
}

/*PROBLEM 4: CONST KEYWORD ISSUE
#include <iostream>
using namespace std;

class Rectangle {
    const int width;
    const int height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    void display() {
        cout << width << " x " << height << endl;
    }
};

int main() {
    Rectangle r(4, 6);
    r.display();
    return 0;
}*/


/*width and height are declared as const, 
so they cannot be assigned inside the constructor body. This causes a compile error.
✅ The Fix — Initializer List:
cppRectangle(int w, int h) : width(w), height(h) {
    // body can be empty
}
The initializer list runs before the constructor body,
 right at the moment members are created — so const members get their value in time. ✔*/