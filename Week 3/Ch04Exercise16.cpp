#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Named constants
    const double OPTION1_DELIVERY = 5000.0;
    const double OPTION1_PUBLICATION = 20000.0;

    const double OPTION2_RATE = 0.125;        // 12.5%

    const double OPTION3_RATE_FIRST = 0.10;   // 10%
    const int OPTION3_LIMIT = 4000;
    const double OPTION3_RATE_AFTER = 0.14;   // 14%

    double netPrice;
    int copiesSold;

    // User input
    cout << "Enter the net price of each copy: $";
    cin >> netPrice;

    cout << "Enter the estimated number of copies sold: ";
    cin >> copiesSold;

    // Option 1 royalties
    double royaltiesOption1 = OPTION1_DELIVERY + OPTION1_PUBLICATION;

    // Option 2 royalties
    double royaltiesOption2 = OPTION2_RATE * netPrice * copiesSold;

    // Option 3 royalties
    double royaltiesOption3;

    if (copiesSold <= OPTION3_LIMIT)
    {
        royaltiesOption3 = copiesSold * netPrice * OPTION3_RATE_FIRST;
    }
    else
    {
        royaltiesOption3 = (OPTION3_LIMIT * netPrice * OPTION3_RATE_FIRST)
                         + ((copiesSold - OPTION3_LIMIT) * netPrice * OPTION3_RATE_AFTER);
    }

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nRoyalties under each option:\n";
    cout << "Option 1: $" << royaltiesOption1 << endl;
    cout << "Option 2: $" << royaltiesOption2 << endl;
    cout << "Option 3: $" << royaltiesOption3 << endl;

    // Determine best option
    cout << "\nBest option: ";

    if (royaltiesOption1 >= royaltiesOption2 && royaltiesOption1 >= royaltiesOption3)
        cout << "Option 1\n";
    else if (royaltiesOption2 >= royaltiesOption1 && royaltiesOption2 >= royaltiesOption3)
        cout << "Option 2\n";
    else
        cout << "Option 3\n";

    return 0;
}

