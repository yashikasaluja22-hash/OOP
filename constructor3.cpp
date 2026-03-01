#include <iostream>
using namespace std;
/* Constructor Using Initializer List (Very Important)

Professional way to initialize variables:*/
class Account{
private:
int balance;
public:
Account(int b) : balance(b) {}
int getbalance(){
    return balance;
}
};
/*This is:

Faster
Cleaner and more efficient
direct intialization*/
int main() {
Account acc(3000);
cout << acc.getbalance();
return 0;
}