#include <iostream>
using namespace std;
/*What Is Constructor Overloading?

Constructor overloading means:
A class can have more than one constructor
with different parameters*/

/*Rule of Overloading

Constructors must differ by:

Number of parameters
OR

Type of parameters(datatype)*/
class Student{
private:
int age;
public:
Student(){ //default constructor
    age = 15;
}
Student(int b){
    age = b;
}
void show(){
    cout << "age is " << age << endl;
}
};
int main() {
Student s1;
Student s2(22);
s1.show();
s2.show();

return 0;
}