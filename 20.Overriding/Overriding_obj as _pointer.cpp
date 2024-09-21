#include<iostream>
using namespace std;
class Base {
public:
   virtual void show() { // Virtual function
    cout << "Base class show function" << endl;
    }
    virtual ~Base() = default; // Virtual destructor for proper cleanup
};

class Derived : public Base {
public:
    void show() override { // Overriding the base class function
    cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* b = new Derived(); // Base pointer to Derived object
    b->show(); // Calls Derived's show() due to overriding
    delete b;
    return 0;
}
