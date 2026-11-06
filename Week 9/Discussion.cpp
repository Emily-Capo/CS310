#include <iostream>
using namespace std;
//Emily Capodarco
// Discussion 
// 11/05/2026

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

// Child class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Child class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl
    }   
};

int main() {
    Dog dog;
    Cat cat;

    dog.speak();
    dog.bark();

    cat.speak();
    cat.meow();

    dog.fly();   

    return 0;
}
