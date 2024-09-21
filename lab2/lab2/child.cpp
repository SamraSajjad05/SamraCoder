#include<iostream>
using namespace std;
class parent
{
	 protected:
	 	int n;
	 	
};
class child1 : virtual public parent
{
};
class child2 : virtual public parent 
{
};
class baby : public child1, public child2
{
	public:
		void set()
		{
			n=10;
			cout<<"n="<<n<<endl;
		}
};
int main()
{ 
baby obj ;
obj.set();
return 0;
}