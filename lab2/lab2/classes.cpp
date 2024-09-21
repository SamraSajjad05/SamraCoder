#include <iostream>
using namespace std;
class A      
{   public:
     void show()
    {
	  cout<<"base class a"<<endl;
	}
     virtual void display()
    {
	  cout<<"dispaly class a"<<endl;
	}
};
class B:public A     
{
    public:
     void show()
     {
	   cout<<"base class b"<<endl;
	}
     void display()
    {
	  cout<<"dispaly class b"<<endl;
	}
};
class C:public A      
{ 
  public:
   void show()
   {
     cout<<"base class c"<<endl;
	}
     void display()
    {   
	  cout<<"dispaly class c"<<endl;
	  }
};
int main()
{
  A obj1;
  B obj2;
  C obj3;
  A*ptr;
  ptr=&obj1;
  ptr->show();
  ptr->display();
  ptr=&obj2;
  ptr->show();
  ptr->display();
  ptr=&obj3;
  ptr->show();
    ptr->display();
}