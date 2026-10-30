#include <iostream>
// Emily Capodarco
// Discussion
// 10/29/2026
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

class Course {
public:
    string courseName;

    void displayCourse() {
        cout << "Course: " << courseName << endl
    }
};

int main() {
    Student s;
    s.name = "Emily";

    Course c;
    c.courseName = "Programming";

    s.display();
    c.displayCourse()

    return 0;
}
