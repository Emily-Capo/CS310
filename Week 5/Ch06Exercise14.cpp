#include <iostream>
// Emily Capodarco
// Ch6 Exercise
// 10/09/26
using namespace std;

double computeBilling(double rate, int minutes, char lowIncomeFlag)
{
    int freeMinutes;
    double percent;

    if (lowIncomeFlag == 'Y' || lowIncomeFlag == 'y')
    {
        freeMinutes = 30;
        percent = 0.40;
    }
    else
    {
        freeMinutes = 20;
        percent = 0.70;
    }
   // calculate billable minutes
    int billableMinutes = 0;
    if (minutes > freeMinutes)
        billableMinutes = minutes - freeMinutes;

    double billableHours = billableMinutes / 60.0;

    return rate * percent * billableHours;
}

int main()
{
    double rate;
    int minutes;
    char lowIncome;
    // get user input
    cout << "Enter hourly rate: ";
    cin >> rate;

    cout << "Enter total consulting time (in minutes): ";
    cin >> minutes;

    cout << "Low income? (Y/N): ";
    cin >> lowIncome;
   //call function
    double amount = computeBilling(rate, minutes, lowIncome);
    //output result
    cout << "Billing Amount: $" << amount << endl;

    return 0;
}

