#include <iostream>
using namespace std;
class Parent{
/*Agar parent class ka constructor parameterized hai:
👉 Toh derived class mein constructor likhna compulsory ho jaata hai*/
public:
Parent(int x){
    cout << "parent" << '\n';
}
};
class Child : public Parent{
    public:
    Child(int y) : Parent(y){
   cout << "child" << '\n';
    }
};
int main(){
Child c(5);
return 0;
}// lekin agar parent mein default constructor hota toh aisa koi rule nhi hai u can write child class without constructor