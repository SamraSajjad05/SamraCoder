#include <iostream>
using namespace std;

class CustomerData {
protected:
    string customerName;
    int customerID;
    std::string PhoneNumber;

public:

    void setCustomerName(std::string name) { customerName = name; }
    void setCustomerID(int id) { customerID = id; }
    void setPhoneNumber(std::string phone) { PhoneNumber = phone; }

    std::string getCustomerName() const { return customerName; }
    int getCustomerID() const { return customerID; }
    std::string getPhoneNumber() const { return PhoneNumber; }
};



class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;

    void updateDiscountLevel() {
        if (purchasesAmount >= 2000)
            discountLevel = 10.0;
        else if (purchasesAmount >= 1500)
            discountLevel = 7.0;
        else if (purchasesAmount >= 1000)
            discountLevel = 6.0;
        else if (purchasesAmount >= 500)
            discountLevel = 5.0;
        else
            discountLevel = 0.0;
    }
    

public:
void display () 
{
cout << " purchase amount = " << purchasesAmount << endl;
cout << " discount level = " << discountLevel << "%" ; }

    void setPurchasesAmount(double amount) {
        purchasesAmount = amount;
        updateDiscountLevel();
    }

};


int main() {
    
PreferredCustomer obj;
obj.setCustomerName("sibgha");
obj.setCustomerID(12345);
obj.setPhoneNumber("03143168536");
    // Displaying customer information and discount level
    cout<< "Customer Name: " << obj.getCustomerName() << endl;
    cout << "Customer ID: " << obj.getCustomerID() << endl;
    cout << "Phone: " << obj.getPhoneNumber() << endl;

    obj. setPurchasesAmount(1800) ;
    obj. display() ;

    return 0;
}