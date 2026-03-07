#include <iostream>
using namespace std; 
/*2️⃣ Multilevel Inheritance

Animal
   ↓
Mammal
   ↓
Dog*/
class Animal{
    public:
    void eat(){
        cout << "This Animal eats\n";
    }
};
class Mammal : public Animal
{
public:
void walk(){
    cout << "This also walks\n";
}
};
class Dog : public Mammal
{
public:
void bark(){
    cout << "It barks\n";
}
};
int main() {
Dog d;
d.eat();
d.walk();
d.bark();
return 0; // agar public nhi kiya class ka function toh woh ussay private maan lega
//phir access nhi ho payega
}