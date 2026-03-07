#include <iostream>
using namespace std;
class BankAccount{
    private:
    double balance;
    string name;
    int rewardpoints;
    public:
    BankAccount() { //constructor
        balance = 0;

    }
    void details(string name1, double amount){
    name = name1;
    balance = amount;
    }
    double withdraw(){
    balance -= 500.00;
    }


};
int main() {
BankAccount acc1;
acc1.details("yashika", 5600);

return 0;
}