#include <iostream>

int main() {
    std::cout << "There are two errors regarding pointers within this program..." << std::endl;
    std::cout << "Can you find them and fix them?" << std::endl;

    double grade_percentage = 89.91;
    double* ptr = &grade_percentage; // Changed int* to double* because grade_percentage is a double. 

    double test_score_a = 92.23;
    double test_score_b = 88.19;

    double* p1 = &test_score_a;
    double* p2 = &test_score_b;
    double average = (*p1 + *p2) / 2; // Fixed the avergae because you cant add two pointers together 
                                      // Instead dereference them and add the vaulues they point to
    std::cout << "Average between A and B: " << average << std::endl; // Fixed this line so that the above fixed would run

    std::cout << "Press enter to exit..." << std::endl;
    std::getchar();
}
