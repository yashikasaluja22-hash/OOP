#include <iostream>
using namespace std;
/*Types of Constructors

There are 4 important types:
1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor
4. Constructor using Initializer List*/

//default constructor (no parameters)
class Car{
    private:
    int speed;
    public:
    Car(){
      speed = 0; //no need to call this constructor
    }
};

//Parametrized constructor
class Account{
    private:
    int balance;
    public:
    Account(int b) { //need to call parameter constructor
     balance = b;
    }
    int getbalance() {
        return balance;
    }

};
int main() {
Account acc(5000);// humne constructor ko value assign kari 5000 further usne balance ko value di woh
cout << acc.getbalance();

return 0;
}