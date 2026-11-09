#include <iostream>
#include <iomanip>
using namespace std;

// Base Class
class bankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    bankAccount(int accNum = 0, double bal = 0.0)
    {
        accountNumber = accNum;
        balance = bal;
    }

    void setAccountNumber(int accNum)
    {
        accountNumber = accNum;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }

    double getBalance() const
    {
        return balance;
    }

    virtual void deposit(double amount)
    {
        balance += amount;
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds.\n";
    }

    virtual void print() const
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
    }
};

// Checking Account Class
class checkingAccount : public bankAccount
{
private:
    double interestRate;
    double minimumBalance;
    double serviceCharges;

public:
    checkingAccount(int accNum = 0, double bal = 0.0,
                    double rate = 0.0, double minBal = 0.0,
                    double charges = 0.0)
        : bankAccount(accNum, bal)
    {
        interestRate = rate;
        minimumBalance = minBal;
        serviceCharges = charges;
    }

    void setInterestRate(double rate)
    {
        interestRate = rate;
    }

    double getInterestRate() const
    {
        return interestRate;
    }

    void setMinimumBalance(double minBal)
    {
        minimumBalance = minBal;
    }

    double getMinimumBalance() const
    {
        return minimumBalance;
    }

    void setServiceCharges(double charges)
    {
        serviceCharges = charges;
    }

    double getServiceCharges() const
    {
        return serviceCharges;
    }

    void postInterest()
    {
        balance += balance * interestRate;
    }

    bool belowMinimumBalance() const
    {
        return balance < minimumBalance;
    }

    void writeCheck(double amount)
    {
        withdraw(amount);
    }

    void withdraw(double amount) override
    {
        if (amount <= balance)
        {
            balance -= amount;

            if (balance < minimumBalance)
                balance -= serviceCharges;
        }
        else
        {
            cout << "Insufficient funds.\n";
        }
    }

    void print() const override
    {
        cout << "\nChecking Account Information\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate * 100 << "%\n";
        cout << "Minimum Balance: $" << minimumBalance << endl;
        cout << "Service Charges: $" << serviceCharges << endl;
    }
};

// Savings Account Class
class savingsAccount : public bankAccount
{
private:
    double interestRate;

public:
    savingsAccount(int accNum = 0, double bal = 0.0,
                   double rate = 0.0)
        : bankAccount(accNum, bal)
    {
        interestRate = rate;
    }

    void setInterestRate(double rate)
    {
        interestRate = rate;
    }

    double getInterestRate() const
    {
        return interestRate;
    }

    void postInterest()
    {
        balance += balance * interestRate;
    }

    void withdraw(double amount) override
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds.\n";
    }

    void print() const override
    {
        cout << "\nSavings Account Information\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate * 100 << "%\n";
    }
};

// Driver Program
int main()
{
    checkingAccount checkAcc(1001, 1000.00, 0.03, 500.00, 25.00);
    savingsAccount saveAcc(2001, 2000.00, 0.05);

    cout << "Initial Account Information:\n";
    checkAcc.print();
    saveAcc.print();

    cout << "\nProcessing Transactions...\n";

    checkAcc.deposit(200);
    checkAcc.writeCheck(800);
    checkAcc.postInterest();

    saveAcc.deposit(500);
    saveAcc.withdraw(300);
    saveAcc.postInterest();

    cout << "\nUpdated Account Information:\n";
    checkAcc.print();
    saveAcc.print();

    return 0;
}
