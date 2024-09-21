
#include <iostream>
using namespace std;
class A 
{ public:
A()
{ cout << "constructing A"<< endl;}
void show()
{ cout << "hello!! any problem??" << endl;}
};
class B : virtual public A
{ public:
B()
{ cout << "constructing B" << endl;}
};
class C:virtual public A
{ public:
C()
{ cout << " constructing C"<< endl;}
};
class D: public B,public C
{ public:
D ()
{ cout << "Constructing D"<< endl;}
};
int main()
{ D obj;
obj.show();}