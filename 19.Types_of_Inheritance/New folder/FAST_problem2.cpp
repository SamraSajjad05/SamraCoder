
#include <iostream>
using namespace std;
class persondata
{ private:
string fname,lname,adress;
public:

void setfname(const string& fn)
{fname = fn;}
string getfname()const
{ return fname;}

void setlname(const string&ln)
{lname=ln;}
string getlname()const
{return lname;}

void setadress(const string&add)
{adress = add;}
string getadress()const
{ return adress;}
};
class customerdata:public persondata
{private:
int customerno;
bool mailinglist;
  public:
  void setcn(int no)
  {customerno=no;
  }
  int getcn()const
  {return customerno;}
  
  void setml(bool s)
  {mailinglist=s;}
  bool getml()const
  {return mailinglist;}
  
  void inputcustomerdata()
  { cout << "enter customer number";
  cin>> customerno;
  cout << "do u want to b on mailing list? (1 for yeah 0 for no )";
  cin>> mailinglist;
}
void displaycustomerdata()const
{ cout<< "customernumber="<< customerno<< endl;

cout << "mailing list ="<< (mailinglist ? "yesh":"no")<< endl;}
};
int main() {
    customerdata obj;
    obj.setfname("sibgha");
    obj.setlname("alamgir");
   obj. setadress("bhjygdu721");
   cout<< "first name ="<< obj.getfname()<< endl;
   cout << "last name ="<< obj.getlname()<< endl;
  cout<< "adress ="<< obj.getadress()<< endl;
  cout << endl;
  obj.inputcustomerdata() ;
  cout << endl;
  obj. displaycustomerdata() ;
 
return 0;
}