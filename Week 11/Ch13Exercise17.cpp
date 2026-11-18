#include <iostream>
#include <vector>
#include <random>
#include <stdexcept>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dist(10.0, 100.0);

    vector<double> numbers;

    try {
        for (int i = 0; i < 25; i++) {
            double num = dist(gen);

            if (num > 90.0) {
                throw runtime_error("Generated number is greater than 90.");
            }

            numbers.push_back(num);
        }

        cout << "Generated Numbers:" << endl;
        for (double num : numbers) {
            cout << num << endl;
        }
    }
    catch (runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
