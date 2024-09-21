#include <iostream>
using namespace std;
class Vehicle {
public:

    void fuelUp() const {
        cout << "Filling up the tank" << endl;
    }
    
    
    virtual void drive() const = 0;
};


class ElectricVehicle {
public:

    virtual void chargeBattery() const = 0;
};


class Car : public Vehicle {
public:
    
    void drive() const override {
        cout << "Driving the car" << endl;
    }
};


class ElectricCar : public Vehicle, public ElectricVehicle {
public:
    
    void drive() const override {
        cout << "Driving the electric car" << endl;
    }
    
    
    void chargeBattery() const override {
        cout << "Charging the battery" << endl;
    }
};

int main() {
    
    Car myCar;
    myCar.fuelUp();    
    myCar.drive();    
    

    ElectricCar myElectricCar;
    myElectricCar.fuelUp();         
    myElectricCar.drive();          
    myElectricCar.chargeBattery();
    
    return 0;
}