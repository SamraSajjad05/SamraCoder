
#include <iostream>
using namespace std;
class Base {
public:
   virtual void show() {
        std::cout << "Base class show function\n";
    }
};

class Derived : public Base {
public:
  virtual  void show() { 
        std::cout << "Derived class show function\n";
    }
};
class doubleclass: public Derived 
{ public:
void show() 
{ cout << " Double class show function " << endl;
}
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // This will call Derived's show() method because show() is a virtual function
    basePtr->show();
    Derived *Devptr ;
    doubleclass obj;
    Devptr = &obj;
    Devptr-> show() ;
    

    return 0;
}