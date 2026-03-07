#include <iostream>
using namespace std;
/*Types of Inheritance

C++ mein 5 types hote hain.

1️⃣ Single Inheritance
Ek parent → ek child*/
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
int main() {
Dog d;
d.eat();
return 0;
}