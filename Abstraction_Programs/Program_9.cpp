#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to draw the shape
    virtual void draw() = 0;
    
    // Pure virtual function to calculate the area
    virtual double calculateArea() = 0;
};

// Concrete class for Circle
class Circle : public Shape {
public:
    double radius;

    void draw() {
        cout << "Drawing a Circle with radius " << radius << endl;
    }

    double calculateArea() {
        return 3.14 * radius * radius;  // Using 3.14 instead of M_PI
    }
};

// Concrete class for Rectangle
class Rectangle : public Shape {
public:
    double width, height;

    void draw() {
        cout << "Drawing a Rectangle with width " << width << " and height " << height << endl;
    }

    double calculateArea() {
        return width * height;
    }
};

// Concrete class for Triangle
class Triangle : public Shape {
public:
    double base, height;

    void draw() {
        cout << "Drawing a Triangle with base " << base << " and height " << height << endl;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }
};

// Main function to demonstrate drawing shapes and calculating areas
int main() {
    // Create instances of different shapes
    Circle circle;
    circle.radius = 5.0;

    Rectangle rectangle;
    rectangle.width = 4.0;
    rectangle.height = 6.0;

    Triangle triangle;
    triangle.base = 3.0;
    triangle.height = 7.0;

    // Array of pointers to Shape
    Shape* shapes[] = { &circle, &rectangle, &triangle };

    // Draw shapes and calculate areas
    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calculateArea() << endl;
        cout << endl;  // Add a blank line for readability
    }

    return 0;
}


