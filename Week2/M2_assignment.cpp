#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    double netBalance, payment, interestRate;
    int d1, d2;

    cout << "Enter net balance: ";
    cin >> netBalance;

    cout << "Enter payment made: ";
    cin >> payment;

    cout << "Enter number of days in billing cycle (d1): ";
    cin >> d1;

    cout << "Enter number of days payment was made before billing cycle (d2): ";
    cin >> d2;

    cout << "Enter monthly interest rate (e.g., 0.0152): ";
    cin >> interestRate;

    // Calculate average daily balance
    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculate interest
    double interest = averageDailyBalance * interestRate;

    // Format output
    cout << fixed << setprecision(2);
    locale loc(""); 
    cout.imbue(loc);

    cout << "\nAverage Daily Balance: $" << averageDailyBalance << endl;
    cout << "Interest: $" << interest << endl;

    return 0;
}
