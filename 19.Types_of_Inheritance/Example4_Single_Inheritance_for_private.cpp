
#include <iostream>
using namespace std;
class B 
{ 
    int a;
    public:
    int b;
    void getab();
    int geta()
    {return a;}
    
    void showa()
    {cout << "a ="<< a;}
};
class D:private B
{
    int c;
    public:
    void mul()
    {getab();
    c=b*geta();}
    
    void display()
    {
        showa();
        cout << endl << "b ="<< b << endl; 
    cout << "c ="<< c << endl ;}
};
void B:: getab()
{cout << endl << "enter the vales of a and b "<<endl;
cin>> a>> b;}

int main() {
    D d;
    d.mul();
    d.display();
    return 0;
}