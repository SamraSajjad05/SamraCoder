
#include <iostream>
using namespace std;
class student 
{protected :
int rollno;
public:
void setrollno(int a)
{rollno=a;}
void getrollno()
{cout <<"roll no =" << rollno<< endl;}
};

class test : public student 
{protected:
float sub1,sub2;
public:
void putmarks(float a,float b)
{ sub1=a;
sub2=b;}
void getmarks()
{ cout <<"1st sub marks = "<< sub1 << endl;
cout << "2nd sub marks = " << sub2<< endl;}
};
class result : public test
{ float total;
public:
void display()
{ total = sub1+sub2;
getrollno();
getmarks();
cout << "total ="<< total << endl;}
};
int main()
{ result student1;
student1.setrollno(26);
student1.putmarks(75.7,92.5);
student1.display();
}




