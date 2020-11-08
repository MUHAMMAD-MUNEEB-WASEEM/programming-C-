#include <iostream>

using namespace std;

class Bank_account
{public:
    Bank_account(double open_bal);
    void deposit(double amount);
    void withdrawal(double amount);
    void diplay_balance();
private:
    double balance;
};
Bank_account::Bank_account(double open_bal)
{
    balance=open_bal;
}
void Bank_account::deposit(double amount)
{
    balance=balance+amount;
}
void Bank_account::withdrawal(double amount)
{
    balance=balance-amount;
}
void Bank_account::diplay_balance()
{
    cout<<"The current balance is: "<<balance<<endl;
}
int main()
{
    Bank_account x(500);
    x.diplay_balance();
    cout<<"Cash deposite of 400 "<<endl;
    x.deposit(400);
    x.diplay_balance();
    cout<<"Cash with drawal of 700 "<<endl;
    x.withdrawal(700);
    x.diplay_balance();
}


