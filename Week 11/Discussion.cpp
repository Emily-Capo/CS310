#include <iostream>
#include <string>
using namespace std;

// Class Template
template <typename T>
class Container {
private:
    T value;

public:
    Container(T v) : value(v) {}

    // Overloaded + operator
    Container operator+(const Container& other) {
        return Container(value + other.value);
    }

    void display() {
        cout << value << endl;
    }

    // Member function with exception handling
    void divide(T divisor) {
        try {
            if (divisor == 0) {
                throw runtime_error("Division by zero");
            }

            cout << value / divisor << endl;
        }
        catch (runtime_error& e) {
            cout << e.what() << endl;

            cout << errorMessage << endl;
        }
    }
};

int main() {
    Container<int> num1(20);
    Container<int> num2(10);

    Container<int> result = num1 + num2;

    result.display();

    num1.divide(0);

    
    cout << reslt << endl;

    return 0;
}
   
