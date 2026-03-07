#include <iostream>
using namespace std;
/*Hierarchical Inheritance

One parent → multiple children

      Animal
      /   \
    Dog   Cat*/
class Animal
{
public:
    void eat()
    {
        cout << "Eating\n";
    }
};

class Dog : public Animal
{
};

class Cat : public Animal
{
};
int main() {
Dog d;
Cat c;
c.eat();
d.eat();
return 0;
}
/*5️⃣ Hybrid Inheritance

Combination of multiple types.

Example:

        A
       / \
      B   C
       \ /
        D

Ye complex system mein use hota hai.*/