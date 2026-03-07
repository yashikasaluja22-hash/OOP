#include <iostream>
using namespace std;
// Agar parent function bhi call karna ho:
#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        Animal::sound();//iske karan parent and child dono function call honge
        cout << "Dog barks\n";
    }
};

int main()
{
    Dog d;
    d.sound();
}