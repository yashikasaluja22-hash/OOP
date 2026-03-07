#include <iostream>
using namespace std;
/*Inheritance ka simple matlab:
Ek class dusri class ki properties aur functions ko reuse kar sakti hai.

Real life example:
👨 Parent → child

Child inherit karta hai:

surname
property
traits
Programming mein:

Parent Class (Base Class)
        ↓
Child Class (Derived Class)

Derived class base class ke members use kar sakti hai.*/

/*Suppose:

Parent class = Vehicle
Vehicle ke paas:

speed
fuel
start()

Ab ek Car class hai.
Car ko bhi chahiye:

speed
fuel
start()

Toh hum Vehicle se inherit kar lenge instead of dubara likhne ke.*/

class Animal{
public:
void eat() {
    cout << "This Animal eats\n";
}
};

class Dog : public Animal
{
public:
void bark(){
    cout << "Dog barks\n";
}
};
int main() {
Dog d;
d.eat(); //inherited
d.bark(); //own function
return 0;
}
//toh yahan animal --> base class/parent class
// dog --> derived class/ child class