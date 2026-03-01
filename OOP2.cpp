#include <iostream>
using namespace std;
/*What Are Access Specifiers?

Access specifiers decide:

❓ Who can access the data and functions of a class?
There are 3 types:

public
private
protected */

//public can be accessed everwhere inside & outside a class.
//private can only be acessed within class not outside
class Account{
    private:
    int balance;
    public:
    void setBalance(int b){
        balance = b;
    }

    int getBalance(){
        return balance;
    }
};
int main (){
//account.balance = 1000;  // ❌ ERROR
// can't access directly as above;
/*👉 You must use public functions.

WHY?
Security + Control + Encapsulation*/
Account acc; // object created
acc.setBalance(1000);
cout << acc.getBalance();

return 0;
}
