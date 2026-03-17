#include <iostream>
using namespace std;
// Derived class parent function ko replace kar sakti hai.
class Animal{
public:
void sound(){
    cout << "Animal sound\n";
}
};
class Dog : public Animal
{
    public:
    void sound(){
        cout << "dog barks\n";
    }
};
int main(){
Dog d;
d.sound();
d.Animal::sound(); //how to call parent function in this overiding case
return 0;
}
//Dog ne parent function override kar diya.