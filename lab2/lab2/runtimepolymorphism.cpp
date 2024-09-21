#include<iostream>
using namespace std;
class media
{
  protected :
  	char title[50];
  	float price;
   public:	
	  media(char*s,float a)
	  {
	  	strcpy(title, s);
	  	price =a;
	  }
	  virtual void display() {}
	  
};
class book: public media
{
	int pages;
	public:
		book(char*s,float a,int p):media(s,a)
		{
			pages=p;
		}
		void display();
		
};
class tape : public media
{
    float time;
public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};

void book::display()
{
    cout << "\nTitle: " << title;
    cout << "\nPages: " << pages;
    cout << "\nPrice: " << price;
}

void tape::display()
{
    cout << "\nTitle: " << title;
    cout << "\nPlay time: " << time << " mins";
    cout << "\nPrice: " << price;
}

int main()
{
    char *title = new char[30];
    float price, time;
    int pages;

    // Book details
    cout << "\nENTER BOOK DETAILS\n";
    cout << "Title: "; cin >> title;
    cout << "Price: "; cin >> price;
    cout << "Pages: "; cin >> pages;

    book book1(title, price, pages);

    // Tape details
    cout << "\nENTER TAPE DETAILS\n";
    cout << "Title: "; cin >> title;
    cout << "Price: "; cin >> price;
    cout << "Play time (mins): "; cin >> time;

    tape tape1(title, price, time);

    book1.display();
    tape1.display();

    return 0;
}