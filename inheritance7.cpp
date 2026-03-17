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
    void getweight(int a){
        weight = a;
    }
    void show(){
        cout << age << endl; //allowed
        cout << weight << endl; //allowed
        //cout << secret << endl ❌ not allowed
    }
};
int main(){
Dog d;
d.getweight(55);//this is how u use inherited protected specifier in child class
d.age = 5;
//not allowed to do this --> d.weight = 10;
d.show();
}