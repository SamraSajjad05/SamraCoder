#include <iostream>
using namespace std;

// Abstract base class
class PaymentMethod {
public:
    // Pure virtual functions to be overridden by derived classes
    virtual void processPayment(double amount) = 0;
    virtual void refund(double amount) = 0;
};

// Derived class for CreditCard
class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
    }

    void refund(double amount) override {
        cout << "Refunding $" << amount << " to credit card." << endl;
    }
};

// Derived class for PayPal
class PayPal : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }

    void refund(double amount) override {
        cout << "Refunding $" << amount << " to PayPal account." << endl;
    }
};

// Derived class for BankTransfer
class BankTransfer : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing bank transfer payment of $" << amount << endl;
    }

    void refund(double amount) override {
        cout << "Refunding $" << amount << " via bank transfer." << endl;
    }
};

// Main function to test the classes
int main() {
    // Create objects of each payment method
    CreditCard myCreditCard;
    PayPal myPayPal;
    BankTransfer myBankTransfer;

    // Process payments using different methods
    myCreditCard.processPayment(100.0);   // Credit card payment of $100
    myPayPal.processPayment(200.0);       // PayPal payment of $200
    myBankTransfer.processPayment(300.0); // Bank transfer payment of $300

    cout << endl;

    // Refund payments using different methods
    myCreditCard.refund(50.0);            // Refund $50 to credit card
    myPayPal.refund(75.0);                // Refund $75 to PayPal account
    myBankTransfer.refund(100.0);         // Refund $100 via bank transfer

    return 0;
}