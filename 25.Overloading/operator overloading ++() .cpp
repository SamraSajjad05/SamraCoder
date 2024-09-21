
#include <iostream>
using namespace std;
class A
{
    private:
    int a;
    public :
    A ()
    { a=0;}
    void show()
    { cout << " the value of a ="<< a << endl;}
    void operator ++()
    { a = a+2;}
};
int main ()
{ 
A a1;
a1.show();
++a1;
a1.show();
}