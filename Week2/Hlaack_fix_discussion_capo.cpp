#include <iostream>
using namespace std;

int main() {

    char first_char;
    char second_char;
    char third_char;   // moved BEFORE use

    cout << "Please enter three characters: " << endl;
    cin >> first_char >> second_char >> third_char;

    cout << "The third character is " << third_char << "." << endl;
    cout << "Thank you for your time." << endl;

    return 0;
}
