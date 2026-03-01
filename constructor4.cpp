#include <iostream>
using namespace std;
class student{
private:
int age;
public:
student(int a) : age(a) {}

student(const student &s){
  age = s.age;
}// const used bcuz jo copy constructor hai woh jiss object ko copy kar rha hai uski value change na kare
//&s taaki jiss object ko copy kar rhe hai(original one) uska reference/ address ke liye
// parameter isiliye as humne uss original object ko parameter mana hai
int getage(){
    return age;
}
};
int main() {
student cindy(15);
student loila = cindy; //copy constructor called
cout << cindy.getage() << '\n';
cout << loila.getage() << endl;

return 0;
}