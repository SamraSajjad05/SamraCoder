#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Declared virtual
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Properly overrides base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived obj;
    obj.show(); // Calls Derived's show() due to overriding
    obj.Base::show(); // Calls Base's show()
    return 0;
}
