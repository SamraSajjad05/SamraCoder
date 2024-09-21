
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

class test :virtual public student 
{protected:
float part1,part2;
public:
void putmarks(float a,float b)
{ part1=a;
part2=b;}
void getmarks()
{cout << "marks obtained : " << endl;
cout <<"Part 1 = "<< part1 << endl;
cout << "Part 2 = " << part2<< endl;}
};
class sports :virtual public student 
{protected:
    float score;
public:
void setscore(float s)
{ score =s;}
void getscore()
{ cout << "sports wt : "<< score << endl;}
};
class result : public test, public sports
{ float total;
public:
void display()
{ total = part1+part2+score;
getrollno();
getmarks();
getscore();
    cout << "total score = " << total << endl;
}
};
int main()
{ result student1;
student1.setrollno(26);
student1.putmarks(456,448);
student1.setscore(9);
student1.display();
}