#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
Student(string a, int b){
    name = a;
    age = b;}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Alice", 20);
    s.display();
    return 0;
}
//Beginner: Missing Constructor (QUES BELOW)
/*#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Alice", 20);
    s.display();
    return 0;
}*/

//POINTS TO REMEMBER:
// constructor hamesha public: ke niche aata hai
// agar variables inside a class mein kuch nhi lika(private hai ya public) toh private maane jaayenge
// and private variables us can access using constructor within same class

//for better view ques ko ek new file mein copy paste karke dekho