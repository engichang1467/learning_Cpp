#include <iostream>

using namespace std;

class BankAccount
{
    private:
        float balance;
    
    public:
        BankAccount();
        void Deposit(float dep);
        void WithDrawl();
        float getBalance();
};

BankAccount::BankAccount()
{
    balance = 0;
}

float BankAccount::getBalance()
{
    return balance;
}

void BankAccount::Deposit(float dep)
{
    balance += dep;
}

int main()
{
    BankAccount checking;
    BankAccount savings;
    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Saving balance is: " << savings.getBalance() << endl;

    checking.Deposit(100);
    savings.Deposit(500);
    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Saving balance is: " << savings.getBalance() << endl;

}