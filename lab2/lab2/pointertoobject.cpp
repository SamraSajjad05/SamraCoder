#include<iostream>
using namespace std;
class test
{
	private:
		int n;
    public:
    	void in()
    	{
    		cout<<"enter number:";
    		cin>>n;
		}
		void out()
		{
			cout<<"the value of n="<<n;
		}
};
int main()
 {#include<iostream>
using namespace std;
class test
{
	private:
		int n;
    public:
    	void in()
    	{
    		cout<<"enter number:";
    		cin>>n;
		}
		void out()
		{
			cout<<"the value of n="<<n;
		}
};
int main()
 {
 	test*ptr;
 	ptr=new test;
 	ptr->in();
 	ptr->out();
	 return 0;
	  }
 	test*ptr;
 	ptr=new test;
 	ptr->in();
 	ptr->out();
	 return 0;
	  }