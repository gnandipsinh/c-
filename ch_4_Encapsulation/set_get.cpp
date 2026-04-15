#include <iostream>
using namespace std;

class BankBalance
{
private:
    int balance = 10000;

public:
    void GetBalance()
    {
       
        cout << "Bank balance is: " << balance << endl;
    }

    void SetBalance(int balance)
    {
         this->balance += balance;
        
    }
};

int main()
{
    BankBalance b1;

    int amt;

    cout << "Enter a bank balance: ";
    cin >> amt;

    b1.SetBalance(amt);
    b1.GetBalance();

    return 0;
}