#include <iostream>
// Emily Capodarco
// Exercise 33
// 10/04/2026
using namespace std;

int main() {
    int a, b, t;
    cout << "Enter a, b, and t: ";
    cin >> a >> b >> t;

    int dishes = 0;
    int timeUsed = 0;
    int currentDishTime = a;

    while (timeUsed + currentDishTime <= t) {
        timeUsed += currentDishTime;
        dishes++;
        currentDishTime += b;
    }

    cout << "Bianca can prepare " << dishes << " dishes." << endl;

    return 0;
}
   
