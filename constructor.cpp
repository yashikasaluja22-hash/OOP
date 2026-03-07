#include <iostream>
using namespace std;
/*What Is a Constructor?

A constructor is a special function that:
Has same name as class
Runs automatically when object is created --> only for default constructor
Used to initialize data members*/
class Student{
    private:
    int age;
    public:
    Student() {   //constructor 
        age = 18;
    }
    int getAge(){
        return age;
    }
};
int main() {
Student s1;
cout << s1.getAge();
return 0;
}
/*Same name as class
No return type (not even void)
Automatically runs*/

