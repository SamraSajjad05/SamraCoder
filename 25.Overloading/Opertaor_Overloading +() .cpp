
#include <iostream>
using namespace std;
class A
{
    private:
    int a,b;
    public :
    A ()
    { a=0;
    b= 0;}
    void enter()
    { cout << "enter 1st value" << endl;
    cin>> a;
    cout << "enter 2nd value"<< endl;
        cin>> b;
    }
    void show()
    { cout << " the value of a ="<< a << endl;
        cout << " the value of b ="<< b<< endl;
    }
    A operator+ (A d)
    { A obj;
    obj.a=d.a+a;
    obj.b=d.b+b;
    return obj;
    }
};
int main ()
{
    A x,y,z;
    x.enter();
    y.enter();
x.show();
y.show();
z=x+y;
x.show();
y.show();

    return 0;
}