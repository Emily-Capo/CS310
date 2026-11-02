#include <iostream>
using namespace std;

class Input {
public:
    double length, width;

    void getInput() {
        cout << "Enter rectangle length: ";
        cin >> length;

        cout << "Enter rectangle width: ";
        cin >> width;
    };
}

class Calculation { // Misspelled Calutlation 
public:
    double area;

    void calculateArea(double length, double width) {
        area = length * width;
    };       // Missing semicolon after the class definition

    void displayOutput() {
        cout << "\nRectangle Area: " << area << endl; // There needed to be another ' < ' before the word area
    }
};

int main() {
    Input userInput;
    Calculation result;

    userInput.getInput();

    result.calculateArea(userInput.length, userInput.width);

    result.displayOutput();

    return 0;
}
