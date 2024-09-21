
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
    
    A operator ++()
    { A obj;
        a=a+2;
obj.a=a;
return obj;
    }
};
int main ()
{
    A x,y;
x.show();
y.show();
y=++x;
x.show();
y.show();

    return 0;
}