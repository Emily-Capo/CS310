#include <iostream>
#include <iomanip>
#include <string>
// Emily Capodarco
// Ch8 Exercise
// 10/25/2026
using namespace std;

int main() {
    const int NUM_CANDIDATES = 5;
    string names[NUM_CANDIDATES];
    int votes[NUM_CANDIDATES];
    int totalVotes = 0;

    cout << "Enter the last names of five candidates and their votes:\n";

    for (int i = 0; i < NUM_CANDIDATES; i++) {
        cout << "Candidate " << i + 1 << " last name: ";
        cin >> names[i];

        cout << "Votes received: ";
        cin >> votes[i];

        totalVotes += votes[i];
    }

    cout << "\nElection Results:\n";
    cout << left << setw(15) << "Candidate"
         << setw(10) << "Votes"
         << setw(10) << "Percent" << endl;

    cout << "----------------------------------------\n";

    int winnerIndex = 0;

    for (int i = 0; i < NUM_CANDIDATES; i++) {
        double percent = (static_cast<double>(votes[i]) / totalVotes) * 100;

        cout << left << setw(15) << names[i]
             << setw(10) << votes[i]
             << fixed << setprecision(2)
             << percent << "%" << endl;

        if (votes[i] > votes[winnerIndex]) {
            winnerIndex = i;
        }
    }

    cout << "\nWinner of the election: " << names[winnerIndex] << endl;

    return 0;
}

