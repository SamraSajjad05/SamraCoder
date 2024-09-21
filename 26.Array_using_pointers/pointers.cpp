#include <iostream>
using namespace std;
#include <conio.h>
int main()
{ int a, *ptr1, **ptr2;
ptr1 =&a;
ptr2 = &ptr1;
cout<< "the adress of a"<< endl<< ptr1 << endl;
cout << "the adress of ptr1"<<endl<< ptr2<< endl;
cout<<"\n\n";
cout << "after incrementing the adress value"<< endl;
ptr2+=2;
cout << "the adress of ptr1"<< endl << ptr2<< endl;
}
	
