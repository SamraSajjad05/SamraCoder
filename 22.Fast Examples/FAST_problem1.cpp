
#include <iostream>
using namespace std;
class faculty
{
private:
    int course_c, tn;
    string fname,lname;
protected:
    int age;
public:
    void set()
    {   cout << "enter first name " << endl;
        cin>> fname;
        cout << "enter last name " << endl;
        cin>> lname;
        cout << "enter course count" << endl;
        cin>>course_c;
        cout <<" enter 3 digit telephone number " << endl;
        cin>>tn;
    }
    void display()
    {
        cout << endl<< fname << endl << lname << endl<< course_c<< endl<< tn<< endl;
    }
    void setage(int no)
    {
        age = no ;
    }
    int getage()const
    {
        return age;
    }
};

class Gstudent:public faculty
{
private:
    string first,last,thesis;
    float cgpa;
protected:
    int age;
public:
    void set()
    {   cout <<"enter fiest name , last name ,thesis and cgpa ";
        cin>> first >> last >> thesis >> cgpa;
    }
    void display()
    {
        cout << first << endl << last << endl << thesis << endl<<cgpa<< endl;
    }
    void setage(int a)
    {
        age =a;
    }
    int getage()const
    {
        return age;
    }
};
class UNstudent:public Gstudent
{
private:
    string fname,lname,fyp_name;
    float cgpa;
protected:
    int age;
public:
    void set()
    {   cout <<" enter 1st name , last name and final year project name and cgpa";
        cin>> fname >> lname>> fyp_name >> cgpa ;
    }
    void display()
    {
        cout << fname << endl << lname << endl<< fyp_name << endl << cgpa<< endl;
    }
    void setage(int a)
    {
        age =a;
    }
    int getage()const
    {
        return age;
    }
};

int main() {
    UNstudent obj;
    obj.faculty ::set();
    obj.faculty ::display();
    obj.faculty::setage(19);
    cout << "age is " << obj.faculty::getage();
    return 0;
}