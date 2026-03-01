#include <iostream>
using namespace std;
class Account{
    private:
    int balance;//private mein intialize kar sakte hai but it is more convenient to use constructor
    public:
    // constructor
    Account (){
        balance = 0;
    }
    void deposit(int amount){
        if(amount > 0){
        balance += amount;
        }
    }
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
        }
        else{
            cout << "insufficient balance!!\n";
        }
    }
    int getbalance(){
        return balance;
    }
};
int main (){
Account acc;
acc.deposit(1000);
acc.withdraw(50);
cout << "Remaining balance: " << acc.getbalance();
return 0;
}