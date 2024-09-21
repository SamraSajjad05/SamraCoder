
#include <iostream>
using namespace std;
class M 
{protected :
int m;
public:
void setm(int x)
{m =x;
}
};

class N
{protected:
int n;
public:
void setn(int y)
{ n=y;}
};
class P : public M , public N
{
public:
void display()
{ cout << "m = " << m << endl;
cout <<" n = "<< n << endl;
cout << "m*n =" << m*n << endl;}
};
int main()
{ P p;
p.setm(5);
p.setn(6);
p.display();
}