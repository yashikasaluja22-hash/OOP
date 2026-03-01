#include <iostream>
using namespace std; // classes and objects
/*Imagine you want to build a Car.

The design paper that describes:
color
speed
brand
functions like drive()
👉 That design paper = CLASS
The actual red BMW parked outside 🚗
👉 That is an OBJECT
You can create many cars from one design.*/
class Student{
    public:
    string name;
    int age;

    void introduce(){
        cout << "Hi, my name is " << name << " & I am " << age << " years old\n.";
    }
};
int main() {
/*Class
A class is a user-defined data type that contains:
Variables (data)
Functions (behavior)

🔹 Object
An object is a variable of class type.*/
Student s1; // s1 ia object here
s1.name = "Yashika";
s1.age = 22;
s1.introduce();  //function calling
return 0;
}