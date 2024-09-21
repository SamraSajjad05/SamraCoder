#include <iostream>
using namespace std;
#include <conio.h>
int main()
{ int i, *ptr1,n;
int number[50];
cout <<"enter the value of n"<< endl;
cin>> n;
cout << "enter the values in array one by one" << endl;
for(i=0;i<n;i++)
cin>> number[i];
/* assigning the base adress of number to pointers*/
ptr1=number;
int sum=0;
/*now checking the even numbers in the array*/
for (i=0;i<n;i++)
{
if(*ptr1%2!=0)
sum = sum+*ptr1;
ptr1++;
}

cout << "the sum of odd numbers =" << endl<< sum;
}
