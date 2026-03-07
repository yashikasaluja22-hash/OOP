#include <iostream>
using namespace std;
/*⃣ Protected Inheritance

Ismein base class ke members derived class ke andar hi accessible rehte hain, outside nahi.*/
#include <iostream>
using namespace std;

class Animal
{
public:
    int age;

protected:
    int weight;
};

class Dog : protected Animal
{
public:
    void show()
    {
        age = 5;      // allowed
        weight = 10;  // allowed
        cout << weight << endl;
    }
};

int main()
{
    Dog d;
    d.show();
    // d.age = 5; ❌ not allowed
}
//aur parent class mein private specifier is not acessible anywhere in child class or outside