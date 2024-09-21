#include <iostream>
using namespace std;
class A      
{
   protected:
     int n;
};
class B:virtual public A 
 {   
};
class C:public virtual A  
{   
};
class baby:public B,public C      
{
  public:
    void s()
  {
    n=100;
    cout<<"class n="<<n<<endl;
	}
};
int main()
{
  baby obj1;
  obj1.s();
}