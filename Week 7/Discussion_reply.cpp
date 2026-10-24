#include <iostream>
using namespace std;

int main() {
    int numbers[2][3] = {
        {10, 20, 30}, // Missing Comma 
        {40, 50, 60}
    };

    cout << "Displaying Array..:" << endl;

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) { // C0l --> col. simple fix from 0 to o to correct the mistake
            cout << numbers[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
