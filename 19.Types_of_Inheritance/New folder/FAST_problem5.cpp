
#include <iostream>
using namespace std;
class vehicle
{protected:
double speed,distance;
float duration;
public:
void setspeed(double s)
{speed = s;}
double getspeed()const
{return speed;}

void setdistance(double d)
{distance =d;}
double getdistance()const
{return distance;}

void getcomputeduration()
{ if(speed!=0)
{ duration = distance/speed;}
cout << duration<< "s";
}
};

class wheelvehicle:public vehicle
{
    protected:
    int wheels;
    public:
    void setwheels(int w)
    {wheels =w;}
    int getwheels()const
    {return wheels;}
};
class wingvehicle:public vehicle
{int wings;
public:
void setwings(int w)
{wings =w;}
int getwings()const
{return wings;}
};
class truck:public wheelvehicle
{ double carryingload;
public:
void setload(double l)
{carryingload = l;}
double getload()const 
{return carryingload;}
};

int main() {
truck obj;
obj.setwheels(4);
cout << "wheels are ="<< obj.getwheels()<< endl;
obj.setspeed(100);
cout<< "speed of moving is ="<< obj.getspeed()<< "kms^-1"<< endl;
obj.setdistance(110);
cout<< "distance covered is ="<<obj.getdistance()<< "km"<<endl;
cout << "compute duration is = ";
obj.getcomputeduration();
    return 0;
}