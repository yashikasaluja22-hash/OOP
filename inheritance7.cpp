#include <iostream>
using namespace std;
/*C++ mein 3 inheritance specifiers hote hain:

public inheritance
protected inheritance
private inheritance*/
class Animal{
    public:
    int age;
    protected:
    int weight;
    private:
    int secret;
};
class Dog : public Animal
{
    public:
    void show(){
        cout << age << endl; //allowed
        cout << weight << endl; //allowed
        //cout << secret << endl ❌ not allowed
    }
};
int main(){
Dog d;
d.age = 5;
d.show();
}