#include <iostream>
using namespace std;
#include <iostream>
class Printable {
public:
    virtual void print() const = 0; 
};


class Document : public Printable {
public:
    void print() const override {
    cout << "Printing Document" << endl;
    }
};

class Image : public Printable {
public:
    void print() const override {
    cout << "Printing Image" << endl;
    }
};

int main() {

    Document doc;
    Image img;
    
    doc.print(); 
    img.print(); 

    return 0;
}