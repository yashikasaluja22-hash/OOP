#include <iostream>
using namespace std;
// Constructor with Inheritance
// Parent constructor pehle call hota hai.
class Animal{
    public:
    Animal(){
        cout << "Animal Constructor\n";
    }
};
class Dog : public Animal
{
    public:
    Dog(){
        cout << "Dog constructor\n";
    }
};
int main(){
Dog d;
return 0;
}
/* REASON: 
Parent → first
Child → second
*/