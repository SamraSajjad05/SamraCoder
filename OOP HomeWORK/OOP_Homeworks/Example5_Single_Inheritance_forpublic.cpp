#include <iostream>
using namespace std;
class B 
{ 
    int a;
    public:
    int b;
    void set()
    { a=5;
    b=10;}
    void mul(int c)
    {
    a=c*b;
    }
    int display()
    {
        return a;

    }
};
class D:public B
{
    int d;
    public:
    void sum(int c)
    {
        d=c;
        d=d+b;}
    void display()
    {cout <<endl <<b << endl << d;}
};
int main() {
    D d;
    d.set();
    d.mul(7);
    cout << d.B ::display();
    d.sum(10);
    d.D::display();

    return 0;
}