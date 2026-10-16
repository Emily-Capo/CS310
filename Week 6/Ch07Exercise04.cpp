#include <iostream>
#include <string>

// Emily Capodarco
// Mod 6 
// 10/18/2026

using namespace std;

// Function to determine whether a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to remove all vowels from a string
string removeVowels(const string& str) {
    string result = "";
    for (char ch : str) {
        if (!isVowel(ch)) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string noVowels = removeVowels(input);

    cout << "String with vowels removed: " << noVowels << endl;

    return 0;
}

