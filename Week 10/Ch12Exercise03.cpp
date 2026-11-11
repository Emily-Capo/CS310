#include <iostream>
#include <iomanip>
#include <string>
// Emily Capodarco
// 11/15/2026

using namespace std;

int main()
{
    int numCandidates;
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;

    string* names = new string[numCandidates];
    int* votes = new int[numCandidates];

    int totalVotes = 0;

    cout << "\nEnter the candidates' last names and votes:\n";

    for (int i = 0; i < numCandidates; i++)
    {
        cout << "Candidate " << i + 1 << " last name: ";
        cin >> names[i];

        cout << "Votes received: ";
        cin >> votes[i];

        totalVotes += votes[i];
    }

    cout << "\nElection Results\n";
    cout << left << setw(15) << "Candidate"
         << setw(10) << "Votes"
         << "Percent" << endl;

    cout << "-------------------------------------\n";

    int winnerIndex = 0;

    for (int i = 0; i < numCandidates; i++)
    {
        double percent =
            (static_cast<double>(votes[i]) / totalVotes) * 100;

        cout << left << setw(15) << names[i]
             << setw(10) << votes[i]
             << fixed << setprecision(2)
             << percent << "%" << endl;

        if (votes[i] > votes[winnerIndex])
        {
            winnerIndex = i;
        }
    }

    cout << "\nWinner of the election: "
         << names[winnerIndex] << endl;

    delete[] names;
    delete[] votes;

    return 0;
}
