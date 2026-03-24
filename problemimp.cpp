#include <iostream>
using namespace std;
class Vehicle{
public:
string brand;
int year;
Vehicle(string a, int b){
    brand = a;
    year = b;
}
};
class Car : public Vehicle{
public:
Car(string x, int y) : Vehicle(x, y){
    cout << "brand is " << brand << endl;
    cout << "year: " << year << endl;
}
// make separate functions or constructors in class car for model and seating capacity
/*string model;
int seatingcapacity;
void getinput(string t, int l){
model = t;
seatingcapacity = l;
} 
and so on more function for output*/
};
int main() {
Car c("toyota", 2012);
return 0;
}