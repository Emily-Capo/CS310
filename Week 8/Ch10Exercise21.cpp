#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class bankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;
    double interestRate;

    static int nextAccountNumber;

public:
    // Default constructor
    bankAccount()
    {
        name = "";
        accountType = "";
        balance = 0.0;
        interestRate = 0.0;
        accountNumber = ++nextAccountNumber;
    }

    // Constructor with parameters
    bankAccount(string n, string type, double bal, double rate)
    {
        name = n;
        accountType = type;
        balance = bal;
        interestRate = rate;   // stored as decimal (5% = 0.05)
        accountNumber = ++nextAccountNumber;
    }

    void setAccount(string n, string type, double bal, double rate)
    {
        name = n;
        accountType = type;
        balance = bal;
        interestRate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds." << endl;
    }

    void addInterest()
    {
        balance += balance * interestRate;
    }

    double getBalance() const
    {
        return balance;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }

    void print() const
    {
        cout << fixed << setprecision(2);
        cout << "\nAccount Holder : " << name
             << "\nAccount Number : " << accountNumber
             << "\nAccount Type   : " << accountType
             << "\nBalance        : $" << balance
             << "\nInterest Rate  : " << interestRate * 100 << "%"
             << "\n";
    }
};

// Initialize static member
int bankAccount::nextAccountNumber = 1000;

int main()
{
    bankAccount customers[10];

    customers[0] = bankAccount("John Smith", "Checking", 1500.00, 0.02);
    customers[1] = bankAccount("Mary Jones", "Savings", 3000.00, 0.04);

    customers[0].deposit(500);
    customers[0].withdraw(200);

    customers[1].addInterest();

    cout << "Customer Accounts\n";
    customers[0].print();
    customers[1].print();

    return 0;
}
