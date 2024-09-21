
#include <iostream>
using namespace std;
class A 
{ public:
virtual void show()
 //agr hm idr virtual na likhein to ye parent class ko e 3no bar chalai ga ..
 // jb hm virtual likh dety hn to hm khty hn k parent class k pointer ko jo object dia jai ga uski k function ko callout krna 
{ cout << " parent class A " << endl;}};
class B : public A
{ public:
void show()
{ cout << " child class B " << endl;}};
class C : public A
{ public :
void show ()
{ cout << " the child class C "<< endl;}};
int main()
{ A a1;
B a2;
C a3;
A* ptr ;
ptr=&a1;
ptr->show();
ptr =&a2;
ptr->show();
ptr=&a3;
ptr->show();
}