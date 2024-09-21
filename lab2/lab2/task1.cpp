#include <iostream>
using namespace std;
class Animal {
public:
    
    virtual void makeSound() const = 0;


    void eat() const {
        cout << "Animal is eating" << endl;
    }


    virtual ~Animal() = default;
};


class Dog : public Animal {
public:
    
    void makeSound() const override {
        cout << "Bark" << endl;
    }
};


class Cat : public Animal {
public:
    
    void makeSound() const override {
        cout << "Meow" << endl;
    }
};

int main() {
    
    Dog dog;
    Cat cat;

    dog.makeSound();
    dog.eat();

    cat.makeSound();
    cat.eat();

    return 0;
}