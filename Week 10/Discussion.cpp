#include <iostream>
using namespace std;

int main() {
    int number = 25;
    int ptr = &number;

    cout << "Number " << *ptr << endl;

    return 0;
}
