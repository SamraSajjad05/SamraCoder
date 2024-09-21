#include <iostream>
using namespace std;

class person {
protected:
    string name, gender;
private:
    int age;
public:
    person(string n, string s, int a) : name(n), gender(s), age(a) {}
};

class employe : public person {
protected:
    double number;
public:
    employe(string n, string s, int a, double num) : person(n, s, a), number(num) {}
    
    void employefun() {
        cout << person::name;
        cout << " Hi " << endl;
    }
};

class unemploye : public person {
public:
    unemploye(string n, string s, int a) : person(n, s, a) {
        cout << "Hi " << n << endl;
    }
};

class businessman : public employe {
public:
    businessman(string n, string s, int a, double num) : employe(n, s, a, num) {}

    void display() {
        employefun();
        cout << employe::number << endl;
    }
};

int main() {
    person obj1("Sibgha", "Female", 19);
    employe obj2("Ayesha", "Female", 18, 978658);
    businessman obj3("Ali", "Male", 20, 156748);
    obj3.display();
}